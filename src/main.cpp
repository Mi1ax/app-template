#include <raylib.h>

#include "imgui/imgui_impl_raylib.h"
#include "imgui.h"

int main() {
    InitWindow(1280, 720, "App Template");
    SetTargetFPS(75);

    rlImGuiSetup();

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello :)",
                 0,
                 0,
                 24, BLACK);
        rlImGuiBegin();
        ImGui::ShowDemoWindow();
        rlImGuiEnd();
        EndDrawing();
    }

    rlImGuiShutdown();
    CloseWindow();
	return 0;
}
