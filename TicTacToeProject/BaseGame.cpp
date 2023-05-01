#include "BaseGame.h"
#include <iostream>
#include "GameContainers.h"

BaseGame::BaseGame()
{

}

void BaseGame::InitializeGame()
{
	do
	{
		printf("Press 1 to start the game: \n");
		printf("Press 9 to exit the game: \n");
		std::cin >> SelectionInput;

		if (SelectionInput == 1)
		{
			std::unique_ptr<GameContainers> ContainerGame = std::make_unique<GameContainers>();
			ContainerGame->InitialGameSetup();
		}
		else
		{
			printf("Please press a valid input!\n");
		}
	} while (SelectionInput != 9);


}

BaseGame::~BaseGame()
{

}
