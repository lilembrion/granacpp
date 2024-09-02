#include <iostream>
#include "draw.h"
#include "jumpframe1.h"

void DrawJumpFrame1(SDL_Renderer* renderer) {

	// Kolor trójk¹ta
	SDL_Color bodycolor = { 201, 227, 154, 255 }; // jasnozielony
	SDL_Color nosecolor = { 164, 199, 97, 255 }; // ciemniejszy jasnozielony
	SDL_Color eyescolor1 = { 235, 235, 235, 255 }; // prawie bialy
	SDL_Color eyescolor2 = { 102, 131, 45, 255 }; // ciemnozielony
	SDL_Color shirtcolor = { 154, 63, 147, 255 }; // fiolet
	SDL_Color beltcolor = { 82, 32, 78, 255 }; // ciemny fiolet
	SDL_Color legscolor = { 40, 127, 103, 255 }; // morski
	SDL_Color shoescolor = { 30, 67, 56, 255 }; // ciemny morski

	// Czyszczenie ekranu
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Czarny
	SDL_RenderClear(renderer);

	//kopniete prostokaty
	DrawRotatedRect(renderer, 280, 330, 150, 20, 120, bodycolor); //reka lewa
	DrawRotatedRect(renderer, 337, 320, 150, 20, 60, bodycolor); //reka prawa

	// Rysowanie prostokata
	DrawFilledRectangle(renderer, 200, 70, 200, 130, bodycolor); //glowa
	DrawFilledRectangle(renderer, 290, 220, 20, 100, bodycolor); //szyja
	DrawFilledRectangle(renderer, 260, 310, 80, 180, shirtcolor); //koszulka
	DrawFilledRectangle(renderer, 240, 490, 120, 30, beltcolor); //pasek
	DrawFilledRectangle(renderer, 250, 520, 100, 180, legscolor); //spodnie
	DrawFilledRectangle(renderer, 240, 700, 120, 50, shoescolor); //buty
	DrawFilledRectangle(renderer, 285, 280, 30, 10, shoescolor); //obroza

	// Rysowanie trójk¹tow
	DrawFilledTriangle(renderer, 200, 800 - 520 - 80, 300, 800 - 470 - 80, 400, 800 - 520 - 80, bodycolor); //broda
	DrawFilledTriangle(renderer, 200, 110, 200, 150, 120, 50, bodycolor); //ucho lewe
	DrawFilledTriangle(renderer, 400, 110, 400, 150, 600 - 120, 50, bodycolor); //ucho prawe
	DrawFilledTriangle(renderer, 290, 170, 290, 190, 340, 180, nosecolor); //nose
	DrawFilledTriangle(renderer, 285, 280, 285, 290, 250, 285, beltcolor); //kolec lewy
	DrawFilledTriangle(renderer, 315, 280, 315, 290, 350, 285, beltcolor); //kolec prawy

	//kolka
	DrawFilledCircle(renderer, 240, 150, 10, eyescolor1); //oko lewe
	DrawFilledCircle(renderer, 240, 150, 5, eyescolor2);
	DrawFilledCircle(renderer, 360, 150, 10, eyescolor1); //oko prawe
	DrawFilledCircle(renderer, 360, 150, 5, eyescolor2);

	// Prezentacja renderera
	SDL_RenderPresent(renderer);
}