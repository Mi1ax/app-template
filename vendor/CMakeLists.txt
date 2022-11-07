# ImGui
set(imgui_dir ${CMAKE_CURRENT_SOURCE_DIR}/imgui)
add_library(imgui STATIC)

target_sources(imgui
        PRIVATE
        ${imgui_dir}/imgui_demo.cpp
        ${imgui_dir}/imgui_draw.cpp
        ${imgui_dir}/imgui_tables.cpp
        ${imgui_dir}/imgui_widgets.cpp
        ${imgui_dir}/imgui.cpp
        )

target_include_directories(imgui
        PUBLIC ${imgui_dir}
        PUBLIC ${imgui_dir}/backends≤
        )