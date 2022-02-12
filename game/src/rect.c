/*
** EPITECH PROJECT, 2021
** rect.c
** File description:
** hunter
*/
#include "my.h"

int rect()
{
     sfIntRect rect = {0, 0, 302, 246};
    rect_jpg.left = ptr->jpg;
    rect_jpg.top = 0;
    rect_jpg.height = 74;
    rect_jpg.width = 76;
    time = sfClock_getElapsedTime(ptr->clock_png);

    if (ptr->time.microseconds / 130000 > 1)
    {
        ptr->jpg = ptr->jpg + 76;
        sfClock_restart(ptr->clock_png);
    }
    if (ptr->jpg == 456)
        ptr->jpg = 0;
    sfSprite_setTextureRect(ptr->ninja_run.sprite, ptr->rect_jpg);
}