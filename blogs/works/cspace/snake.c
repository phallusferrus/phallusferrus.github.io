#include<stdio.h>
#include<SDL2/SDL.h>
#include<stdlib.h>
#include<time.h>

#define WINDOW_WIDTH (640)
#define WINDOW_HEIGHT (480)


struct snakeSeg {
	int on;
	int x;
	int y;
	int w;
	int h;
	int dir;
};

struct food {
	int x;
	int y;
	int w;
	int h;
};

struct snakeSeg newSeg(int on, int x, int y, int w, int h, int dir) {
	struct snakeSeg temp;
	temp.on = 1;
	temp.x = x;
	temp.y = y;
	temp.w = w;
	temp.h = h;
	temp.dir = dir;
	return temp;
};

struct food spawnFood() {
	struct food temp;
	int randX, randY;
	randX = rand() % (WINDOW_WIDTH - 32) + 32;
	randY = rand() % (WINDOW_HEIGHT - 32) + 32;
	temp.x = randX;
	temp.y = randY;
	temp.w = 16;
	temp.h = 16;
	return temp;
};


struct snakeSeg snakeGrow(int *snakeLen, struct snakeSeg preSeg) {
	struct snakeSeg newSeg;
	newSeg.on = 1;
	newSeg.dir = preSeg.dir;
	newSeg.h = preSeg.h;
	newSeg.w = preSeg.w;
	switch (preSeg.dir) {
		case 0:
			printf("preSeg.dir == 0!\n");
			break;
		case 1:
			newSeg.y = preSeg.y - preSeg.h;
			newSeg.x = preSeg.x;
			break;
		case 2:
			newSeg.y = preSeg.y;
			newSeg.x = preSeg.x - preSeg.w;
			break;
		case 3:
			newSeg.y = preSeg.y + preSeg.h;
			newSeg.x = preSeg.x;
			break;
		case 4:
			newSeg.y = preSeg.y;
			newSeg.x = preSeg.x + preSeg.w;
			break;
	}
	(*snakeLen)++;
	return newSeg;
};	

void moveSeg(struct snakeSeg *theSeg) {
	struct snakeSeg temp;
	temp = *theSeg;
	printf("MOVESEG temp.h: %d\n", temp.dir);
	switch (temp.dir) {
		case 0:
			printf("moveSeg ERROR - temp.dir == 0!\n");
			break;
		case 1:
			temp.y -= temp.h;
			break;
		case 2:
			temp.x += temp.w;
			break;
		case 3:
			temp.y += temp.h;
			break;
		case 4:
			temp.x -= temp.w;
			break;
	}
	*theSeg = temp;
};

int checkGameOver(struct snakeSeg *pSnake, int snakeLen) {
	int i, j;
	struct snakeSeg tempSnake[64];
	struct snakeSeg *pTemp;
	pTemp = tempSnake;
	for (i=0;i<snakeLen;i++) {
		*(pTemp + i) = *(pSnake + i);
		printf("INIT TEST tempSnake[%d].x: %d\n", i, tempSnake[i].x);
	}

	for (i=0;i<snakeLen;i++) {
		printf("TOP tempSnake[%d].x: %d\n", i, tempSnake[i].x);
		int thisX, thisY, thatX, thatY, snakeW, snakeH;
		snakeW = tempSnake[i].w;
		snakeH = tempSnake[i].h;
		thisX = tempSnake[i].x;
		thisY = tempSnake[i].y;
		printf("MID tempSnake[%d].x: %d\n", i, tempSnake[i].x);
		for (j=0;j<snakeLen;j++) {
			thatX = tempSnake[j].x;
			thatY = tempSnake[j].y;
			if (j != i ) {
				if ( (thisX > (thatX - snakeW) && thisX < (thatX + snakeW) ) && (thisY > (thatY - snakeH) && thisY < (thatY + snakeH) ) ) {
					printf("COLLISHIT! COL i: %d  COL j: %d\n", i, j);
				   return 1;
				}
			}
		}
		printf("BOTTOM i: %d thisX: %d\n", i, thisX);
		if (thisX < 0 || thisX > WINDOW_WIDTH || thisY < 0 || thisY > WINDOW_HEIGHT) {
			printf("OUT OF BOUNDS! COL i: %d thisX: %d thisY: %d\n", i, thisX, thisY);
			SDL_Delay(1000);
			return 1;
		}
	}	
	return 0;
}


