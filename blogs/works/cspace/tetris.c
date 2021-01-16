#include<stdio.h>
#include<SDL2/SDL.h>
#include<stdlib.h>
#include<time.h>

#define WINDOW_WIDTH (250)
#define WINDOW_HEIGHT (500)

struct tetrisPiece {
	int ori;
	int shape;
	int x;
	int y;
};

struct tetrisPiece newPiece(int blockSize) {
	struct tetrisPiece temp;
	temp.ori = rand() % (4) +1;;
	int randShape;
	randShape = rand() % (7) + 1;
	temp.shape = randShape;
	temp.x = (WINDOW_WIDTH / 2) - (3 *blockSize);
	temp.y = 0;
	return temp;
};

struct blockLoc {
	int x;
	int y;
};

void pieceDrop(struct tetrisPiece *paP, int blockSize) {
	struct tetrisPiece temp;
	temp = *paP;
	temp.y += blockSize;
	*paP = temp;
};

void refreshPiece(struct tetrisPiece *paP, int *prX, int *prY, SDL_Rect *pdestPiece1, SDL_Rect *pdestPiece2, SDL_Rect *pdestPiece3, SDL_Rect *pdestPiece4, int *pR, int *pG, int *pB, int blockSize, struct blockLoc *pblockLoc1, struct blockLoc *pblockLoc2, struct blockLoc *pblockLoc3, struct blockLoc *pblockLoc4) {
	*prX = paP->x;
	*prY = paP->y;
	switch (paP->shape) {
		case 1:
			*pR = 239;
			*pG = 224;
			*pB = 11;
			pdestPiece1->x = *prX + (2 * blockSize);
			pdestPiece1->y = *prY + (2 * blockSize);
			pdestPiece2->x = *prX + (3 * blockSize);
			pdestPiece2->y = *prY + (2 * blockSize);
			pdestPiece3->x = *prX + (2 * blockSize);
			pdestPiece3->y = *prY + (3 * blockSize);
			pdestPiece4->x = *prX + (3 * blockSize);
			pdestPiece4->y = *prY + (3 * blockSize);
			break;
		case 2:
			*pR = 24;
			*pG = 59;
			*pB = 186;
			switch (paP->ori) {
				case 1:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (1 * blockSize);
					pdestPiece2->y = *prY + (2 * blockSize);
					pdestPiece3->x = *prX + (1 * blockSize);
					pdestPiece3->y = *prY + (3 * blockSize);
					pdestPiece4->x = *prX + (1 * blockSize);
					pdestPiece4->y = *prY + (4 * blockSize);
					break;
				case 2:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (2 * blockSize);
					pdestPiece2->y = *prY + (1 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (1 * blockSize);
					pdestPiece4->x = *prX + (4 * blockSize);
					pdestPiece4->y = *prY + (1 * blockSize);
					break;
				case 3:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (4 * blockSize);
					pdestPiece2->y = *prY + (2 * blockSize);
					pdestPiece3->x = *prX + (4 * blockSize);
					pdestPiece3->y = *prY + (3 * blockSize);
					pdestPiece4->x = *prX + (4 * blockSize);
					pdestPiece4->y = *prY + (4 * blockSize);
					break;
				case 4:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (2 * blockSize);
					pdestPiece2->y = *prY + (4 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (4 * blockSize);
					pdestPiece4->x = *prX + (4 * blockSize);
					pdestPiece4->y = *prY + (4 * blockSize);
					break;
			}
			break;
		case 3:
			*pR = 239;
			*pG = 110;
			*pB = 11;
			switch (paP->ori) {
				case 1:						
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (2 * blockSize);
					pdestPiece2->x = *prX + (1 * blockSize);
					pdestPiece2->y = *prY + (1 * blockSize);
					pdestPiece3->x = *prX + (2 * blockSize);
					pdestPiece3->y = *prY + (1 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (1 * blockSize);
					break;
				case 2:
					pdestPiece1->x = *prX + (3 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (4 * blockSize);
					pdestPiece2->y = *prY + (1 * blockSize);
					pdestPiece3->x = *prX + (4 * blockSize);
					pdestPiece3->y = *prY + (2 * blockSize);
					pdestPiece4->x = *prX + (4 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 3:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (3 * blockSize);
					pdestPiece2->x = *prX + (4 * blockSize);
					pdestPiece2->y = *prY + (4 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (4 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (4 * blockSize);
					break;
				case 4:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (2 * blockSize);
					pdestPiece2->x = *prX + (1 * blockSize);
					pdestPiece2->y = *prY + (3 * blockSize);
					pdestPiece3->x = *prX + (1 * blockSize);
					pdestPiece3->y = *prY + (4 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (4 * blockSize);
					break;
			}
			break;
		case 4:
			*pR = 11;
			*pG = 239;
			*pB = 213;
			switch (paP->ori) {
				case 1:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (2 * blockSize);
					pdestPiece2->y = *prY + (1 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (1 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (2 * blockSize);
					break;
				case 2:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (4 * blockSize);
					pdestPiece2->y = *prY + (2 * blockSize);
					pdestPiece3->x = *prX + (4 * blockSize);
					pdestPiece3->y = *prY + (3 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 3:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (3 * blockSize);
					pdestPiece2->y = *prY + (4 * blockSize);
					pdestPiece3->x = *prX + (2 * blockSize);
					pdestPiece3->y = *prY + (4 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 4:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (1 * blockSize);
					pdestPiece2->y = *prY + (3 * blockSize);
					pdestPiece3->x = *prX + (1 * blockSize);
					pdestPiece3->y = *prY + (2 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (2 * blockSize);
					break;
			}
			break;
		case 5:
			*pR = 118;
			*pG = 11;
			*pB = 239;
			switch (paP->ori) {
				case 1:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (1 * blockSize);
					pdestPiece2->y = *prY + (2 * blockSize);
					pdestPiece3->x = *prX + (2 * blockSize);
					pdestPiece3->y = *prY + (2 * blockSize);
					pdestPiece4->x = *prX + (1 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 2:
					pdestPiece1->x = *prX + (2 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (3 * blockSize);
					pdestPiece2->y = *prY + (1 * blockSize);
					pdestPiece3->x = *prX + (4 * blockSize);
					pdestPiece3->y = *prY + (1 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (2 * blockSize);
					break;
				case 3:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (2 * blockSize);
					pdestPiece2->x = *prX + (4 * blockSize);
					pdestPiece2->y = *prY + (3 * blockSize);
					pdestPiece3->x = *prX + (4 * blockSize);
					pdestPiece3->y = *prY + (4 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 4:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (2 * blockSize);
					pdestPiece2->y = *prY + (4 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (4 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
			}
			break;
		case 6:
			*pR = 255;
			*pG = 0;
			*pB = 0;
			switch (paP->ori) {
				case 1:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (2 * blockSize);
					pdestPiece2->y = *prY + (1 * blockSize);
					pdestPiece3->x = *prX + (2 * blockSize);
					pdestPiece3->y = *prY + (2 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (2 * blockSize);
					break;
				case 2:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (4 * blockSize);
					pdestPiece2->y = *prY + (2 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (2 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 3:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (3 * blockSize);
					pdestPiece2->y = *prY + (4 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (3 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 4:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (1 * blockSize);
					pdestPiece2->y = *prY + (3 * blockSize);
					pdestPiece3->x = *prX + (2 * blockSize);
					pdestPiece3->y = *prY + (3 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (2 * blockSize);
					break;
			}
			break;				
		case 7:
			*pR = 0;
			*pG = 255;
			*pB = 0;
			switch (paP->ori) {
				case 1:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (1 * blockSize);
					pdestPiece2->y = *prY + (2 * blockSize);
					pdestPiece3->x = *prX + (2 * blockSize);
					pdestPiece3->y = *prY + (2 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
				case 2:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (1 * blockSize);
					pdestPiece2->x = *prX + (3 * blockSize);
					pdestPiece2->y = *prY + (1 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (2 * blockSize);
					pdestPiece4->x = *prX + (2 * blockSize);
					pdestPiece4->y = *prY + (2 * blockSize);
					break;
				case 3:
					pdestPiece1->x = *prX + (4 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (4 * blockSize);
					pdestPiece2->y = *prY + (3 * blockSize);
					pdestPiece3->x = *prX + (3 * blockSize);
					pdestPiece3->y = *prY + (3 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (2 * blockSize);
					break;
				case 4:
					pdestPiece1->x = *prX + (1 * blockSize);
					pdestPiece1->y = *prY + (4 * blockSize);
					pdestPiece2->x = *prX + (2 * blockSize);
					pdestPiece2->y = *prY + (4 * blockSize);
					pdestPiece3->x = *prX + (2 * blockSize);
					pdestPiece3->y = *prY + (3 * blockSize);
					pdestPiece4->x = *prX + (3 * blockSize);
					pdestPiece4->y = *prY + (3 * blockSize);
					break;
			}
			break;	
	}
		pblockLoc1->x = pdestPiece1->x / blockSize;
		pblockLoc1->y = pdestPiece1->y / blockSize;
		pblockLoc2->x = pdestPiece2->x / blockSize;
		pblockLoc2->y = pdestPiece2->y / blockSize;
		pblockLoc3->x = pdestPiece3->x / blockSize;
		pblockLoc3->y = pdestPiece3->y / blockSize;
		pblockLoc4->x = pdestPiece4->x / blockSize;
		pblockLoc4->y = pdestPiece4->y / blockSize;
};

int checkGround(struct blockLoc blockLoc1, struct blockLoc blockLoc2, struct blockLoc blockLoc3, struct blockLoc blockLoc4, int mass[20][10]) {

	struct blockLoc testBlock;

	testBlock.x = blockLoc1.x;
	testBlock.y = blockLoc1.y;
	if (mass[testBlock.y+1][testBlock.x] != 0) {
		return 1;
	}

	testBlock.x = blockLoc2.x;
	testBlock.y = blockLoc2.y;
	if (mass[testBlock.y+1][testBlock.x] != 0) {
		return 1;
	}

	testBlock.x = blockLoc3.x;
	testBlock.y = blockLoc3.y;
	if (mass[testBlock.y+1][testBlock.x] != 0) {
		return 1;
	}

	testBlock.x = blockLoc4.x;
	testBlock.y = blockLoc4.y;
	if (mass[testBlock.y+1][testBlock.x] != 0) {
		return 1;
	}

	if (blockLoc1.y >= 19 || blockLoc2.y >= 19 || blockLoc3.y >= 19 || blockLoc4.y >= 19) {
		return 1;
	} else {
		return 0;
	}
};

int checkMass(struct blockLoc blockLoc1, struct blockLoc blockLoc2, struct blockLoc blockLoc3, struct blockLoc blockLoc4, int mass[20][10], int dir) {
	if (dir == 2) {
		dir = -1;
	}

	if (mass[blockLoc1.y][blockLoc1.x + dir] != 0) {
		return 1;
	} else if (mass[blockLoc2.y][blockLoc2.x + dir] != 0) {
		return 1;
	} else if (mass[blockLoc3.y][blockLoc3.x + dir] != 0) {
		return 1;
	} else if (mass[blockLoc4.y][blockLoc4.x + dir] != 0) {
		return 1;
	} else {
		return 0;
	}

};

int checkFlip(struct blockLoc blockLoc1, struct blockLoc blockLoc2, struct blockLoc blockLoc3, struct blockLoc blockLoc4, int mass[20][10]) {
	if (mass[blockLoc1.y][blockLoc1.x] != 0) {
		return 1;
	} else if (mass[blockLoc2.y][blockLoc2.x] != 0) {
		return 1;
	} else if (mass[blockLoc3.y][blockLoc3.x] != 0) {
		return 1;
	} else if (mass[blockLoc4.y][blockLoc4.x] != 0) {
		return 1;
	} else {
		return 0;
	}
};

int main() {

	srand(time(0));

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

	int close_requested = 0;
	int blockSize = 25;
	int timer = 1;
	int LEFT = 0;
	int RIGHT = 0;
	int DOWN = 0;
	int FLIP = 0;
	int i = 0;
	int j;
	int k;
	int rX, rY;
	rX = 0;
	rY = 0;
	int *prX, *prY;
	prX = &rX;
	prY = &rY;
	int massBlock = 0;
	int flipBlock = 0;
	int blockDeath = 0;
	int R = 0;
	int G = 0;
	int B = 0;
	int blockage = 0;
	int *pR, *pG, *pB;
	pR = &R;
	pG = &G;
	pB = &B;

	int mass[20][10];
	for (i=0; i<20; i++) {
		for (j=0; j<10; j++) {
			mass[i][j] = 0;
		}
	}

	struct tetrisPiece aP;
	aP = newPiece(blockSize);
	struct tetrisPiece *paP;
	paP = &aP;

	struct blockLoc blockLoc1;
	struct blockLoc blockLoc2;
	struct blockLoc blockLoc3;
	struct blockLoc blockLoc4;

	
	struct blockLoc *pblockLoc1;
	struct blockLoc *pblockLoc2;
	struct blockLoc *pblockLoc3;
	struct blockLoc *pblockLoc4;

	pblockLoc1 = &blockLoc1;
	pblockLoc2 = &blockLoc2;
	pblockLoc3 = &blockLoc3;
	pblockLoc4 = &blockLoc4;

	SDL_Rect destBack;
	destBack.w = WINDOW_WIDTH;
	destBack.h = WINDOW_HEIGHT;
	destBack.x = 0;
	destBack.y = 0;

	SDL_Rect destPiece1;
	SDL_Rect *pdestPiece1;
	pdestPiece1 = &destPiece1;
	destPiece1.x = 0;
	destPiece1.y = 0;
	destPiece1.w = 25;
	destPiece1.h = 25;

	SDL_Rect destPiece2;
	SDL_Rect *pdestPiece2;
	pdestPiece2 = &destPiece2;
	destPiece2.x = 0;
	destPiece2.y = 0;
	destPiece2.w = 25;
	destPiece2.h = 25;

	SDL_Rect destPiece3;
	SDL_Rect *pdestPiece3;
	pdestPiece3 = &destPiece3;
	destPiece3.x = 0;
	destPiece3.y = 0;
	destPiece3.w = 25;
	destPiece3.h = 25;

	SDL_Rect destPiece4;
	SDL_Rect *pdestPiece4;
	pdestPiece4 = &destPiece4;
	destPiece4.x = 0;
	destPiece4.y = 0;
	destPiece4.w = 25;
	destPiece4.h = 25;

	SDL_Rect destMass;
	destMass.w = 25;
	destMass.h = 25;

	SDL_Rect destGridH;
	destGridH.w = WINDOW_WIDTH;
	destGridH.h = 2;
	destGridH.x = 0;

	SDL_Rect destGridV;
	destGridV.w = 2;
	destGridV.h = WINDOW_HEIGHT;
	destGridV.y = 0;


// loop = 
// input
// draw
// check
// move


	while (! close_requested) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT:
					close_requested += 1;
					break;
				case SDL_KEYDOWN:
					switch (event.key.keysym.scancode) {
						case SDL_SCANCODE_ESCAPE:
							close_requested += 1;
							break;
						case SDL_SCANCODE_W:
						case SDL_SCANCODE_UP:
							FLIP += 1;
							break;
						case SDL_SCANCODE_D:
						case SDL_SCANCODE_RIGHT:
							RIGHT += 1;
							break;
						case SDL_SCANCODE_S:
						case SDL_SCANCODE_DOWN:
							DOWN += 1;
							break;
						case SDL_SCANCODE_A:
						case SDL_SCANCODE_LEFT:
							LEFT += 1;
							break;
					}
					break;
				case SDL_KEYUP:
					switch (event.key.keysym.scancode) {
						case SDL_SCANCODE_W:
						case SDL_SCANCODE_UP:
							FLIP = 0;
							break;
						case SDL_SCANCODE_D:
						case SDL_SCANCODE_RIGHT:
							RIGHT = 0;
							break;
						case SDL_SCANCODE_S:
						case SDL_SCANCODE_DOWN:
							DOWN = 0;
							break;
						case SDL_SCANCODE_A:
						case SDL_SCANCODE_LEFT:
							LEFT = 0;
							break;
					}
					break;
			}
		}

		//draw background{
		SDL_RenderClear(ren);
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
		SDL_RenderFillRect(ren, &destBack);
	
		//draw piece

		refreshPiece(paP, prX, prY, pdestPiece1, pdestPiece2, pdestPiece3, pdestPiece4, pR, pG, pB, blockSize, pblockLoc1, pblockLoc2, pblockLoc3, pblockLoc4);

		//Render the four draw blocks

		SDL_SetRenderDrawColor(ren, R, G, B, 255);

		SDL_RenderFillRect(ren, &destPiece1);
		SDL_RenderFillRect(ren, &destPiece2);
		SDL_RenderFillRect(ren, &destPiece3);
		SDL_RenderFillRect(ren, &destPiece4);


		//draw mass
		//

		for (i=0; i<20; i++) {
			for (j=0; j<10; j++) {
				if (mass[i][j] != 0) {
					switch (mass[i][j]) {
						case 1:
							SDL_SetRenderDrawColor(ren, 239, 224, 11, 255);
							break;
						case 2:
							SDL_SetRenderDrawColor(ren, 24, 59, 186, 255);
							break;
						case 3:
							SDL_SetRenderDrawColor(ren, 239, 110, 11, 255);
							break;
						case 4:
							SDL_SetRenderDrawColor(ren, 11, 239, 213, 255);
							break;
						case 5:
							SDL_SetRenderDrawColor(ren, 118, 11, 239, 255);
							break;
						case 6:
							SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);
							break;
						case 7:
							SDL_SetRenderDrawColor(ren, 0, 255, 0, 255);
							break;
					}
					destMass.x = j * blockSize;
					destMass.y = i * blockSize;
					SDL_RenderFillRect(ren, &destMass);
				}
			}
		}
					
		//draw grid
		
		SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);

		//draw Horizontal
		
		for (i=0; i<20; i++) {
			destGridH.y = blockSize * i;
			SDL_RenderDrawRect(ren, &destGridH);
		}

		//draw Vertical
		
		for (i=0; i<10; i++) {
			destGridV.x = blockSize*i;
			SDL_RenderDrawRect(ren, &destGridV);
		}		
		
		//move command


		if (RIGHT > 0 && blockLoc1.x <= 8 && blockLoc2.x <= 8 && blockLoc3.x <= 8 && blockLoc4.x <= 8) {
			massBlock = checkMass(blockLoc1, blockLoc2, blockLoc3, blockLoc4, mass, 1);
			if (!massBlock) {
				aP.x += blockSize;
			}
		}
		if (LEFT > 0 && blockLoc1.x >= 1 && blockLoc2.x >= 1 && blockLoc3.x >= 1 && blockLoc4.x >= 1) {
			massBlock = checkMass(blockLoc1, blockLoc2, blockLoc3, blockLoc4, mass, 2);
			if (!massBlock) {
				aP.x -= blockSize;
			}
		}

		if (FLIP > 0) {
			if (aP.ori == 4) {
					aP.ori = 1;
			} else {
				aP.ori += 1;
				
			}
			refreshPiece(paP, prX, prY, pdestPiece1, pdestPiece2, pdestPiece3, pdestPiece4, pR, pG, pB, blockSize, pblockLoc1, pblockLoc2, pblockLoc3, pblockLoc4);

			flipBlock = checkFlip(blockLoc1, blockLoc2, blockLoc3, blockLoc4, mass);
			if (flipBlock) {
				if (aP.ori == 1) {
					aP.ori = 4;
				} else {
					aP.ori -= 1;
				}
				refreshPiece(paP, prX, prY, pdestPiece1, pdestPiece2, pdestPiece3, pdestPiece4, pR, pG, pB, blockSize, pblockLoc1, pblockLoc2, pblockLoc3, pblockLoc4);
			}

			while (blockLoc1.x > 9 || blockLoc2.x > 9 || blockLoc3.x > 9 || blockLoc4.x > 9) {
				blockage += 1;
				if (blockage > 30) {
					close_requested += 1;
					break;
				}
				aP.x -= blockSize;
				refreshPiece(paP, prX, prY, pdestPiece1, pdestPiece2, pdestPiece3, pdestPiece4, pR, pG, pB, blockSize, pblockLoc1, pblockLoc2, pblockLoc3, pblockLoc4);
			}				

			while (blockLoc1.x < 0 || blockLoc2.x < 0 || blockLoc3.x < 0 || blockLoc4.x < 0) {
				blockage += 1;
				if (blockage > 10) {
					close_requested += 1;
					break;
				}
				aP.x += blockSize;
				refreshPiece(paP, prX, prY, pdestPiece1, pdestPiece2, pdestPiece3, pdestPiece4, pR, pG, pB, blockSize, pblockLoc1, pblockLoc2, pblockLoc3, pblockLoc4);
			}

			blockage = 0;
		}
		if (DOWN > 0) {
			while (timer % 10 != 0) {
				timer += 1;
			}
		}




		//gravity / blockDeath / checkGround()
		if (timer % 10 == 0) {
			blockDeath = checkGround(blockLoc1, blockLoc2, blockLoc3, blockLoc4, mass);
			if (blockDeath) {
				mass[blockLoc1.y][blockLoc1.x] = aP.shape;
				mass[blockLoc2.y][blockLoc2.x] = aP.shape;
				mass[blockLoc3.y][blockLoc3.x] = aP.shape;
				mass[blockLoc4.y][blockLoc4.x] = aP.shape;
				aP = newPiece(blockSize);
			} else {
				pieceDrop(paP, blockSize);
			}
		}

		//check line complete
		//



		for (i=0; i<20; i++) {
			if (mass[i][0] > 0
				   	&& mass[i][1] > 0
				   	&& mass[i][2] > 0 
					&& mass[i][3] > 0
					&& mass[i][4] > 0
				   	&& mass[i][5] > 0
				   	&& mass[i][6] > 0 
					&& mass[i][7] > 0
					&& mass[i][8] > 0
					&& mass[i][9] > 0) {
				for(j=0; i<10; j++) {
					mass[i][j] = 0;
				}
				for(j=i; j>0; j--) {
					for(k=0; k<10; k++) {
						mass[j][k] = mass[j-1][k];
					}
				}
				for (j=0; j<10; j++) {
					mass[0][j] = 0;
				}
			}
		}


		//Render Present
		SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);		
		SDL_RenderPresent(ren);
		SDL_Delay(100);
		timer += 1;

		//tests

		printf("Block1:		X: %d	Y: %d\n", blockLoc1.x, blockLoc1.y);
		printf("Block2:		X: %d	Y: %d\n", blockLoc2.x, blockLoc2.y);
		printf("Block3:		X: %d	Y: %d\n", blockLoc3.x, blockLoc3.y);
		printf("Block4:		X: %d	Y: %d\n", blockLoc4.x, blockLoc4.y);
		printf("BOTTOM OF LOOP\n");
		
		
	}


	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
	return 0;
}

