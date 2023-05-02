#include "GameContainers.h"
#include "Quadrants.h"
#include "PlayerBaseClass.h"
#include <stdlib.h>


GameContainers::GameContainers()
{

}

//Needs edits
void GameContainers::InitialGameSetup(std::unique_ptr<PlayerBaseClass> &FirstPlayer, std::unique_ptr<PlayerBaseClass> &SecondPlayer)
{
	IsGameOver = false;
	SetupPlayerTurnOrder(FirstPlayer, SecondPlayer);

	//Throw in a Function in the future!!!
	Player1Symbol = FirstPlayer->PlayerSymbol;
	Player2Symbol = SecondPlayer->PlayerSymbol;

	SetupBoard();
	MainGameMenu(FirstPlayer, SecondPlayer);
}

void GameContainers::SetupBoard()
{
	for (size_t i = 0; i < VectorColumn; i++)
	{
		for (size_t j = 0; j < VectorRow; j++)
		{
			BaseBoard[i][j] = BaseSymbol;
			BaseBoard[3][j] = '!';
			BaseBoard[7][j] = '!';
			BaseBoard[i][3] = '!';
			BaseBoard[i][7] = '!';
			BaseBoard[1][1] = '1';
			BaseBoard[1][5] = '2';
			BaseBoard[1][9] = '3';
			BaseBoard[5][1] = '4';
			BaseBoard[5][5] = '5';
			BaseBoard[5][9] = '6';
			BaseBoard[9][1] = '7';
			BaseBoard[9][5] = '8';
			BaseBoard[9][9] = '9';
		}
	}
}

void GameContainers::PrintBoard()
{
	for (size_t i = 0; i < VectorColumn; i++)
	{
		for (size_t j = 0; j < VectorRow; j++)
		{
			std::cout << BaseBoard[i][j];
		}
		std::cout << "\n";
	}
}

void GameContainers::MainGameMenu(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer)
{
	do
	{
		PrintUISetup(FirstPlayer, SecondPlayer);
		SelectedCharacterSetup(FirstPlayer, SecondPlayer);
		PrintBoard();
		printf("Select a Quadrant to Occupy!\n");
		std::cin >> SelectionVariable;

		CheckSelection(SelectionVariable);
		SwapPlayers();
		TurnCounter++;
		CheckIfDraw();

		system("CLS");

	} while (SelectionVariable != 0 && IsGameOver == false);
}

void GameContainers::CheckSelection(int &SelectionVariable)
{
	if (SelectionVariable == 1)
	{
		Q1Selection();
	}
	else if (SelectionVariable == 2)
	{
		Q2Selection();
	}
	else if (SelectionVariable == 3)
	{
		Q3Selection();
	}
	else if (SelectionVariable == 4)
	{
		Q4Selection();
	}
	else if (SelectionVariable == 5)
	{
		Q5Selection();
	}
	else if (SelectionVariable == 6)
	{
		Q6Selection();
	}
	else if (SelectionVariable == 7)
	{
		Q7Selection();
	}
	else if (SelectionVariable == 8)
	{
		Q8Selection();
	}
	else if (SelectionVariable == 9)
	{
		Q9Selection();
	}
}

void GameContainers::Q1Selection()
{
	size_t QuadrantMinXValue = 0;
	size_t QuadrantMinYValue = 0;
	size_t QuadrantMaxXValue = 3;
	size_t QuadrantMaxYValue = 3;

	//Legacy for Testing Quadrant Override
	/*
	for (size_t i = QuadrantMinYValue; i < QuadrantMaxYValue; i++)
	{
		for (size_t j = QuadrantMinXValue; j < QuadrantMaxXValue; j++)
		{
			BaseBoard[i][j] = Player1Symbol;
		}
	}
	*/
	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition1.push_back(CurrentPlayerSymbol);
	WinCondition4.push_back(CurrentPlayerSymbol);
	WinCondition7.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition1);
	CheckifPlayerWon(WinCondition4);
	CheckifPlayerWon(WinCondition7);
}

void GameContainers::Q2Selection()
{
	size_t QuadrantMinXValue = 4;
	size_t QuadrantMinYValue = 0;
	size_t QuadrantMaxXValue = 7;
	size_t QuadrantMaxYValue = 3;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition1.push_back(CurrentPlayerSymbol);
	WinCondition5.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition1);
	CheckifPlayerWon(WinCondition5);
}

void GameContainers::Q3Selection()
{
	size_t QuadrantMinXValue = 8;
	size_t QuadrantMinYValue = 0;
	size_t QuadrantMaxXValue = 11;
	size_t QuadrantMaxYValue = 3;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition1.push_back(CurrentPlayerSymbol);
	WinCondition6.push_back(CurrentPlayerSymbol);
	WinCondition8.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition1);
	CheckifPlayerWon(WinCondition6);
	CheckifPlayerWon(WinCondition8);
}

void GameContainers::Q4Selection()
{
	size_t QuadrantMinXValue = 0;
	size_t QuadrantMinYValue = 4;
	size_t QuadrantMaxXValue = 3;
	size_t QuadrantMaxYValue = 7;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition2.push_back(CurrentPlayerSymbol);
	WinCondition4.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition2);
	CheckifPlayerWon(WinCondition4);
}

