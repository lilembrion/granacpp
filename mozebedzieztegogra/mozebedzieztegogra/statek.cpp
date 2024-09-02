#include <iostream>
#include "draw.h"
#include "spaceship.h"

void DrawSpaceShip(SDL_Renderer* renderer) {

	// Kolor trójk¹ta
	SDL_Color shipcolor = { 95, 95, 95, 255 }; // szary
	SDL_Color windowcolor = { 145, 145, 70, 255 }; // zolty
	SDL_Color buttoncolor1 = { 245, 145, 70, 255 };
	SDL_Color buttoncolor2 = { 45, 145, 70, 255 };
	SDL_Color buttoncolor3 = { 45, 45, 250, 255 };

	// Czyszczenie ekranu
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Czarny
	SDL_RenderClear(renderer);

	DrawFilledEllipse(renderer, 300, 420, 200, 50, shipcolor);
	DrawFilledHalfCircle(renderer, 300, 400, 80, shipcolor);
	DrawFilledHalfCircle(renderer, 300, 400, 60, windowcolor);
	DrawFilledRectangle(renderer, 230, 410, 20, 10, buttoncolor1);
	DrawFilledRectangle(renderer, 260, 410, 20, 10, buttoncolor2);
	DrawFilledCircle(renderer, 350, 415, 5, buttoncolor3);

	// Prezentacja renderera
	SDL_RenderPresent(renderer);
}