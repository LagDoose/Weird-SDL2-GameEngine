#include "../include/utils.h" 

namespace SDLEngine {

SDL_Texture* CreateText(SDL_Renderer* renderer, const char* text, const char* font, int fontSize, SDL_Color textColor) {

	TTF_Font* FONT = TTF_OpenFont(font, fontSize);

	SDL_Surface* surface = TTF_RenderUTF8_Blended(FONT, text, textColor);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

    SDL_FreeSurface(surface); 
    TTF_CloseFont(FONT);
	
	return texture;
 }
}

 //"source/fonts/vicecityfont/rageitalic.ttf"