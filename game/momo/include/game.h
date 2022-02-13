/*
** EPITECH PROJECT, 2020
** game.h
** File description:
** my_hunter
*/

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Window/Event.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Window/Types.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Export.h>
#include <SFML/Audio/Types.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct param_t {
    sfRenderWindow *window;
    int game;
    int life;
    sfTexture *t_forest1;
    sfTexture *t_butonplay1;
    sfTexture *t_forest2;
    sfTexture *t_bird;
    sfTexture *t_bird1;
    sfTexture *t_bird2;
    sfTexture *t_bird3;
    sfTexture *t_bird4;
    sfTexture *t_bird5;
    sfTexture *t_aim;
    sfTexture *t_life1;
    sfTexture *t_life2;
    sfTexture *t_life3;
    sfTexture *t_life4;
    sfTexture *t_life5;
    sfTexture *t_GM;
    sfSprite *s_butonplay1;
    sfSprite *s_forest1;
    sfSprite *s_bird;
    sfSprite *s_bird1;
    sfSprite *s_bird2;
    sfSprite *s_bird3;
    sfSprite *s_bird4;
    sfSprite *s_bird5;
    sfSprite *s_aim;
    sfSprite *s_forest2;
    sfSprite *s_life1;
    sfSprite *s_life2;
    sfSprite *s_life3;
    sfSprite *s_life4;
    sfSprite *s_life5;
    sfSprite *s_GM;
    sfVector2i mouse;
    sfClock *clock_png;
    sfMusic *music;
    sfVector2f v_forest1;
    sfVector2f v_forest2;
    sfVector2f v_butonplay1;
    sfVector2f v_bird;
    sfVector2f v_bird1;
    sfVector2f v_bird2;
    sfVector2f v_bird3;
    sfVector2f v_bird4;
    sfVector2f v_bird5;
    sfVector2f v_aim;
    sfVector2f v_life1;
    sfVector2f v_life2;
    sfVector2f v_life3;
    sfVector2f v_life4;
    sfVector2f v_life5;
    sfVector2f v_GM;
    sfEvent event;
    sfIntRect rect_jpg;
    sfVideoMode mode;

    sfText *text;
    sfFont *font;
    char *score;
    sfVector2f v_text;
    int count;
}param;

int pos_vec(param *pos_v);
void texture_create(param *t_c);
void sprite_create(param *s_c);
void music_play(param *music);
void movement_sprite(param *mv_s);
void movement_sprite2(param *mov_s2, sfEvent event);
void movement_sprite3(param *mov_s3, sfEvent event);
void movement_sprite4(param *mov_s4);
void pos_texture(param *pos_t);
void pos_sprite(param *s_p);
void draw_sprite(param *d_s);
void movement_sprite(param *mov_s);
void destroy_all(param *dest);
void move_sprite(param *mv_s);
int pos_vec1(param *pose_v);
void my_putchar(char c);
int okay(int ac, char **av);
int main(int ac, char **av);
void hyphen(void);
void live(param *core);
param game2(param pos, sfEvent event);
param score(param *se);
char *convert(int nb);
param init(param *t);

#endif
