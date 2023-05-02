#pragma once

#include <iostream>
#include <string>


class PlayerBaseClass
{
public:

	PlayerBaseClass();

	PlayerBaseClass(std::string Name, int WinCount, char Symbol);

	std::string PlayerName{};
	std::string PlayerNameInput{};

	int PlayerWinCount = 0;

	char PlayerSymbol;
	char PlayerSymbolInput;

	void DisplayInGameUI();

	void ChangePlayerDetails(std::string &PlayerName, char &PlayerSymbol);

	~PlayerBaseClass();

};

