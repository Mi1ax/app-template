#include <raylib.h>

int main() {
    InitWindow(640, 360, "App Template");
    SetTargetFPS(75);

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello :)",
                 0,
                 0,
                 24, BLACK);
        EndDrawing();
    }

    CloseWindow();
	return 0;
}
