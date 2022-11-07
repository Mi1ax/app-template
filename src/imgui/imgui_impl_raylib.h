#ifndef RAYLIB_TEMPLATE_IMGUI_IMPL_RAYLIB_H
#define RAYLIB_TEMPLATE_IMGUI_IMPL_RAYLIB_H

#include <raylib.h>

// basic API
void rlImGuiSetup();
void SetDarkThemeColors();
void rlImGuiBegin();
void rlImGuiEnd();
void rlImGuiShutdown();

// Advanced StartupAPI
void rlImGuiBeginInitImGui();
void rlImGuiEndInitImGui();
void rlImGuiReloadFonts();

// image API
[[maybe_unused]] void rlImGuiImage(const Texture *image);
[[maybe_unused]] bool rlImGuiImageButton(const Texture *image);
[[maybe_unused]] void rlImGuiImageSize(const Texture *image, int width, int height);
[[maybe_unused]] void rlImGuiImageRect(const Texture* image, int destWidth, int destHeight, Rectangle sourceRect);


#endif //RAYLIB_TEMPLATE_IMGUI_IMPL_RAYLIB_H
