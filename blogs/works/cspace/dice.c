#include<stdio.h>
#include<SDL2/SDL.h>
#include<stdlib.h>
#include<time.h>

int main() {

	srand(time(0));

	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
		printf("ERROR SDL_Init: %s\n", SDL_GetError());
		return 1;
	}
	SDL_Window *win;
	win = SDL_CreateWindow("Dice Roll!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 256, 256, 0);

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

	int close_requested = 0;
	int randCounter = 0;
	int randReturn = 0;

	SDL_Rect destDie;
	destDie.w = 128;
	destDie.h = 128;
	destDie.x = 64;
	destDie.y = 64;

	SDL_Rect destDie1;
	destDie1.w = 16;
	destDie1.h = 16;
	destDie1.x = 64+56;
	destDie1.y = 64+56;

	SDL_Rect destDie2a;
	destDie1.w = 16;
	destDie1.h = 16;
	destDie1.x = 64+16;
	destDie1.y = 64+16;

	SDL_Rect destDie2b;
	destDie1.w = 16;
	destDie1.h = 16;
	destDie1.x = 64+96;
	destDie1.y = 64+96;

	SDL_Rect destDie4a;
	destDie1.w = 16;
	destDie1.h = 16;
	destDie1.x = 64+16;
	destDie1.y = 64+96;

	SDL_Rect destDie4b;
	destDie1.w = 16;
	destDie1.h = 16;
	destDie1.x = 64+96;
	destDie1.y = 64+16;

	SDL_Rect destDie6a;
	destDie1.w = 16;
	destDie1.h = 16;
	destDie1.x = 64+16;
	destDie1.y = 64+64;

	SDL_Rect destDie6b;
	destDie1.w = 16;
	destDie1.h = 16;
	destDie1.x = 64+96;
	destDie1.y = 64+64;




	while (!close_requested) {

		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT:
					close_requested += 1;
					break;
				case SDL_KEYDOWN:
					switch (event.key.keysym.scancode) {
						case SDL_SCANCODE_SPACE:
							randCounter = 69;
							break;
					}
			}
		}


		if (randCounter > 0) {
			randReturn = rand() % 6 + 1;
			printf("Testin: %d	%d\n", randReturn, randCounter);
			SDL_Delay(1000/(4*randCounter+1));
			randCounter -= 1;
		}

		//Introz
		SDL_RenderClear(ren);


		SDL_SetRenderDrawColor(ren, 255, 255,255, 255);
		SDL_RenderFillRect(ren, &destDie);
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
		switch (randReturn) {
			case 0:
				SDL_RenderFillRect(ren, &destDie);
				break;
			case 1:
				SDL_RenderFillRect(ren, &destDie1);
				break;
			case 2:	
				SDL_RenderFillRect(ren, &destDie2a);
				SDL_RenderFillRect(ren, &destDie2b);

				break;
			case 3:
				SDL_RenderFillRect(ren, &destDie1);
				SDL_RenderFillRect(ren, &destDie2a);
				SDL_RenderFillRect(ren, &destDie2b);
				break;
			case 4:
				SDL_RenderFillRect(ren, &destDie2a);
				SDL_RenderFillRect(ren, &destDie2b);
				SDL_RenderFillRect(ren, &destDie4a);
				SDL_RenderFillRect(ren, &destDie4b);
				break;
			case 5:
				SDL_RenderFillRect(ren, &destDie1);
				SDL_RenderFillRect(ren, &destDie2a);
				SDL_RenderFillRect(ren, &destDie2b);
				SDL_RenderFillRect(ren, &destDie4a);
				SDL_RenderFillRect(ren, &destDie4b);
				break;
			case 6:
				SDL_RenderFillRect(ren, &destDie2a);
				SDL_RenderFillRect(ren, &destDie2b);
				SDL_RenderFillRect(ren, &destDie4a);
				SDL_RenderFillRect(ren, &destDie4b);
				SDL_RenderFillRect(ren, &destDie6a);
				SDL_RenderFillRect(ren, &destDie6b);
				break;
		}
	

		//Background
		if (randCounter == 0 || randCounter == 1) {
			SDL_SetRenderDrawColor(ren, 0, 0, 0 ,255);
		} else {
			SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);
		}
		//Outroz
		SDL_RenderPresent(ren);
		SDL_Delay(1000/60);
	}
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
	printf("ALL DONE :)\n");
	return 0;
}


		




