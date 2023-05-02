#include "PlayerBaseClass.h"

PlayerBaseClass::PlayerBaseClass()
{

}

PlayerBaseClass::PlayerBaseClass(std::string Name, int WinCount, char Symbol)
{
	PlayerName = Name;
	PlayerWinCount = WinCount;
	PlayerSymbol = Symbol;
}

void PlayerBaseClass::DisplayInGameUI()
{
	printf("********************\n");
	std::cout << "**" << PlayerName << "**" << PlayerWinCount << "**" << PlayerSymbol << "**" << "\n";
	printf("********************\n");
}

void PlayerBaseClass::ChangePlayerDetails(std::string& PlayerName, char& PlayerSymbol)
{
	DisplayInGameUI();
	printf("What name would you like to have?\n");
	std::cin >> PlayerNameInput;
	PlayerName = PlayerNameInput;
	printf("What symbol would you like to have?\n");
	std::cin >> PlayerSymbolInput;
	PlayerSymbol = PlayerSymbolInput;

	printf("Succuessfully changed name and symbol!\n");

}

PlayerBaseClass::~PlayerBaseClass()
{

}