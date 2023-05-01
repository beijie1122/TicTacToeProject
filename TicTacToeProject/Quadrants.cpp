#include "Quadrants.h"

Quadrants::Quadrants()
{
	size_t QuadrantMinXValue = 0;
	size_t QuadrantMinYValue = 0;
	size_t QuadrantMaxXValue = 0;
	size_t QuadrantMaxYValue = 0;
}

void Quadrants::SetupQuadrant1()
{
	size_t QuadrantMinXValue = 1;
	size_t QuadrantMinYValue = 1;
	size_t QuadrantMaxXValue = 4;
	size_t QuadrantMaxYValue = 4;
}

void Quadrants::InsertQuadrantValuesIntoBoard(std::vector<std::vector<char>>& BoardInput)
{
	SetupQuadrant1();

	for (size_t i = 1; i < QuadrantMaxYValue; i++)
	{
		for (size_t j = 1; j < QuadrantMaxXValue; j++)
		{
			BoardInput[i][j] = Player1Symbol;
		}
	}
}

Quadrants::~Quadrants()
{

}

