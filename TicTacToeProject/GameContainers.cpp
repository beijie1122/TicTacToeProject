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


	} while (SelectionVariable != 0);
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
}

void GameContainers::Q2Selection()
{
	size_t QuadrantMinXValue = 4;
	size_t QuadrantMinYValue = 0;
	size_t QuadrantMaxXValue = 7;
	size_t QuadrantMaxYValue = 3;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::Q3Selection()
{
	size_t QuadrantMinXValue = 8;
	size_t QuadrantMinYValue = 0;
	size_t QuadrantMaxXValue = 11;
	size_t QuadrantMaxYValue = 3;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::Q4Selection()
{
	size_t QuadrantMinXValue = 0;
	size_t QuadrantMinYValue = 4;
	size_t QuadrantMaxXValue = 3;
	size_t QuadrantMaxYValue = 7;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::Q5Selection()
{
	size_t QuadrantMinXValue = 4;
	size_t QuadrantMinYValue = 4;
	size_t QuadrantMaxXValue = 7;
	size_t QuadrantMaxYValue = 7;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::Q6Selection()
{
	size_t QuadrantMinXValue = 8;
	size_t QuadrantMinYValue = 4;
	size_t QuadrantMaxXValue = 11;
	size_t QuadrantMaxYValue = 7;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::Q7Selection()
{
	size_t QuadrantMinXValue = 0;
	size_t QuadrantMinYValue = 8;
	size_t QuadrantMaxXValue = 3;
	size_t QuadrantMaxYValue = 11;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::Q8Selection()
{
	size_t QuadrantMinXValue = 4;
	size_t QuadrantMinYValue = 8;
	size_t QuadrantMaxXValue = 7;
	size_t QuadrantMaxYValue = 11;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::Q9Selection()
{
	size_t QuadrantMinXValue = 8;
	size_t QuadrantMinYValue = 8;
	size_t QuadrantMaxXValue = 11;
	size_t QuadrantMaxYValue = 11;

	QuadrantOverride(QuadrantMinXValue, QuadrantMinYValue, QuadrantMaxXValue, QuadrantMaxYValue);
}

void GameContainers::QuadrantOverride(size_t& MinX, size_t& MinY, size_t& MaxX, size_t& MaxY)
{
	for (size_t i = MinY; i < MaxY; i++)
	{
		for (size_t j = MinX; j < MaxX; j++)
		{
			BaseBoard[i][j] = Player1Symbol;
		}
	}
}

GameContainers::~GameContainers()
{

}
