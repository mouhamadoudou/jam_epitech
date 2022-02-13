/*
** EPITECH PROJECT, 2020
** hyphen.c
** File description:
** hyphen.c
*/

#include "game.h"

void hyphen(void)
{
    write(1, "USAGE\n", 7);
    write(1, "   ./myhunter\n", 15);
    my_putchar('\n');
    write(1, "DESCRIPTION\n", 13);
    write(1, "   - The player must shoot to kill birds with gun\n", 50);
}