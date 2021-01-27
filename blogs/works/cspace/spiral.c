#include<stdio.h>
#include<SDL2/SDL.h>
#include<math.h>

#define WINDOW_WIDTH (420)
#define WINDOW_HEIGHT (420)
#define PI (3.1415926535)


void moveLine(SDL_Rect *pdestLine, int timer) {

	float radians;
	int radius;
	float tX, tY;
	radius = WINDOW_WIDTH * (1 / (timer / 30));
	radians = (timer * 180) / PI;
	tX =  cos(radians) * radius;
	tY =  sin(radians) * radius;
	pdestLine->x = (int) tX;
	pdestLine->y = (int) tY;
};

int main() {

	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
		printf("ERROR SDL_Init: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Window *win;
	win = SDL_CreateWindow("Tetris", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);

	if (!win) {
		printf("Error win: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	SDL_Renderer *ren;
	Uint32 renderer_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
	ren = SDL_CreateRenderer(win, -1, renderer_flags);
	

	if (!ren) {
		printf("Error ren: %s\n", SDL_GetError());
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Rect destLine;
	SDL_Rect *pdestLine;
	pdestLine = &destLine;
	destLine.w = 4;
	destLine.h = 4;
	destLine.x = WINDOW_WIDTH - 4;
	destLine.y = (WINDOW_WIDTH / 2) - 4;

	SDL_Rect destBack;
	destBack.w = WINDOW_WIDTH;
	destBack.h = WINDOW_HEIGHT;
	destBack.x = 0;
	destBack.y = 0;

	int close_requested = 0;
	int timer = 1;


	while (!close_requested) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				close_requested += 1;
				break;
			}
			/*
			if (event.type == SDL_KEYDOWN && event.key.keysym.scancode == SDL_SCANCODE_ESC) {
				close_requested += 1;
				break;
			}*/
		}

		SDL_RenderClear(ren);

		SDL_SetRenderDrawColor(ren, 0, 0 , 0, 255);
		SDL_RenderFillRect(ren, &destBack);

		SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
		moveLine(pdestLine, timer);
		SDL_RenderFillRect(ren, &destLine);

		timer += 1;
		if (timer / 60 == 0) {
			printf("X: %d	Y: %d\n", destBack.x, destBack.y);
		}

		SDL_RenderPresent(ren);

		SDL_Delay(1000/60);
	}




	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
	return 0;
}
