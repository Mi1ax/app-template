#include <raylib-cpp.hpp>
#include <imgui.h>
#include <string>

#include "imgui/imgui_impl_raylib.h"

int main() {
    auto window = raylib::Window(1280, 720, "App Templae");
    window.SetTargetFPS(75);
    rlImGuiSetup();

    std::string text = "Everything works fine :)";
    int textSize = 24;
    float color[3] = {
            0, 0, 0
    };

    while(!window.ShouldClose())
    {
        window.BeginDrawing();
        window.ClearBackground(RAYWHITE);
        raylib::DrawText(text,
                         0, 0,
                         textSize,
                         {
                                 static_cast<unsigned char>(color[0] * 255),
                                 static_cast<unsigned char>(color[1] * 255),
                                 static_cast<unsigned char>(color[2] * 255),
                                 255
                         });
        rlImGuiBegin();
        ImGui::Begin("Settings");
        {
            ImGui::InputText("Text", text.data(), 128);
            ImGui::ColorEdit3("Text color", &color[0]);
            ImGui::DragInt("Text size", &textSize,
                           1, 1, 128);
            ImGui::End();
        }
        rlImGuiEnd();
        window.EndDrawing();
    }
	return 0;
}
