#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block {
public:
	Block();
	int id;
	void Draw();
	void Move(int rows, int columns);
	std::vector<Position> cellPositions();
	std::map<int, std::vector<Position>> cells;

private:
	int cellSize;
	int rotationState;
	std::vector<Color> colors;
	int rowOffset;
	int columnOffset;
};
