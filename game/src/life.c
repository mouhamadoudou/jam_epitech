/*
** EPITECH PROJECT, 2021
** life.c
** File description:
** JAM
*/

#include "game.h"

void live(param *core)
{
    if (core->life == 0) {
        sfRenderWindow_drawSprite(core->window, core->s_GM, NULL);
        core->game = 2;
    }
    if (core->life == 1)
        sfRenderWindow_drawSprite(core->window, core->s_life1, NULL);
    if (core->life == 2)
        sfRenderWindow_drawSprite(core->window, core->s_life2, NULL);
    if (core->life == 3)
        sfRenderWindow_drawSprite(core->window, core->s_life3, NULL);
    if (core->life == 4)
        sfRenderWindow_drawSprite(core->window, core->s_life4, NULL);
    if (core->life == 5 && core->game == 1)
        sfRenderWindow_drawSprite(core->window, core->s_life5, NULL);
}
