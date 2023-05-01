#include "GameContainers.h"
#include "Quadrants.h"


GameContainers::GameContainers()
{

}

void GameContainers::InitialGameSetup()
{
	SetupBoard();
	MainGameMenu();

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

void GameContainers::MainGameMenu()
{
	do
	{
		PrintBoard();
		printf("Select a Quadrant to Occupy!\n");
		std::cin >> SelectionVariable;

		if (SelectionVariable == 1)
		{
			Q1Test();
		}


	} while (SelectionVariable != 9);
}

void GameContainers::Q1Test()
{
	size_t QuadrantMinXValue = 1;
	size_t QuadrantMinYValue = 1;
	size_t QuadrantMaxXValue = 3;
	size_t QuadrantMaxYValue = 3;
	char Player1Symbol = 'X';

	for (size_t i = 0; i < QuadrantMaxYValue; i++)
	{
		for (size_t j = 0; j < QuadrantMaxXValue; j++)
		{
			BaseBoard[i][j] = Player1Symbol;
		}
	}
}

GameContainers::~GameContainers()
{

}
