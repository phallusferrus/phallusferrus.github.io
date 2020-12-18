#include<stdio.h>
#include<SDL2/SDL.h>
#include<math.h>
//#include<SDL2/SDL_image.h>
//
//


#define WINDOW_WIDTH (640)
#define WINDOW_HEIGHT (480)

#define SCROLL_SPEED (150)
#define PI (3.141592653)

/*
gcc -o sdl sdl.c -lSDL2

WITH math.h
gcc -o sdl sdl.c -lSDL2 -lm

*/


float mathtest(float i, float dir) {

/*
	for (i=0; i<360; i++) {
		float x;
		float y;
		float rads;
		rads = ( (i * 180) / PI);
		x = sin(rads);
		y = cos(rads);
		printf("(%f, %f)\n", x, y);
	}*/
	printf("Check 4, TIMER: %f, DIR: %f\n", i, dir);
	float rads;
	i = i / 526;
	rads = (i*180) / PI;
	float val = 0;
	int radius = 128;
	if (dir == 2) {
		val = cos(rads);
	} else if (dir == 1) {
		val = sin(rads);
	} else {
		printf("Error in the mathtest function");
	}
	return(val*radius);
}

int main(void) {
	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
		printf("ERROR with SDL ini: %s\n", SDL_GetError());
		return 1;
	}
	SDL_Window *win;
	win = SDL_CreateWindow("Salve Terra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
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

	bitmapSurface = SDL_LoadBMP("X.bmp");
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
	dest.y = (WINDOW_HEIGHT - dest.h) / 2;

	SDL_Rect centerPoint;
	centerPoint.w = 16;
	centerPoint.h = 16;

	int close_requested = 0;
	while (close_requested < 1) {
		printf("Check 2\n");

		SDL_Event event;
		while (SDL_PollEvent(&event)) {

			switch (event.type) {
				case SDL_QUIT:
					close_requested = 1;
					break;
				case SDL_KEYDOWN:
					switch (event.key.keysym.scancode) {
						case SDL_SCANCODE_W:
						case SDL_SCANCODE_UP:
							close_requested = 1;
							break;
						case SDL_SCANCODE_A:
						case SDL_SCANCODE_LEFT:
							close_requested = 2;
							break;
						case SDL_SCANCODE_S:
						case SDL_SCANCODE_DOWN:
							close_requested = 3;
							break;
						case SDL_SCANCODE_D:
						case SDL_SCANCODE_RIGHT:
							close_requested = 4;
							break;
					}
					break;
			}
		}

		int timer;
		timer = 1;
		float y_pos;
		float x_pos;
		y_pos = 0;
		x_pos = 1;
		float mid_y;
		float mid_x;
		mid_y = WINDOW_HEIGHT / 2;
		mid_x = WINDOW_WIDTH / 2;
		int W = 0;
		int A = 0;
		int S = 0;
		int D = 0;
		int pauseToggle = 0;
		printf("CHECK 3\n");
		while (close_requested == 0) {
			printf("Testin %d - close_requested:%d - pauseTOggle:%d\n", timer, close_requested, pauseToggle);
			if (pauseToggle == 0) {
				dest.y = (int) (mid_y + y_pos);
				dest.x = (int) (mid_x + x_pos);
				centerPoint.x = mid_x;
				centerPoint.y = mid_y;
				SDL_RenderClear(renderer);
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				SDL_RenderDrawRect(renderer, &centerPoint);
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
				y_pos = mathtest(timer, 1);
				printf("y_pos: %f\n", y_pos);
				x_pos = mathtest(timer, 2);
				printf("x_pos: %f\n", x_pos);	
				printf("%d\n%d\n", dest.x, dest.y);
				SDL_RenderCopy(renderer, bitmapTex, NULL, &dest);
				SDL_RenderPresent(renderer);
				timer += 1;
			}
		
			while (SDL_PollEvent(&event)) {
				switch (event.type) {
					case SDL_QUIT:
						close_requested = 1;
						break;
					case SDL_KEYDOWN:
						switch (event.key.keysym.scancode) {
							case SDL_SCANCODE_W:
							case SDL_SCANCODE_UP:
								W = 1;
								break;
							case SDL_SCANCODE_A:
							case SDL_SCANCODE_LEFT:
								A = 1;
								break;
							case SDL_SCANCODE_S:
							case SDL_SCANCODE_DOWN:
								S = 1;
								break;
							case SDL_SCANCODE_D:
							case SDL_SCANCODE_RIGHT:
								D = 1;	
								break;
							case SDL_SCANCODE_SPACE:
							case SDL_SCANCODE_ESCAPE:
								pauseToggle = 1;
								break;			
						}
						break;
					case SDL_KEYUP:
						switch (event.key.keysym.scancode) {
							case SDL_SCANCODE_W:
							case SDL_SCANCODE_UP:
								W = 0;
								break;
							case SDL_SCANCODE_A:
							case SDL_SCANCODE_LEFT:
								A = 0;
								break;
							case SDL_SCANCODE_S:
							case SDL_SCANCODE_DOWN:
								S = 0;
								break;
							case SDL_SCANCODE_D:
							case SDL_SCANCODE_RIGHT:
								D = 0;
								break;
							case SDL_SCANCODE_SPACE:
							case SDL_SCANCODE_ESCAPE:
								pauseToggle = 0;
								break;
						}
						break;
				}
			}

			int moveDis = 5;
			if (W) {
				mid_y -= moveDis;
			}
			if (A) {
				mid_x -=moveDis;
			}
			if (S) {
				mid_y += moveDis;
			} 
			if (D) {
				mid_x += moveDis;
			}
			SDL_Delay(1000/60);
		}
	}

/*
		float y_pos = WINDOW_HEIGHT;
		close_requested = 10;
		printf("At the printing area\n");
		while (dest.y >= -dest.h) {
			SDL_RenderClear(renderer);
			dest.y = (int) y_pos;
			SDL_RenderCopy(renderer, bitmapTex, NULL, &dest);
			SDL_RenderPresent(renderer);
	
			y_pos -= (float) SCROLL_SPEED / 60;
	
			SDL_Delay(1000/60);
		}
		printf("Inbetween X&Y\n");
	
		dest.y = (WINDOW_HEIGHT - dest.h) /2;
		float x_pos = WINDOW_WIDTH;
	
		while (dest.x >= -dest.w) {
			SDL_RenderClear(renderer);
			dest.x = (int) x_pos;
			SDL_RenderCopy(renderer, bitmapTex, NULL, &dest);
			SDL_RenderPresent(renderer);
	
			x_pos -= (float) SCROLL_SPEED / 60;
	
			SDL_Delay(1000/60);
		}
		*/	

	//SDL_Delay(3000);

	//SDL_RenderCopy(renderer, bitmapTex, NULL, NULL);
	//SDL_RenderPresent(renderer);

	SDL_DestroyTexture(bitmapTex);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);
	SDL_Quit();


	printf("INIT done :)\n");
	return 0;

}

