#include "raylib.h"

int main(void) {
    InitWindow(800, 450, "My First Game");
    SetTargetFPS(60);

    int x = 400, y = 225;

    while (!WindowShouldClose()) {
        if (IsKeyDown(KEY_RIGHT)) x += 4;
        if (IsKeyDown(KEY_LEFT))  x -= 4;
        if (IsKeyDown(KEY_DOWN))  y += 4;
        if (IsKeyDown(KEY_UP))    y -= 4;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(x, y, 20, RED);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}