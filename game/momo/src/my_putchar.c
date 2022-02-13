/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** my_hunter
*/

#include "game.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}