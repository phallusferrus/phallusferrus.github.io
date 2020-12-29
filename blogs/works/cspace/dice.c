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


	SDL_Rect destBack;
	destBack.w = 256;
	destBack.h = 256;
	destBack.x = 0;
	destBack.y = 0;
	
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
	destDie2a.w = 16;
	destDie2a.h = 16;
	destDie2a.x = 64+16;
	destDie2a.y = 64+16;

	SDL_Rect destDie2b;
	destDie2b.w = 16;
	destDie2b.h = 16;
	destDie2b.x = 64+96;
	destDie2b.y = 64+96;

	SDL_Rect destDie4a;
	destDie4a.w = 16;
	destDie4a.h = 16;
	destDie4a.x = 64+16;
	destDie4a.y = 64+96;

	SDL_Rect destDie4b;
	destDie4b.w = 16;
	destDie4b.h = 16;
	destDie4b.x = 64+96;
	destDie4b.y = 64+16;

	SDL_Rect destDie6a;
	destDie6a.w = 16;
	destDie6a.h = 16;
	destDie6a.x = 64+16;
	destDie6a.y = 64+56;

	SDL_Rect destDie6b;
	destDie6b.w = 16;
	destDie6b.h = 16;
	destDie6b.x = 64+96;
	destDie6b.y = 64+56;
	




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




		SDL_RenderClear(ren);
		//Background
		
		if (randCounter < 1) {
			SDL_SetRenderDrawColor(ren, 0, 0, 0 ,255);
		} else {
			SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);
		}

		SDL_RenderFillRect(ren, &destBack);


		//Draw the Die itself
		SDL_SetRenderDrawColor(ren, 255, 255,255, 255);
		SDL_RenderFillRect(ren, &destDie);

		//draw the dot(s)
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
		switch (randReturn) {
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
	
		//Outroz
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
		SDL_RenderPresent(ren);
		SDL_Delay(1000/30);
	}
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
	printf("ALL DONE :)\n");
	return 0;
}


		




