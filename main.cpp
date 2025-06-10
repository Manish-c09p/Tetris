#include <raylib.h>
#include "game.h"

int main() {

	int screenWidth = 300;
	int screenHeight = 600;
	InitWindow(screenWidth, screenHeight, "Tetris");

	SetTargetFPS(60);
	Color background = { 44, 44, 127, 255 };

	Game game = Game();

	while (!WindowShouldClose()) {

		game.Controls();
		BeginDrawing();

		ClearBackground(background);
		game.Draw();

		EndDrawing();
	}
	CloseWindow();
}