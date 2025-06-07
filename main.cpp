#include <raylib.h>
#include "grid.h"
#include "diffBlocks.cpp"

int main() {

	int screenWidth = 300;
	int screenHeight = 600;
	InitWindow(screenWidth, screenHeight, "Tetris");

	SetTargetFPS(60);
	Color background = { 44, 44, 127, 255 };

	Grid grid = Grid();

	grid.print();

	Iblock block = Iblock();

	while (!WindowShouldClose()) {

		BeginDrawing();

		ClearBackground(background);
		grid.draw();
		block.Draw();

		EndDrawing();
	}
	CloseWindow();
}