#pragma once

#include <iostream>
#include <vector>

class GameContainers
{
public:

	int SelectionVariable{};

	char BaseSymbol = '~';
	size_t VectorColumn{ 11 };
	size_t VectorRow{ 11 };

	std::vector<std::vector<char>> BaseBoard{ VectorColumn, std::vector<char>(VectorRow) };


	GameContainers();

	void InitialGameSetup();

	void SetupBoard();

	void PrintBoard();

	void MainGameMenu();

	void Q1Test();


	~GameContainers();


};

