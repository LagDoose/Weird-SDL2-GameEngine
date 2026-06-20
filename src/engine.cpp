#include "../include/engine.h"

namespace SDLEngine {

  int Engine::Init() {
    if(SDL_Init(SDL_INIT_TIMER | SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) {return 1;}
    if(TTF_Init() < 0) { return 1;}

    engineWindow = SDL_CreateWindow("TestWindow", 28, 28, 256,256, SDL_WINDOW_RESIZABLE );
    engineRenderer = SDL_CreateRenderer(engineWindow,0,0);

    if(SDL_RenderSetLogicalSize(engineRenderer, 1920, 1080) != 0) {return 1;} //1920x1080

    running=true;

    return 0;
  }

  void Engine::EventHandler() { 

    while( SDL_PollEvent(&event)) {
      if ( event.type==SDL_QUIT ) {this->Quit();} 
      if ( event.type==SDL_MOUSEBUTTONDOWN) {
        this->mousePosX = event.button.x;
        this->mousePosY = event.button.y;
      }
    }
  }

  void Engine::Update() {

    while(running) {
      this->EventHandler();
      SDL_RenderClear(engineRenderer);
      //scenes[0]->Update(engineWindow,engineRenderer, this);
      SDL_RenderPresent(engineRenderer);
    }

  }


  void Engine::Quit() {
    TTF_Quit();
    SDL_Quit();
    running=false;
    SDL_DestroyWindow(engineWindow);
    SDL_DestroyRenderer(engineRenderer);
  }

  Engine::Engine() {
    if (Init() != 0) {SDL_Log("nah");}
  }
  Engine::~Engine() {Quit(); }

}
