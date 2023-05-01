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

	size_t QuadrantMinXValue;
	size_t QuadrantMinYValue;
	size_t QuadrantMaxXValue;
	size_t QuadrantMaxYValue;
	char Player1Symbol = 'X';


	GameContainers();

	void InitialGameSetup();

	void SetupBoard();

	void PrintBoard();

	void MainGameMenu();

	void Q1Selection();

	void Q2Selection();

	void Q3Selection();

	void Q4Selection();

	void Q5Selection();

	void Q6Selection();

	void Q7Selection();

	void Q8Selection();

	void Q9Selection();


	void QuadrantOverride(size_t &MinX, size_t &MinY, size_t &MaxX, size_t &MaxY);


	~GameContainers();


};

