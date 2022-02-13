/*
** EPITECH PROJECT, 2020
** shifting.c
** File description:
** hunter
*/

#include "game.h"

void movement_sprite2(param *mov_s2, sfEvent event)
{
    if ((mov_s2->mouse.x >= mov_s2->v_bird.x - 30 &&
            mov_s2->mouse.x <= mov_s2->v_bird.x + 224)
        && (mov_s2->mouse.y >= mov_s2->v_bird.y &&
            mov_s2->mouse.y <= mov_s2->v_bird.y + 266)
        && (event.type == sfEvtMouseButtonPressed))
            mov_s2->v_bird.x = -950;

    if ((mov_s2->mouse.x >= mov_s2->v_bird1.x - 30 &&
            mov_s2->mouse.x <= mov_s2->v_bird1.x + 224)
        && (mov_s2->mouse.y >= mov_s2->v_bird1.y &&
            mov_s2->mouse.y <= mov_s2->v_bird1.y + 266)
        && (event.type == sfEvtMouseButtonPressed))
            mov_s2->v_bird1.x = -1300;
}

void movement_sprite3(param *mov_s3, sfEvent event)
{
    if ((mov_s3->mouse.x >= mov_s3->v_bird2.x - 30 &&
        mov_s3->mouse.x <= mov_s3->v_bird2.x + 224)
    && (mov_s3->mouse.y >= mov_s3->v_bird2.y &&
        mov_s3->mouse.y <= mov_s3-> v_bird2.y + 266)
    && (event.type == sfEvtMouseButtonPressed))
        mov_s3->v_bird2.x = -3000;

    sfRenderWindow_display(mov_s3->window);
}

void destroy_all(param *dest)
{
    sfRenderWindow_destroy(dest->window);
    sfTexture_destroy(dest->t_bird4);
    sfTexture_destroy(dest->t_bird);
    sfTexture_destroy(dest->t_bird2);
    sfTexture_destroy(dest->t_bird1);
    sfMusic_destroy(dest->music);
    sfRenderWindow_destroy(dest->window);
}