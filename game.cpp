#include "game.h"
#include <random>

Game::Game() {

	grid = Grid();
	blocks = GetAllBlocks();
	currentBlock = GetRandomBlock();
	nextBlock = GetRandomBlock();
}

Block Game::GetRandomBlock() {

	if (blocks.empty()) {
		blocks = GetAllBlocks();
	}

	int randomBlockIndex = rand() % blocks.size();
	Block block = blocks[randomBlockIndex];
	blocks.erase(blocks.begin() + randomBlockIndex);
	return block;
}

std::vector<Block> Game::GetAllBlocks() {
	return { Iblock(), Jblock(), Lblock(), Oblock(), Zblock(), Tblock(), Sblock() };
}

void Game::Draw() {
	grid.draw(); // This calls the draw function in Grid Class in grid.cpp file
	currentBlock.Draw(); // This calls the Draw function in Draw Class in block.cpp file since currentBlock is initialized to GetRamdomBlock() which calls the Block Class.
}

void Game::Controls() {
	int Key = GetKeyPressed();
	switch (Key) {
	case KEY_LEFT:
		MoveBlockLeft();
		break;
	case KEY_RIGHT:
		MoveBlockRight();
		break;
	case KEY_DOWN:
		MoveBlockDown();
		break;
	}
}

void Game::MoveBlockLeft() {
	currentBlock.Move(0, -1); // This calls the diffBlocks.cpp to change the Move coordinates
}

void Game::MoveBlockRight() {
	currentBlock.Move(0, 1);
}

void Game::MoveBlockDown() {
	currentBlock.Move(1, 0);
}
