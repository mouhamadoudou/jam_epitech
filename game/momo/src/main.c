/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include "game.h"

int main(int ac, char **av)
{
    if (ac <= 1)
        okay(ac, av);

    if (av[1][0] == '-' && av[1][1] == 'h')
        hyphen();

    return 0;
}