int main() {

	srand(time(0));

	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
		printf("ERROR SDL_Init: %s\n", SDL_GetError());
		return 1;
	}
	SDL_Window *win;
	win = SDL_CreateWindow("Dice Roll!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);

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

	//Variables - Textures - SDL_Rects 
	
	SDL_Surface *bitmap1Surface;
	bitmap1Surface = SDL_LoadBMP("pepesnake1.bmp");
	if (!bitmap1Surface) {
		printf("Error with LoadBMP: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}
	SDL_Texture *bitmap1Tex;
	bitmap1Tex = SDL_CreateTextureFromSurface(ren, bitmap1Surface);
	SDL_FreeSurface(bitmap1Surface);
	if (!bitmap1Tex) {
		printf("Error with CreateTextrure: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Surface *bitmap2Surface;
	bitmap2Surface = SDL_LoadBMP("pepesnake2.bmp");
	if (!bitmap2Surface) {
		printf("Error with LoadBMP: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}
	SDL_Texture *bitmap2Tex;
	bitmap2Tex = SDL_CreateTextureFromSurface(ren, bitmap2Surface);
	SDL_FreeSurface(bitmap2Surface);
	if (!bitmap2Tex) {
		printf("Error with CreateTextrure: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Surface *bitmap3Surface;
	bitmap3Surface = SDL_LoadBMP("pepesnake3.bmp");

	if (!bitmap3Surface) {
		printf("Error with LoadBMP: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Texture *bitmap3Tex;
	bitmap3Tex = SDL_CreateTextureFromSurface(ren, bitmap3Surface);
	SDL_FreeSurface(bitmap3Surface);
	if (!bitmap3Tex) {
		printf("Error with CreateTextrure: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}


	SDL_Surface *bitmap4Surface;
	bitmap4Surface = SDL_LoadBMP("pepesnake4.bmp");

	if (!bitmap4Surface) {
		printf("Error with LoadBMP: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Texture *bitmap4Tex;
	bitmap4Tex = SDL_CreateTextureFromSurface(ren, bitmap4Surface);
	SDL_FreeSurface(bitmap4Surface);
	if (!bitmap4Tex) {
		printf("Error with CreateTextrure: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Surface *bitmapFoodSurface;
	bitmapFoodSurface = SDL_LoadBMP("soifood.bmp");

	if (!bitmapFoodSurface) {
		printf("Error with LoadBMP: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	SDL_Texture *bitmapFoodTex;
	bitmapFoodTex = SDL_CreateTextureFromSurface(ren, bitmapFoodSurface);
	SDL_FreeSurface(bitmapFoodSurface);
	if (!bitmapFoodTex) {
		printf("Error with CreateTextrure: %s\n", SDL_GetError());
		SDL_DestroyRenderer(ren);
		SDL_DestroyWindow(win);
		SDL_Quit();
		return 1;
	}

	int close_requested = 0;
	int gameOver = 0;
	int timeScale = 2;
	int moveMade = 0;
	int snakeLen = 0;
	int *lenP;
	lenP = &snakeLen;

	//create first 3 snake tokens

	//init theSnake[]
	struct snakeSeg theSnake[64];
	int i;
	for (i=0; i<64; i++) {
		struct snakeSeg *temp;
		temp = &theSnake[i];
		*temp = newSeg(0, 0, 0, 16, 16, 0);
	}

	//Seg1
	struct snakeSeg *pp;
	struct snakeSeg *pSnake;
    pSnake = theSnake;
	pp = &theSnake[0];
	*pp = newSeg(1, 234, 234, 16, 16, 2);
	(*lenP)++;
	//Seg2
	theSnake[snakeLen] = snakeGrow(lenP, *pp);
	//Seg3
	struct snakeSeg *anotherp;
	anotherp = &theSnake[snakeLen];
	theSnake[snakeLen] = snakeGrow(lenP, *anotherp);

	//create first food
	
	struct food theFood;
	theFood.x = WINDOW_WIDTH - 256;
	theFood.y = 234;
	theFood.w = 16;
	theFood.h = 16;
	struct food *pFood;
	pFood = &theFood;


	//SDL RECT objects
	SDL_Rect destBack;
	destBack.w = WINDOW_WIDTH;
	destBack.h = WINDOW_HEIGHT;
	destBack.x = 0;
	destBack.y = 0;

	SDL_Rect destSnake;
	destSnake.w = 16;
	destSnake.h = 16;

	SDL_QueryTexture(bitmap1Tex, NULL, NULL, &destSnake.w, &destSnake.h);
	SDL_QueryTexture(bitmap2Tex, NULL, NULL, &destSnake.w, &destSnake.h);
	SDL_QueryTexture(bitmap3Tex, NULL, NULL, &destSnake.w, &destSnake.h);
	SDL_QueryTexture(bitmap4Tex, NULL, NULL, &destSnake.w, &destSnake.h);

	SDL_Rect destFood;
	destFood.x = pFood->x;
	destFood.y = pFood->y;
	destFood.w = 16;
	destFood.h = 16;


	//LOOP
	while (!close_requested) {

		//Quit / Input handling
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT:
					close_requested += 1;
					break;
					
				case SDL_KEYDOWN:
					switch (event.key.keysym.scancode) {
						case SDL_SCANCODE_W:
							if (theSnake[0].dir != 3 && moveMade == 0) {
								theSnake[0].dir = 1;
								moveMade++;
							}
							break;
						case SDL_SCANCODE_D:
							if (theSnake[0].dir != 4 && moveMade == 0) {
								theSnake[0].dir = 2;
								moveMade++;
							}
							break;
						case SDL_SCANCODE_S:
							if (theSnake[0].dir != 1 && moveMade == 0) {
								theSnake[0].dir = 3;
								moveMade++;
							}
							break;
						case SDL_SCANCODE_A:
							if (theSnake[0].dir != 2 && moveMade == 0) {
								theSnake[0].dir = 4;
								moveMade++;
							}
							break;
					}
			}
		}

		//Stuffz

		//draw background
		SDL_RenderClear(ren);
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
		SDL_RenderFillRect(ren, &destBack);

		//move snake train

		for (i=snakeLen; i>0; i--) {
			struct snakeSeg nextSeg = theSnake[i-1];
			struct snakeSeg *pSeg;
			pSeg = &theSnake[i];
			pSeg->x = nextSeg.x;
			pSeg->y = nextSeg.y;
			pSeg->dir = nextSeg.dir;
		}
		//move snake head
		struct snakeSeg *snakeHead;
		snakeHead = &theSnake[0];
		moveSeg(snakeHead);
		
		//draw snake

		//train
		SDL_SetRenderDrawColor(ren, 72, 130, 1, 255);
		for (i=0; i<snakeLen; i++) {
			struct snakeSeg thisSeg = theSnake[i];
			struct snakeSeg *theSeg;
			theSeg = &theSnake[i];
			destSnake.x = thisSeg.x;
			destSnake.y = thisSeg.y;
			SDL_RenderFillRect(ren, &destSnake);
		}
		
		//head

		destSnake.x = pp->x;
		destSnake.y = pp->y;

		if (pp->dir == 1) {
			SDL_RenderCopy(ren, bitmap1Tex, NULL, &destSnake);
		} else if (pp->dir == 2) {
			SDL_RenderCopy(ren, bitmap2Tex, NULL, &destSnake);
		} else if (pp->dir == 3) {
			SDL_RenderCopy(ren, bitmap3Tex, NULL, &destSnake);
		} else if (pp->dir == 4) {
			SDL_RenderCopy(ren, bitmap4Tex, NULL, &destSnake);
		} else {
			printf("ERRRRRRRROOOOOOOORRRRRRRRR pp->dir is BAAAD\n");
			SDL_Delay(3000);
		}

		//draw food
		SDL_RenderCopy(ren, bitmapFoodTex, NULL, &destFood);


		//check collisions

		//check game over snake collision
		int gameOver = checkGameOver(pSnake, snakeLen);
		if (gameOver) {
			printf("GAME OVER END\n");
		}

		//check snakeGrow food collision


		if ( ( (pp->x >= (pFood->x - pFood->w) ) && (pp->x <= (pFood->x + pFood->w))) &&
				(pp->y >= (pFood->y - pFood->h)) && (pp->y <= (pFood->y + pFood->h))) {
			snakeGrow(lenP, theSnake[snakeLen]);
			theFood = spawnFood();
			destFood.x = pFood->x;
			destFood.y = pFood->y;
			printf("foodCollision\n");
			timeScale++;
		}

		//Render Present
		//
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
		SDL_RenderPresent(ren);

		//LOOP Wait & printf TEST shit
		
		SDL_Delay(1000/timeScale);	
		moveMade = 0;
	//	printf("SEG - X Y dir\nSeg1: %d  %d  %d\nseg2: %d %d %d\n", theSnake[0].x, theSnake[0].y, theSnake[0].dir, theSnake[1].x, theSnake[1].y, theSnake[1].dir);
		for(i=0;i<snakeLen;i++) {
			struct snakeSeg testSeg;
			testSeg = theSnake[i];
			printf("Seg%d:	X: %d	Y: %d	DIR: %d\n", i, testSeg.x, testSeg.y, testSeg.dir);
		}
		printf("snake Len: %d\nXXXXXXXXXXXXXXXXXXXXXXX\nTEST theSnake[1].x: %d\n", snakeLen, theSnake[1].x);
	}


	//SDL Clean Up
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();

	
	//Outta Here
	printf("ALL DONE :)\n");
	return 0;
}





