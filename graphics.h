#ifndef GRAPHICS_H
#define GRAPHICS_H

// Vars
#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 160
#define DINO_HEIGHT 25
#define DINO_WIDTH 25

// Macros
#define OFFSET(r, c, w) ((r) * (w) + (c))

extern unsigned int vBlankCounter;

// Prototypes
void waitForVblank();
void drawImage(int row, int col, int width, int height, const unsigned short* image);
void drawRectangle(int row, int col, int width, int height, volatile unsigned int color);
void drawFullScreenRectangle(volatile unsigned int color);
void setPixel(int row, int col, unsigned short color);

#endif

