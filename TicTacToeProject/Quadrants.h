#pragma once
#include <iostream>
#include <vector>

class Quadrants
{
public:

	size_t QuadrantMinXValue;
	size_t QuadrantMinYValue;
	size_t QuadrantMaxXValue;
	size_t QuadrantMaxYValue;

	char Player1Symbol = 'X';

	Quadrants();

	void SetupQuadrant1();

	void InsertQuadrantValuesIntoBoard(std::vector<std::vector<char>> & BoardInput);

	~Quadrants();



};

