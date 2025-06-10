#pragma once
#include "grid.h"
#include "diffBlocks.cpp"

class Game {
public:

	Game();
	Block GetRandomBlock();
	std::vector<Block> GetAllBlocks();
	void Draw();
	Grid grid;
	void Controls();
	void MoveBlockLeft();
	void MoveBlockRight();
	void MoveBlockDown();

private:

	std::vector<Block> blocks;
	Block currentBlock;
	Block nextBlock;

};
