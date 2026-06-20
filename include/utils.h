#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "../include/engine.h"

namespace SDLEngine {
	SDL_Texture* CreateText(SDL_Renderer* renderer, const char* text, const char* font, int fontSize, SDL_Color textColor);
	
}