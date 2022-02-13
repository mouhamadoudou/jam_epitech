/*
** EPITECH PROJECT, 2020
** position_vec.c
** File description:
** myhunter
*/

#include "game.h"

int pos_vec(param *pos_v)
{
    pos_v->mode.width = 1920;
    pos_v->mode.height = 1080;
    pos_v->v_forest1.x = 0;
    pos_v->v_forest1.y = 0;
    pos_v->v_forest2.x = 0;
    pos_v->v_forest2.y = 0;
    pos_v->v_bird.x = -2150;
    pos_v->v_bird.y = 50;
    pos_v->v_bird1.x = -900;
    pos_v->v_bird1.y = 300;
    pos_v->v_bird2.x = -3000;
    pos_v->v_bird2.y = 550;
    pos_v->v_aim.x  = 90;
    pos_v->v_aim.y = 100;
}

void texture_create(param *t_c)
{
    t_c->life = 5;
    t_c->window = sfRenderWindow_create(t_c->mode, "SFML window",
    sfResize | sfClose, NULL);

    t_c->t_forest1 = sfTexture_createFromFile("./img/forest1.png", NULL);
    t_c->t_forest2 = sfTexture_createFromFile("./img/forest2.jpg", NULL);
    t_c->t_butonplay1 = sfTexture_createFromFile("./img/butonplay.png", NULL);
    t_c->t_bird = sfTexture_createFromFile("./img/flopy.png", NULL);
    t_c->t_bird1 = sfTexture_createFromFile("./img/flopy.png", NULL);
    t_c->t_bird2 = sfTexture_createFromFile("./img/flopy.png", NULL);
    t_c->t_aim = sfTexture_createFromFile("./img/aim.png", NULL);
    t_c->t_life1 = sfTexture_createFromFile("./img/life1.png", NULL);
    t_c->t_life2 = sfTexture_createFromFile("./img/life2.png", NULL);
    t_c->t_life3 = sfTexture_createFromFile("./img/life3.png", NULL);
    t_c->t_life4 = sfTexture_createFromFile("./img/life4.png", NULL);
    t_c->t_life5 = sfTexture_createFromFile("./img/life5.png", NULL);
    t_c->t_GM = sfTexture_createFromFile("./img/GM.jpg", NULL);
}

void sprite_create(param *s_c)
{
    s_c->s_forest1 = sfSprite_create();
    s_c->s_forest2 = sfSprite_create();
    s_c->s_butonplay1 = sfSprite_create();
    s_c->s_bird = sfSprite_create();
    s_c->s_bird1 = sfSprite_create();
    s_c->s_bird2 = sfSprite_create();
    s_c->s_aim = sfSprite_create();
    s_c->s_life1 = sfSprite_create();
    s_c->s_life2 = sfSprite_create();
    s_c->s_life3 = sfSprite_create();
    s_c->s_life4 = sfSprite_create();
    s_c->s_life5 = sfSprite_create();
    s_c->s_GM = sfSprite_create();
}

void music_play(param *music)
{
    music->music = sfMusic_createFromFile("./sound/electro.ogg");
    sfMusic_setLoop(music->music, sfTrue);
    sfMusic_play(music->music);
}

void move_sprite(param *mv_s)
{
    static int jpg = 0;

    mv_s->rect_jpg.left = jpg;
    mv_s->rect_jpg.top = 0;
    mv_s->rect_jpg.height = 100;
    mv_s->rect_jpg.width = 101;

    if (sfTime_asSeconds(sfClock_getElapsedTime(mv_s->clock_png)) >= 0.30) {
        jpg = jpg + 100;
        if (jpg == 800) {
            jpg = 0;
            sfClock_restart(mv_s->clock_png);
        }
    }
}
