#include <iostream>
#include <vector>
#include "BaseGame.h"

int main()
{
	std::unique_ptr<BaseGame> StartGame = std::make_unique<BaseGame>();

	StartGame->InitializeGame();

	size_t Quad1XMax = 3;
	size_t Quad1YMax = 3;
	size_t Quad2XMax = 3;
	size_t Quad2YMax = 7;
	size_t Quad3XMax = 3;
	size_t Quad3YMax = 11;
	char Player1Symbol = 'X';

	//for (size_t i = 0; i < Quad1YMax; i++)
	//{
	//	for (size_t j = 0; j < Quad1XMax; j++)
	//	{
	//		BaseBoard[i][j] = Player1Symbol;
	//	}
	//}

	/**
	for (size_t i = 0; i < Quad3XMax; i++)
	{
		for (size_t j = 8; j < Quad3YMax; j++)
		{
			BaseBoard[i][j] = Player1Symbol;
		}
	}

	for (size_t i = 0; i < VectorColumn; i++)
	{
		for (size_t j = 0; j < VectorRow; j++)
		{
			std::cout << BaseBoard[i][j];
		}
		std::cout << "\n";
	}
	*/

	return 0;
}