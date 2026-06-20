#pragma once
#include <SDL2/SDL.h>
#include "../include/utils.h"

namespace SDLEngine {

class Engine;

class Scene {
public:
	virtual void Update( SDL_Window* window, SDL_Renderer* renderer, Engine* engine ) =0;
private:

};



}