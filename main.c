#include "raylib.h"

int	main(void)
{
	InitWindow(800, 600, "hello");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(DARKGRAY);
		EndDrawing();
	}

	CloseWindow();

	return (0);
}
