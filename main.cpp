#include <iostream>
#include <raylib.h>

int main() {
  InitWindow(800, 600, "My RayLib Window");
  SetTargetFPS(60);

  while(!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    DrawText("Jai Maharashtra !", 10, 10, 20, BLACK);

    DrawFPS(10, 40);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}