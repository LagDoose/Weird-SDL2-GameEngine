#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <vector>

#include "../include/utils.h"
#include "../include/scene.h"

namespace SDLEngine {

class Engine {

public:
  Engine();
  ~Engine();

  int Init();
  void Quit();
  void EventHandler();
  void Update();

  std::vector<Scene*> scenes;

  TTF_Font* FONT = nullptr;

  bool running=false;
  SDL_Event event;

  SDL_Window* engineWindow;
  SDL_Renderer* engineRenderer;

  SDL_Texture* textTexture;

//event vars
  int mousePosX;
  int mousePosY;
private:

};
}
