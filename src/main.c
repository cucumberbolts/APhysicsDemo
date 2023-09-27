#include <stdint.h>

#include <raylib.h>

int main() {
    SetTraceLogLevel(LOG_ERROR);

    const int32_t screenWidth = 800;
    const int32_t screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "raylib window");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(WHITE);
            DrawText("Hello world!", 350, 215, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
