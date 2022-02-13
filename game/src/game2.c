/*
** EPITECH PROJECT, 2021
** game2.c
** File description:
** JAM
*/

#include "game.h"

param game2(param pos, sfEvent event)
{
    if (pos.game == 2) {
            sfRenderWindow_drawSprite(pos.window, pos.s_GM, NULL);
            pos.life = 5;
            if (pos.mouse.x >= 730 && pos.mouse.x <= 1200 &&
                pos.mouse.y >= 590 && pos.mouse.y <= 700 &&
                event.type == sfEvtMouseButtonPressed) {
                pos.v_GM.x = 5000;
                sfSprite_setPosition(pos.s_GM, pos.v_GM);
                movement_sprite(&pos);
                }
            if (pos.mouse.x >= 0 && pos.mouse.x <= 200 &&
                pos.mouse.y >= 800 && pos.mouse.y <= 1080 &&
                event.type == sfEvtMouseButtonPressed) {
                    sfRenderWindow_close(pos.window);
            }
        }
}

param game3(param pos, sfEvent event)
{
    if (pos.game == 3) {
        pos.life <= 5;
            sfRenderWindow_drawSprite(pos.window, pos.succe, NULL);
            if (pos.mouse.x >= 730 && pos.mouse.x <= 1200 &&
                pos.mouse.y >= 590 && pos.mouse.y <= 700 &&
                event.type == sfEvtMouseButtonPressed) {
                pos.v_GM.x = 5000;
                sfSprite_setPosition(pos.succe, pos.v_win);
                movement_sprite(&pos);
                }
            if (pos.mouse.x >= 0 && pos.mouse.x <= 200 &&
                pos.mouse.y >= 800 && pos.mouse.y <= 1080 &&
                event.type == sfEvtMouseButtonPressed) {
                    sfRenderWindow_close(pos.window);
            }
        }
}