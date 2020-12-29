#include<stdio.h>
#include<SDL2/SDL.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


#define WINDOW_WIDTH (640)
#define WINDOW_HEIGHT (480)






int main() {

	srand(time(0));
	int rNeg;

	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
		printf("ERROR with SDL_Init: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Window *win;
	win = SDL_CreateWindow("Pong", 0, 0, 640, 480, 0);
	if (!win) {
		printf("Error SDL_CreateWindow: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	SDL_Renderer *ren;
	Uint32 renderer_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
	ren = SDL_CreateRenderer(win, -1, renderer_flags);
	if (!ren) {
		printf("Error SDL_CreateRenderer: %s\n", SDL_GetError());
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Rect destPlayer;
	SDL_Rect destComp;
	SDL_Rect destBall;

	destPlayer.w = 8;
	destPlayer.h = 64;
	destPlayer.x = 32;
	destPlayer.y = (WINDOW_HEIGHT /2) - (destPlayer.w / 2);

	destComp.w = 8;
	destComp.h = 64;
	destComp.x = WINDOW_WIDTH - 32;
	destComp.y = (WINDOW_HEIGHT /2) - (destPlayer.w / 2);

	destBall.x = 420;
	destBall.y = 215;
	destBall.w = 8;
	destBall.h = 8;

	int ballVelX = 2;
	int ballVelY = 0;
	int close_requested = 0;


	int down = 0;
	int up = 0;


	int ballSpeed = 3;

	while (!close_requested) {

		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {

				case SDL_QUIT:
					close_requested += 1;
					break;
				case SDL_KEYDOWN:
					switch (event.key.keysym.scancode) {
						case SDL_SCANCODE_W:
						case SDL_SCANCODE_UP:
						case SDL_SCANCODE_K:
							up = 1;
							break;
						case SDL_SCANCODE_S:
						case SDL_SCANCODE_DOWN:
						case SDL_SCANCODE_J:
							down = 1;
							break;
					}
					break;
				case SDL_KEYUP:
					switch (event.key.keysym.scancode) {
						case SDL_SCANCODE_W:
						case SDL_SCANCODE_UP:
						case SDL_SCANCODE_K:
							up = 0;
							break;
						case SDL_SCANCODE_S:
						case SDL_SCANCODE_DOWN:
						case SDL_SCANCODE_J:
							down = 0;
							break;
					}
					break;
			}
		}

		//moveBall(ballVelX, ballVelY, destBall.x, destBall.y);
		
		if (ballVelX > 0) {
			destBall.x += ballSpeed;
		}
		if (ballVelX < 0) {
			destBall.x -= ballSpeed;
		} 
		destBall.y += ballVelY;




		//moveComp();
		//


		

		destComp.y = destBall.y - 32;
		
		
		//movePlayer();
		if (down > 0 && destPlayer.y < (WINDOW_HEIGHT - destPlayer.h - 16)) {
			destPlayer.y += 5;
		}
		if (up > 0 && destPlayer.y > 16) {
			destPlayer.y -= 5;
		}



		//drawBoard();
		//
		
		SDL_RenderClear(ren);
		SDL_SetRenderDrawColor(ren, 0, 0, 255, 255);
		//SDL_RenderDrawRect(ren, &destPlayer);
		//SDL_RenderDrawRect(ren, &destComp);
		//SDL_RenderDrawRect(ren, &destBall);
		SDL_RenderFillRect(ren, &destPlayer);
		SDL_RenderFillRect(ren, &destComp);
		SDL_RenderFillRect(ren, &destBall);
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
		SDL_RenderPresent(ren);


		//check collision


		//computer paddle collision

		if ( (destBall.x + destBall.w) >= (destComp.x) && (destBall.y >= (destComp.y - destBall.h) ) && (destBall.y <= (destComp.y + destComp.h) ) ) {
			ballVelX = -ballVelX;
			ballVelY = rand() % 9 + 0;
			rNeg = rand() % 1000 +0;
			if (rNeg > 500) {
				ballVelY = -ballVelY;
			}
		}


		//player paddle collision

		if ( (destBall.x) <= (destPlayer.x + destPlayer.w) && (destBall.y >= (destPlayer.y - destBall.h) ) && (destBall.y <= (destPlayer.y + destPlayer.h) ) ) {
			ballVelX = -ballVelX;
			ballVelY = rand() % 9 + 0;
			rNeg = rand() % 1000 +0;
			if (rNeg > 500) {
				ballVelY = -ballVelY;
			}
		}


		//left board edge
		
		if (destBall.x <= 0) {
			close_requested += 1;
			printf("YOU LOOSE\n");
		}

		//top board edge
		//


		if (destBall.y <= 1 || destBall.y >= (WINDOW_HEIGHT -1)) {
			ballVelY = -ballVelY;
		}




		SDL_Delay(1000/60);
		printf("UP: %d\nDown: %d\n", up, down);

	}

	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
	printf("ALL DONE :)\n");
	return 0;
}

	




	
