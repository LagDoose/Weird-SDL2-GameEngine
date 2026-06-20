#include <SDL2/SDL.h>
#include "../include/engine.h"
#include "../include/scene.h"
#include "../include/test.h"

int main() {

  SDLEngine::Engine engineInstance;

  SDLEngine::Menu* run = new SDLEngine::Menu(engineInstance.engineRenderer, engineRenderer);

  //engineInstance.scenes.push_back(run);
  //engineInstance.Update();

  SDL_Log("gona delete this shi");
  delete run;
  return 0;	
}
