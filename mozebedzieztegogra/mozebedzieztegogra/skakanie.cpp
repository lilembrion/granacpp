#include <SDL.h>
#include "jumpframe1.h"
#include "jumpframe2.h"
#include "jumpframe3.h"
#include "moves.h"

void JumpAnimation() {

    // Initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        SDL_Log("Nie mo¿na zainicjalizowaæ SDL: %s", SDL_GetError());
        return;
    }

    // Create window
    SDL_Window* window = SDL_CreateWindow("Animation", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 800, SDL_WINDOW_SHOWN);
    if (!window) {
        SDL_Log("Nie mo¿na utworzyæ okna: %s", SDL_GetError());
        SDL_Quit();
        return;
    }

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        SDL_Log("Nie mo¿na utworzyæ renderera: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return;
    }

    // Main loop
    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        // Draw frames in sequence
        DrawJumpFrame1(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(150); // Delay for 250 milliseconds

        DrawJumpFrame2(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(150);

        DrawJumpFrame3(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(150);

        DrawJumpFrame2(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(150);
    }

    // Cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
