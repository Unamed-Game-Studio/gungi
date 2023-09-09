//
// Created by renan on 08/09/23.
//
#include "raylib.h"
#include "Application.h"

Application::Application() = default;
Application::~Application(){
    CloseWindow();
}

int Application::run() {
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    return 0;
}