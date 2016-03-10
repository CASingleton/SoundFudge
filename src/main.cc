#include <iostream>
#include <SDL/SDL.h>

int main (int argc, char * argv[])
{
  std::cout << "starting..." << std::endl;

  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Delay(10000);

  SDL_Quit();
}
