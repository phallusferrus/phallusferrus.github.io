#include<stdio.h>
#include<SDL2/SDL.h>


#define WINDOW_WIDTH (640)
#define WINDOW_HEIGHT (480)



int main() {
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
			printf("ERROR SDL_Init: %s\n", SDL_GetError());
			return 1;
	}

	SDL_Window *win;
	win = SDL_CreateWindow("Tic Tac Toe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
	if (!win) {
		printf("ERROR SDL_CreateWindow: %s", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	SDL_Renderer *renderer;
	Uint32 renderer_flags = SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC;
	renderer = SDL_CreateRenderer(win, -1, renderer_flags);

	if (!renderer) {
		printf("ERROR SDL_CreateRenderer: %s\n", SDL_GetError());
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Surface *bitmapXSurface;
	bitmapXSurface = SDL_LoadBMP("X.bmp");
	if (!bitmapXSurface) {
		printf("Error LoadBMP(x): %s\n", SDL_GetError());
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Texture *bitmapXTex;
	bitmapXTex = SDL_CreateTextureFromSurface(renderer, bitmapXSurface);
	SDL_FreeSurface(bitmapXSurface);
	if (!bitmapXSurface) {
		printf("Error bitmapXTex: %s\n", SDL_GetError());
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}


	SDL_Surface *bitmapOSurface;
	bitmapOSurface = SDL_LoadBMP("O.bmp");
	if (!bitmapOSurface) {
		printf("Error LoadBMP(0): %s\n", SDL_GetError());
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Texture *bitmapOTex;
	bitmapOTex = SDL_CreateTextureFromSurface(renderer, bitmapOSurface);
	SDL_FreeSurface(bitmapOSurface);
	if (!bitmapOSurface) {
		printf("Error bitmapOTex: %s\n", SDL_GetError());
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}


	int midX;
	int midY;

	midX = (WINDOW_WIDTH / 2);
	midY = (WINDOW_HEIGHT / 2);

	SDL_Rect gridX1;
	gridX1.x = 159;
	gridX1.y = 79 + 107;
	gridX1.w = 321;
	gridX1.h = 4;
	SDL_Rect gridX2;
	gridX2.x = 159;
	gridX2.y = 79 + 214;
	gridX2.w = 321;
	gridX2.h = 4;
	SDL_Rect gridY1;
	gridY1.x = 159 + 107;
	gridY1.y = 79;
	gridY1.w = 4;
	gridY1.h = 321;
	SDL_Rect gridY2;
	gridY2.x = 159 + 214;
	gridY2.y = 79;
	gridY2.w = 4;
	gridY2.h = 321;

	int grid1 = 0;
	int grid2 = 0;
	int grid3 = 0;
	int grid4 = 0;
	int grid5 = 0;
	int grid6 = 0;
	int grid7 = 0;
	int grid8 = 0;
	int grid9 = 0;

	SDL_Rect destG1;
	SDL_Rect destG2;
	SDL_Rect destG3;
	SDL_Rect destG4;
	SDL_Rect destG5;
	SDL_Rect destG6;
	SDL_Rect destG7;
	SDL_Rect destG8;
	SDL_Rect destG9;

	destG1.x = 159 + 3;
	destG1.y = 79 + 3;
	destG1.w = 100;
	destG1.h = 100;

	destG2.x = 159 + 3 + 107;
	destG2.y = 79 + 3;
	destG2.w = 100;
	destG2.h = 100;

	destG3.x = 159 + 214;
	destG3.y = 79 + 3;
	destG3.w = 100;
	destG3.h = 100;

	destG4.x = 159 + 3;
	destG4.y = 79 + 3 + 107;
	destG4.w = 100;
	destG4.h = 100;

	destG5.x = 159 + 3 + 107;
	destG5.y = 79 + 3 + 107;
	destG5.w = 100;
	destG5.h = 100;

	destG6.x = 159 + 214;
	destG6.y = 79 + 3 + 107;
	destG6.w = 100;
	destG6.h = 100;

	destG7.x = 159 + 3;
	destG7.y = 79 + 3 + 214;
	destG7.w = 100;
	destG7.h = 100;

	destG8.x = 159 + 3 + 107;
	destG8.y = 79 + 3 + 214;
	destG8.w = 100;
	destG8.h = 100;

	destG9.x = 159 + 214;
	destG9.y = 79 + 3 + 214;
	destG9.w = 100;
	destG9.h = 100;


	int w, h;
	w = 64;
	h = 64;
	SDL_QueryTexture(bitmapXTex, NULL, NULL, &w, &h);
	SDL_QueryTexture(bitmapOTex, NULL, NULL, &w, &h);		


	int quitCheck = 0;
	int mouseChill = 0;
	int spaceChill = 0;
	int thisToken = 2;
	while (!quitCheck) {


		SDL_Event event;
		while (SDL_PollEvent(&event) & (spaceChill == 0)) {
			if (event.type == SDL_QUIT) {
				quitCheck = 1;
				break;
			}
			/*if (event.type == SDL_KEYDOWN) {
				if (event.key.keysym.scancode == SDL_SCANCODE_SPACE) {
					thisToken *= -1;
				}
			}*/
			if (event.type == SDL_MOUSEBUTTONDOWN) {
				if (thisToken == 1) {
					thisToken = 2;
				} else if (thisToken == 2){
					thisToken = 1;
				} else {
					thisToken = 0;
				}
				mouseChill = 60;
				printf("thisToken: %d\n", thisToken);
				int mouseX, mouseY;
				int buttons = SDL_GetMouseState(&mouseX, &mouseY);
				printf("X: %d\nY: %d\ntT: %d\n", mouseX, mouseY, thisToken);
				if (mouseChill == 60) {
					if ( (mouseX >= destG1.x & mouseX <= (destG1.x + destG1.w))) {
						if (mouseY >= destG1.y & mouseY <= (destG1.y + destG1.h)) {
							grid1=thisToken;
						}
						if (mouseY >= destG4.y & mouseY <= (destG4.y + destG1.h)) {
							grid4=thisToken;
						}
						if (mouseY >= destG7.y & mouseY <= (destG7.y + destG1.h)) {
							grid7=thisToken;
						}
					}
					if ( (mouseX >= destG2.x & mouseX <= (destG2.x + destG1.w))) {
						if (mouseY >= destG1.y & mouseY <= (destG1.y + destG1.h)) {
							grid2=thisToken;
						}
						if (mouseY >= destG4.y & mouseY <= (destG4.y + destG1.h)) {
							grid5=thisToken;
						}
						if (mouseY >= destG7.y & mouseY <= (destG7.y + destG1.h)) {
							grid8=thisToken;
						}
					}
					if ( (mouseX >= destG3.x & mouseX <= (destG3.x + destG1.w))) {
						if (mouseY >= destG1.y & mouseY <= (destG1.y + destG1.h)) {
							grid3=thisToken;
						}
						if (mouseY >= destG4.y & mouseY <= (destG4.y + destG1.h)) {
							grid6=thisToken;
						}
						if (mouseY >= destG7.y & mouseY <= (destG7.y + destG1.h)) {
							grid9=thisToken;
						}
					}
				}
			}
		}
		mouseChill -= 1;
		SDL_RenderClear(renderer);


		if (grid1 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG1);
		}
		if (grid1 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG1);
		}
		if (grid2 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG2);
		}
		if (grid2 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG2);
		}		
		if (grid3 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG3);
		}
		if (grid3 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG3);
		}
		if (grid4 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG4);
		}
		if (grid4 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG4);
		}
		if (grid5 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG5);
		}
		if (grid5 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG5);
		}
		if (grid6 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG6);
		}
		if (grid6 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG6);
		}
		if (grid7 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG7);
		}
		if (grid7 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG7);
		}
		if (grid8 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG8);
		}
		if (grid8 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG8);
		}
		if (grid9 == 1) {
			SDL_RenderCopy(renderer, bitmapXTex, NULL, &destG9);
		}
		if (grid9 == 2) {
			SDL_RenderCopy(renderer, bitmapOTex, NULL, &destG9);
		}
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		SDL_RenderDrawRect(renderer, &gridX1);
		SDL_RenderDrawRect(renderer, &gridY1);
		SDL_RenderDrawRect(renderer, &gridX2);
		SDL_RenderDrawRect(renderer, &gridY2);
		/*SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
		SDL_RenderFillRect(renderer, &destG1);*/
		SDL_SetRenderDrawColor(renderer, 0, 0 ,0, 255);
		SDL_RenderPresent(renderer);

		if (spaceChill > 0) {
			spaceChill -= 1;
		}
		SDL_Delay(1000/60);
	}	

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);
	SDL_Quit();
	printf("ALL DONE :)\n");
	return 0;
}







