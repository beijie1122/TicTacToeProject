#pragma once

#include <iostream>
#include <vector>
#include "PlayerBaseClass.h"

class GameContainers
{
public:

	int SelectionVariable{};

	char BaseSymbol = '~';
	size_t VectorColumn{ 11 };
	size_t VectorRow{ 11 };

	std::vector<std::vector<char>> BaseBoard{ VectorColumn, std::vector<char>(VectorRow) };

	size_t QuadrantMinXValue;
	size_t QuadrantMinYValue;
	size_t QuadrantMaxXValue;
	size_t QuadrantMaxYValue;
	char Player1Symbol;
	char Player2Symbol;

	int TurnCounter;

	std::vector<char> WinCondition1{};
	std::vector<char> WinCondition2{};
	std::vector<char> WinCondition3{};
	std::vector<char> WinCondition4{};
	std::vector<char> WinCondition5{};
	std::vector<char> WinCondition6{};
	std::vector<char> WinCondition7{};
	std::vector<char> WinCondition8{};

	bool IsGameOver = false;

	std::vector<std::string> PlayerOrderVector{};

	std::string CurrentPlayerName;
	char CurrentPlayerSymbol;


	GameContainers();

	void InitialGameSetup(std::unique_ptr<PlayerBaseClass> &FirstPlayer, std::unique_ptr<PlayerBaseClass> &SecondPlayer);

	void SetupBoard();

	void PrintBoard();

	void MainGameMenu(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer);

	void CheckSelection(int &SelectionVariable);

	void Q1Selection();

	void Q2Selection();

	void Q3Selection();

	void Q4Selection();

	void Q5Selection();

	void Q6Selection();

	void Q7Selection();

	void Q8Selection();

	void Q9Selection();

	void CheckifPlayerWon(std::vector<char>WinConditionVector);

	void QuadrantOverride(size_t &MinX, size_t &MinY, size_t &MaxX, size_t &MaxY);

	void SetupPlayerSymbols(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer);

	void CheckIfDraw();


	//Functions involving players

	void SetupPlayerTurnOrder(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer);

	void SelectedCharacterSetup(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer);
	
	void SwapPlayers();

	void PrintUISetup(std::unique_ptr<PlayerBaseClass>& FirstPlayer, std::unique_ptr<PlayerBaseClass>& SecondPlayer);


	~GameContainers();


};

