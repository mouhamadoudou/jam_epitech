/*
** EPITECH PROJECT, 2020
** hyphen.c
** File description:
** JAM
*/

#include "game.h"

void hyphen(void)
{
    write(1, "USAGE\n", 7);
    write(1, "   ./jam_epitech\n", 15);
    write(1, "\n" ,1);
    my_putchar('\n');
    write(1, "DESCRIPTION\n", 13);
    write(1, "   - The gorilla must eat they bananas before the time past to win the game.\n", 77);
    write(1, "But it's not easy because he has five lives. So if he doesn't eat ", 66);
    write(1, "five bananas before they disappear,\n", 36);
    write(1, "he loses five life points and loses the game !\n", 48);
}