#include <SDL.h>
#include <iostream>
#include "draw.h"
#include "sidejumpframe2.h"

void DrawSideJumpFrame3(SDL_Renderer* renderer) {

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
        //DrawRotatedRect(renderer, 280, 330, 150, 20, 120, bodycolor); //reka lewa
        //DrawRotatedRect(renderer, 337, 320, 150, 20, 120, bodycolor); //reka prawa
    DrawRotatedRect(renderer, 285, 520, 50, 180, -10, legscolor); //spodnie prawa
    DrawRotatedRect(renderer, 250, 500, 50, 190, 20, legscolor); //spodnie lewa
    DrawRotatedRect(renderer, 185, 680, 60, 50, 20, shoescolor); //buty
    DrawRotatedRect(renderer, 315, 695, 60, 50, -10, shoescolor); //buty




    // Rysowanie prostokata
    DrawFilledRectangle(renderer, 220, 70, 200, 130, bodycolor); //glowa
    DrawFilledRectangle(renderer, 290, 220, 20, 100, bodycolor); //szyja
    DrawFilledRectangle(renderer, 260, 310, 80, 180, shirtcolor); //koszulka
    DrawFilledRectangle(renderer, 240, 490, 120, 30, beltcolor); //pasek
    //DrawFilledRectangle(renderer, 250, 520, 100, 180, legscolor); //spodnie
    //DrawFilledRectangle(renderer, 240, 700, 120, 50, shoescolor); //buty
    DrawFilledRectangle(renderer, 285, 280, 30, 10, shoescolor); //obroza
    //DrawFilledRectangle(renderer, 270, 330, 20, 150, bodycolor); //reka lewa

    // Rysowanie trójk¹tow
    DrawFilledTriangle(renderer, 220, 800 - 520 - 80, 350, 800 - 470 - 80, 420, 800 - 520 - 80, bodycolor); //broda
    DrawFilledTriangle(renderer, 220, 110, 220, 150, 140, 50, bodycolor); //ucho lewe
    DrawFilledTriangle(renderer, 400, 110, 400, 150, 600 - 120, 50, bodycolor); //ucho prawe
    DrawFilledTriangle(renderer, 310, 170, 310, 190, 360, 180, nosecolor); //nose
    DrawFilledTriangle(renderer, 285, 280, 285, 290, 250, 285, beltcolor); //kolec lewy
    DrawFilledTriangle(renderer, 315, 280, 315, 290, 350, 285, beltcolor); //kolec prawy

    //kolka
    /*
    DrawFilledCircle(renderer, 260, 150, 10, eyescolor1); //oko lewe
    DrawFilledCircle(renderer, 260, 150, 5, eyescolor2);
    DrawFilledCircle(renderer, 380, 150, 10, eyescolor1); //oko prawe
    DrawFilledCircle(renderer, 380, 150, 5, eyescolor2);
    */

    DrawFilledRectangle(renderer, 250, 148, 20, 3, eyescolor2); //oko zamkkniete
    DrawFilledRectangle(renderer, 370, 148, 20, 3, eyescolor2); //oko zamkkniete


    //kopniety prostokat na wierzchu
    DrawRotatedRect(renderer, 270, 330, 20, 150, -30, bodycolor); //reka lewa

    // Prezentacja renderera
    SDL_RenderPresent(renderer);
}

