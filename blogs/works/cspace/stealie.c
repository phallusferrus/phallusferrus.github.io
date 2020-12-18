#include<stdio.h>
#include<SDL2/SDL.h>


#define WINDOW_WIDTH (256)
#define WINDOW_HEIGHT (256)



int main() {
	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
		printf("ERROR with SDL ini: %s\n", SDL_GetError());
		return 1;
	}
	SDL_Window *win;
	win = SDL_CreateWindow("Salve Terra",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			256, 256, 0);

	if (!win) {
		printf("Some kind of error here: %s", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	SDL_Renderer *renderer;
	Uint32 renderer_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
	renderer = SDL_CreateRenderer(win, -1, renderer_flags);

	if (!renderer) {
		printf("Error with Renderer creation: %s\n", SDL_GetError());
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Surface *bitmapSurface;

	bitmapSurface = SDL_LoadBMP("stealie.bmp");
	if (!bitmapSurface) {
		printf("ERRor with bitmapLoading: %s\n", SDL_GetError());
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}
 SDL_Texture *bitmapTex;
	bitmapTex = SDL_CreateTextureFromSurface(renderer, bitmapSurface);
	SDL_FreeSurface(bitmapSurface);
	if (!bitmapTex) {
		printf("Error with bitmapTex: %s\n", SDL_GetError());
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}
	printf("Check 1\n");


	SDL_Rect dest;
	SDL_QueryTexture(bitmapTex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (WINDOW_WIDTH - dest.w) / 2;
	dest.y = (WINDOW_HEIGHT - dest.h) /2;

	int close_requested = 0;
	while (close_requested < 1) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				close_requested = 1;
				break;
			}
		}
		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, bitmapTex, NULL, &dest);
		SDL_RenderPresent(renderer);
	}
		

	SDL_DestroyTexture(bitmapTex);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);
	SDL_Quit();


	printf("INIT done :)\n");
	return 0;
}