void GameContainers::Q5Selection()
{
	size_t QuadrantMinXValue = 4;
	size_t QuadrantMinYValue = 4;
	size_t QuadrantMaxXValue = 7;
	size_t QuadrantMaxYValue = 7;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition2.push_back(CurrentPlayerSymbol);
	WinCondition5.push_back(CurrentPlayerSymbol);
	WinCondition7.push_back(CurrentPlayerSymbol);
	WinCondition8.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition2);
	CheckifPlayerWon(WinCondition5);
	CheckifPlayerWon(WinCondition7);
	CheckifPlayerWon(WinCondition8);
}

void GameContainers::Q6Selection()
{
	size_t QuadrantMinXValue = 8;
	size_t QuadrantMinYValue = 4;
	size_t QuadrantMaxXValue = 11;
	size_t QuadrantMaxYValue = 7;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition2.push_back(CurrentPlayerSymbol);
	WinCondition6.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition2);
	CheckifPlayerWon(WinCondition6);
}

void GameContainers::Q7Selection()
{
	size_t QuadrantMinXValue = 0;
	size_t QuadrantMinYValue = 8;
	size_t QuadrantMaxXValue = 3;
	size_t QuadrantMaxYValue = 11;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition3.push_back(CurrentPlayerSymbol);
	WinCondition4.push_back(CurrentPlayerSymbol);
	WinCondition8.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition4);
	CheckifPlayerWon(WinCondition5);
	CheckifPlayerWon(WinCondition8);
}

void GameContainers::Q8Selection()
{
	size_t QuadrantMinXValue = 4;
	size_t QuadrantMinYValue = 8;
	size_t QuadrantMaxXValue = 7;
	size_t QuadrantMaxYValue = 11;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition3.push_back(CurrentPlayerSymbol);
	WinCondition5.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition3);
	CheckifPlayerWon(WinCondition5);
}

void GameContainers::Q9Selection()
{
	size_t QuadrantMinXValue = 8;
	size_t QuadrantMinYValue = 8;
	size_t QuadrantMaxXValue = 11;
	size_t QuadrantMaxYValue = 11;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
	WinCondition3.push_back(CurrentPlayerSymbol);
	WinCondition6.push_back(CurrentPlayerSymbol);
	WinCondition7.push_back(CurrentPlayerSymbol);
	CheckifPlayerWon(WinCondition3);
	CheckifPlayerWon(WinCondition6);
	CheckifPlayerWon(WinCondition7);
}



void GameContainers::CheckifPlayerWon(std::vector<char>WinConditionVector)
{
	if (WinConditionVector.size() == 3 && WinConditionVector.at(0) == Player1Symbol && WinConditionVector.at(1) == Player1Symbol && WinConditionVector.at(2) == Player1Symbol)
	{
		system("CLS");
		printf("Congrats, Player 1 Wins!\n");
		IsGameOver = true;
		printf("Final Results: \n");
		PrintBoard();
		printf("Press 1 to exit to main menu!\n");
		std::cin >> SelectionVariable;
	}
	else if (WinConditionVector.size() == 3 && WinConditionVector.at(0) == Player2Symbol && WinConditionVector.at(1) == Player2Symbol && WinConditionVector.at(2) == Player2Symbol)
	{
		system("CLS");
		printf("Congrats, Player 2 Wins!\n");
		IsGameOver = true;
		printf("Final Results: \n");
		PrintBoard();
		printf("Press 1 to exit to main menu!\n");
		std::cin >> SelectionVariable;
	}
}

void GameContainers::QuadrantOverride(size_t& MinX, size_t& MinY, size_t& MaxX, size_t& MaxY)
{
	for (size_t i = MinY; i < MaxY; i++)
	{
		for (size_t j = MinX; j < MaxX; j++)
		{
			BaseBoard[i][j] = CurrentPlayerSymbol;
		}
	}
}

void GameContainers::SetupPlayerTurnOrder(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer)
{
	PlayerOrderVector.push_back(FirstPlayer->PlayerName);
	PlayerOrderVector.push_back(SecondPlayer->PlayerName);
}

void GameContainers::SelectedCharacterSetup(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer)
{
	if (PlayerOrderVector.at(0) == FirstPlayer->PlayerName)
	{
		CurrentPlayerName = FirstPlayer->PlayerName;
		CurrentPlayerSymbol = FirstPlayer->PlayerSymbol;
	}
	else
	{
		CurrentPlayerName = SecondPlayer->PlayerName;
		CurrentPlayerSymbol = SecondPlayer->PlayerSymbol;
	}
}

void GameContainers::SwapPlayers()
{
	PlayerOrderVector.push_back(PlayerOrderVector.at(0));
	PlayerOrderVector.erase(std::remove(PlayerOrderVector.begin(), PlayerOrderVector.end(), PlayerOrderVector.at(0)));
}

void GameContainers::PrintUISetup(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer)
{
	if (PlayerOrderVector.at(0) == FirstPlayer->PlayerName)
	{
		FirstPlayer->DisplayInGameUI();
	}
	else
	{
		SecondPlayer->DisplayInGameUI();
	}
}

void GameContainers::CheckIfDraw()
{
	if (TurnCounter == 9)
	{
		printf("It is a draw, try again!\n");
		IsGameOver = true;
		printf("Please press any number to exit\n");
		std::cin >> SelectionVariable;
	}
}

GameContainers::~GameContainers()
{

}
