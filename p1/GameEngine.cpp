#include "headers/Game.h"
#include "headers/Object.h"
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL.h>
SDL_Window* win ;
SDL_Renderer* ren_fm;
SDL_Surface* surf_fm ;
SDL_Texture* tex ;
int status = 0;
#include "firstmenu.cpp"
#include "settingsmenu.cpp"



using namespace std;


int main(int argc, char const *argv[]) {
  bool windowloop = true;
  while(windowloop){
  Loop:switch(status){
    case 0: firstmenu();  break;
    case 1: settingsmenu(); break;
  }
}
//SDL_CreateWindowAndRenderer(350,600,0,&win,&ren_fm);
  return 0;
}
