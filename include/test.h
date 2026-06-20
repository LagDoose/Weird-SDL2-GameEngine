#pragma once
#include "../include/scene.h"
#include "../include/engine.h"

namespace SDLEngine {

class Menu: public Scene {

public:

private:

};

}


/*

class testLevel: public Scene {

public:

	testLevel(SDL_Renderer* renderer) {

	white = {255, 255, 255, 255};
	myRect = {(1920-1024)/2,(1080-128)/2,1024,128};
	textTexture = SDLEngine::CreateText(renderer, "I LOVE VEERONICAAAAAAA", "source/fonts/vicecityfont/rageitalic.ttf", 24, white);
	}
	~testLevel() {}
	


	void Update(SDL_Window* window, SDL_Renderer* renderer) override {
		SDL_RenderCopy(renderer, textTexture, NULL, &myRect );
	}
	
private:

	SDL_Color white;
	SDL_Rect myRect;
	SDL_Texture* textTexture=nullptr;

};


 */
