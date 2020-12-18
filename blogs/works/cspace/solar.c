#include<stdio.h>
#include<SDL2/SDL.h>
#include<math.h>


#define WINDOW_WIDTH (768)
#define WINDOW_HEIGHT (768)
#define PI (3.1415926535)

int speedFactor = 12345;

float getPos(float deg, float r, int dir) {

	deg = deg / speedFactor;
	float radians;
	radians = (deg*180) / PI;
	float result;

	if (dir == 1) {
		result = sin(radians);
	} else if (dir == 2) {
		result = cos(radians);
	} else {
		printf("ERROR!!! BAD getPOS bad :(\n");
	} 
	if (result == 0) {
		return(0);
	}
	else { 
		return(result*r);
	}
}

int main() {

	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
		printf("ERROR with SDL ini: %s\n", SDL_GetError());
		return 1;
	}
	SDL_Window *win;
	win = SDL_CreateWindow("Systemate Solare",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			768, 768, 0);

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

	int close_requested = 0;
	int timer = 0;

	SDL_Rect destSol;
	destSol.w = 4;
	destSol.h = 4;
	destSol.y = (WINDOW_HEIGHT / 2) - (destSol.h / 2);
	destSol.x = (WINDOW_WIDTH / 2) - (destSol.h / 2);
;



	SDL_Rect destMer;
	destMer.w = 4;
	destMer.h = 4;

	SDL_Rect destv;
	destv.w = 4;
	destv.h = 4;

	SDL_Rect destt;
	destt.w = 4;
	destt.h = 4;

	SDL_Rect destmar;
	destmar.w = 4;
	destmar.h = 4;

	SDL_Rect destj;
	destj.w = 4;
	destj.h = 4;

	SDL_Rect dests;
	dests.w = 4;
	dests.h = 4;

	SDL_Rect destu;
	destu.w = 4;
	destu.h = 4;

	SDL_Rect destn;
	destn.w = 4;
	destn.h = 4;

	while (close_requested < 1) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				close_requested = 1;
				break;
			}
			if (event.type == SDL_KEYDOWN) {
				if (event.key.keysym.scancode == SDL_SCANCODE_SPACE) {
					speedFactor = 1;
					timer += 42069;
				}
			}
			if (event.type == SDL_KEYUP) {
				if (event.key.keysym.scancode == SDL_SCANCODE_SPACE) {
					speedFactor = 12345;
				}
			}

		}

		
		SDL_RenderClear(renderer);

		//draw Soldd
		SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
		SDL_RenderFillRect(renderer, &destSol);


		//draw Mer
		
		destMer.x = (int) (getPos(timer*5, 6, 1) ) + destSol.x;
		destMer.y = (int) (getPos(timer*5, 6, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 99, 58, 26, 255);
		SDL_RenderFillRect(renderer, &destMer);	

		//draw v
		
		destv.x = (int) (getPos((timer*3/2), 10, 1) ) + destSol.x;
		destv.y = (int) (getPos(timer*3/2, 10, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 181, 46, 193, 255);
		SDL_RenderFillRect(renderer, &destv);	

		destt.x = (int) (getPos((timer), 16, 1) ) + destSol.x;
		destt.y = (int) (getPos(timer, 16, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 47, 135, 9, 255);
		SDL_RenderFillRect(renderer, &destt);	


		destmar.x = (int) (getPos((timer/1.8), 22, 1) ) + destSol.x;
		destmar.y = (int) (getPos(timer/1.8, 22, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 252, 23, 7, 255);
		SDL_RenderFillRect(renderer, &destmar);	

		destj.x = (int) (getPos((timer/11.9), 82, 1) ) + destSol.x;
		destj.y = (int) (getPos(timer/11.9, 82, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 252, 146, 7, 255);
		SDL_RenderFillRect(renderer, &destj);	


		dests.x = (int) (getPos((timer/29.5), 142, 1) ) + destSol.x;
		dests.y = (int) (getPos(timer/29.5, 142, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 252, 232, 7, 255);
		SDL_RenderFillRect(renderer, &dests);	

		destu.x = (int) (getPos((timer/84), 288, 1) ) + destSol.x;
		destu.y = (int) (getPos(timer/84, 288, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 145, 144, 130, 255);
		SDL_RenderFillRect(renderer, &destu);	

		destn.x = (int) (getPos((timer/164.8), 350, 1) ) + destSol.x;
		destn.y = (int) (getPos(timer/164.8, 350, 2) ) + destSol.y;		
		SDL_SetRenderDrawColor(renderer, 7, 234, 211, 255);
		SDL_RenderFillRect(renderer, &destn);	

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderPresent(renderer);
		timer += 1;
		SDL_Delay(1000/60);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);
	SDL_Quit();
	printf("ALL DONE :)\n");
	return 0;

}




