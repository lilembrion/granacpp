#include <SDL.h>
#include "frame1.h"
#include "sidejumpframe2.h"
#include "sidejumpframe3.h"
#include "moves.h"

void SideJumpAnimation() {

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
        DrawFrame1(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(200); // Delay for 250 milliseconds

        DrawSideJumpFrame2(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(200);

        DrawSideJumpFrame3(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(200);

        DrawSideJumpFrame2(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(200);

        DrawFrame1(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(200); // Delay for 250 milliseconds

    }

    // Cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
