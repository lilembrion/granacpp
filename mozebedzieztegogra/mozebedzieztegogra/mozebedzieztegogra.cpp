#include <SDL.h>
#include <SDL_main.h>
#include <string.h>
#include "moves.h"

class Character {
    string name;
    int life;
    void JumpAnimation();
    void WalkAnimation();
    void SideJumpAnimation();// - nie dziala
};

int main(int argc, char* argv[]) {
   //JumpAnimation();
   // WalkAnimation();
    Character jasiek;
    jasiek.SideJumpAnimation();
    return 0;
}
