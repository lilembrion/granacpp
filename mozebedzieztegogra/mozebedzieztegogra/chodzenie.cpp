#include <SDL.h>
#include "frame1.h"
#include "frame2.h"
#include "frame3.h"
#include "frame4.h"
#include "moves.h"

void WalkAnimation() {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        SDL_Log("Nie mo�na zainicjalizowa� SDL: %s", SDL_GetError());
        return;
    }

    // Create window
    SDL_Window* window = SDL_CreateWindow("Animation", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 800, SDL_WINDOW_SHOWN);
    if (!window) {
        SDL_Log("Nie mo�na utworzy� okna: %s", SDL_GetError());
        SDL_Quit();
        return;
    }

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        SDL_Log("Nie mo�na utworzy� renderera: %s", SDL_GetError());
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
        SDL_Delay(250); // Delay for 250 milliseconds

        DrawFrame4(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(25);

        DrawFrame2(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(250);

        DrawFrame4(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(250);
      
    }

    // Cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
