/*
** EPITECH PROJECT, 2020
** position_texture.c
** File description:
** JAM
*/

#include "game.h"

void pos_texture(param *pos_t)
{
    sfSprite_setTexture(pos_t->s_forest1, pos_t->t_forest1, sfTrue);
    sfSprite_setTexture(pos_t->s_forest2, pos_t->t_forest2, sfTrue);
    sfSprite_setTexture(pos_t->s_butonplay1, pos_t->t_butonplay1, sfTrue);
    sfSprite_setTexture(pos_t->s_bird, pos_t->t_bird, sfTrue);
    sfSprite_setTexture(pos_t->s_bird1, pos_t->t_bird1, sfTrue);
    sfSprite_setTexture(pos_t->s_bird2, pos_t->t_bird2, sfTrue);
    sfSprite_setTexture(pos_t->s_aim, pos_t->t_aim, sfTrue);
    sfSprite_setTexture(pos_t->s_life1, pos_t->t_life1, sfTrue);
    sfSprite_setTexture(pos_t->s_life2, pos_t->t_life2, sfTrue);
    sfSprite_setTexture(pos_t->s_life3, pos_t->t_life3, sfTrue);
    sfSprite_setTexture(pos_t->s_life4, pos_t->t_life4, sfTrue);
    sfSprite_setTexture(pos_t->s_life5, pos_t->t_life5, sfTrue);
    sfSprite_setTexture(pos_t->s_GM, pos_t->t_GM, sfTrue);
    sfSprite_setTexture(pos_t->succe, pos_t->succes, sfTrue);
}

void pos_sprite(param *s_p)
{
    sfSprite_setPosition(s_p->s_forest2, s_p->v_forest2);
    sfSprite_setPosition(s_p->s_forest1, s_p->v_forest1);
    sfSprite_setPosition(s_p->s_butonplay1, s_p->v_butonplay1);
    sfSprite_setPosition(s_p->s_bird, s_p->v_bird);
    sfSprite_setPosition(s_p->s_bird1, s_p->v_bird1);
    sfSprite_setPosition(s_p->s_bird2, s_p->v_bird2);
    sfSprite_setPosition(s_p->s_aim, s_p->v_aim);
    sfSprite_setPosition(s_p->s_life1, s_p->v_life1);
    sfSprite_setPosition(s_p->s_life2, s_p->v_life2);
    sfSprite_setPosition(s_p->s_life3, s_p->v_life3);
    sfSprite_setPosition(s_p->s_life4, s_p->v_life4);
    sfSprite_setPosition(s_p->s_life5, s_p->v_life5);
    sfSprite_setPosition(s_p->s_GM, s_p->v_GM);
    sfSprite_setPosition(s_p->succe, s_p->v_win);
    
}

void draw_sprite(param *d_s)
{
    sfRenderWindow_setFramerateLimit(d_s->window, 60);
    sfSprite_setTextureRect(d_s->s_bird, d_s->rect_jpg);
    sfSprite_setTextureRect(d_s->s_bird1, d_s->rect_jpg);
    sfSprite_setTextureRect(d_s->s_bird2, d_s->rect_jpg);
    if (d_s->game == 2) {
    sfRenderWindow_drawSprite(d_s->window, d_s->s_GM, NULL);
    } else if (d_s->game == 3) {
        sfRenderWindow_clear(d_s->window, sfBlack);
        sfRenderWindow_drawSprite(d_s->window, d_s->succe, NULL);
    } else {
    sfRenderWindow_drawSprite(d_s->window, d_s->s_forest2, NULL);
    sfRenderWindow_setMouseCursorVisible(d_s->window, sfFalse);
    sfRenderWindow_drawSprite(d_s->window, d_s->s_aim, NULL);
    sfRenderWindow_drawSprite(d_s->window, d_s->s_bird, NULL);
    sfRenderWindow_drawSprite(d_s->window, d_s->s_bird1, NULL);
    sfRenderWindow_drawSprite(d_s->window, d_s->s_bird2, NULL);
    sfRenderWindow_drawSprite(d_s->window, d_s->s_forest1, NULL);
    sfRenderWindow_drawSprite(d_s->window, d_s->s_butonplay1, NULL);
    }
}

void movement_sprite(param *mov_s)
{
    sfSprite_setPosition(mov_s->s_bird, mov_s->v_bird);
    mov_s->v_bird.x += 40;
    if (mov_s->v_bird.x >= 1920) {
        mov_s->v_bird.x = -950;
        mov_s->life = mov_s->life - 1;
    }
    sfSprite_setPosition(mov_s->s_bird1, mov_s->v_bird1);
    mov_s->v_bird1.x += 40;
    if (mov_s->v_bird1.x >= 1920) {
        mov_s->v_bird1.x = -1300;
        mov_s->life = mov_s->life - 1;
    }
    sfSprite_setPosition(mov_s->s_bird2, mov_s->v_bird2);
    mov_s->v_bird2.x += 30;
    if (mov_s->v_bird2.x >= 1920) {
        mov_s->v_bird2.x = -3000;
        mov_s->life = mov_s->life - 1;
    }
}
