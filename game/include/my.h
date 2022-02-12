/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** 
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

sfVideoMode mode = {1920, 1080, 32};
sfRenderWindow *window;
sfEvent event;
sfVector2i mouse;

sfTexture *start_t;
sfSprite *start_s;
sfVector2f vectstart = {800, 680};
sfVector2f sizestart = {0, 0};

sfTexture *terrain_t;
sfSprite *terrain_s;

sfTexture *acceuil_t;
sfSprite *acceuil_s;

sfTexture *amine_t;
sfSprite *amine_s;

sfTexture *balle_t;
sfSprite *balle_s;
sfVector2f v_balle = {-60, 370};

sfVector2i mouse;


#endif
