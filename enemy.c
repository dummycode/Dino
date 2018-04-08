#include "graphics.h"
#include "enemy.h"
#include "myLib.h"
#include "colors.h"

#include <stdbool.h>

#define GROUND 75

void drawEnemy(Enemy *enemy) 
{
    drawImage(GROUND - enemy->p.y, enemy->p.x, enemy->size.height, enemy->size.width, enemy->image);
}

void updateEnemy(Enemy *enemy) 
{
    enemy->np.x = enemy->p.x + enemy->v.x;
    enemy->np.y = enemy->p.y + enemy->v.y;
    
    enemy->nv.x = enemy->v.x;
    enemy->nv.y = enemy->v.y;
    
    if (enemy->np.y < 0) {
        enemy->np.y = 0;
        enemy->nv.y = 0;
    }
}

void clearOldEnemy(Enemy *enemy)
{
    drawRectangle(GROUND - enemy->p.y, enemy->p.x, enemy->size.height, enemy->size.width, BACKGROUND_COLOR);
}
