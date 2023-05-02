#include "BaseGame.h"
#include <iostream>
#include "GameContainers.h"
#include "PlayerBaseClass.h"

BaseGame::BaseGame()
{

}

void BaseGame::InitializeGame()
{
	std::unique_ptr<PlayerBaseClass> Player1 = std::make_unique<PlayerBaseClass>("Player 1", 0, 'X');
	std::unique_ptr<PlayerBaseClass> Player2 = std::make_unique<PlayerBaseClass>("Player 2", 0, 'O');


	do
	{
		printf("**********************************\n");
		printf("Press 1 to start the game: \n");
		printf("Press 2 to edit Player 1 details\n");
		printf("Press 3 to edit Player 2 details\n");
		printf("Press 9 to exit the game: \n");
		printf("**********************************\n");
		std::cin >> SelectionInput;

		if (SelectionInput == 1)
		{
			std::unique_ptr<GameContainers> ContainerGame = std::make_unique<GameContainers>();
			ContainerGame->InitialGameSetup(Player1, Player2);
		}
		else if (SelectionInput == 2)
		{
			std::cout << Player1->PlayerName << "\n";
			Player1->ChangePlayerDetails(Player1->PlayerName, Player1->PlayerSymbol);
		}
		else if (SelectionInput == 3)
		{
			Player2->ChangePlayerDetails(Player2->PlayerName, Player2->PlayerSymbol);
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
