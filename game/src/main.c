/*
** EPITECH PROJECT, 2020
** hunter.c
** File description:
** hunter
*/

#include "../include/my.h"

void my_create(void)
{
    start_t = sfTexture_createFromFile("./image/start.png", NULL);
    start_s = sfSprite_create();
    sfSprite_setTexture(start_s, start_t, 0);
    sfSprite_setPosition(start_s, vectstart);

    terrain_t = sfTexture_createFromFile("./image/amine.png", NULL);
    terrain_s = sfSprite_create();
    sfSprite_setTexture(terrain_s, terrain_t, 0);

    acceuil_t  = sfTexture_createFromFile("./image/ea.png", NULL);
    acceuil_s = sfSprite_create();
    sfSprite_setTexture(acceuil_s, acceuil_t, 0);

    balle_t = sfTexture_createFromFile("./image/balle.png", NULL);
    balle_s = sfSprite_create();
    sfSprite_setTexture(balle_s, balle_t, 0);
    sfSprite_setPosition(balle_s, v_balle);
}

void my_draw(void)
{
    sfRenderWindow_drawSprite(window, terrain_s, NULL);
    sfRenderWindow_drawSprite(window, acceuil_s, NULL);
    sfRenderWindow_drawSprite(window, start_s, NULL);
}

void mouv_balle(void)
{

    sfRenderWindow_drawSprite(window, balle_s, NULL);

    sfSprite_setPosition(balle_s, v_balle);
    v_balle.x += 20;
    if (v_balle.x > 1930) {
        v_balle.x = -60;
        v_balle.y = rand() % 1020;
    }
    if ((mouse.x >= v_balle.x && mouse.x <= v_balle.x + 51)
        && (mouse.y >= v_balle.y && mouse.y <= v_balle.y + 51)
        && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        v_balle.x = -70;
        v_balle.y = rand() % 1000;
    }
}

void my_draw_gam(void)
{
    terrain_t = sfTexture_createFromFile("./image/amine.png", NULL);
    terrain_s = sfSprite_create();
    sfSprite_setTexture(terrain_s, terrain_t, 0);
    sfRenderWindow_drawSprite(window, terrain_s, NULL);

    mouv_balle();
}

int main(void)
{
    int gam = 0;
    window = sfRenderWindow_create(mode, "jeux.fr", sfDefaultStyle, NULL);
    my_create();
    while (sfRenderWindow_isOpen(window)) {
        mouse = sfMouse_getPositionRenderWindow(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if  (event.type == sfEvtMouseButtonPressed) {
                if (mouse.x >= 810 && mouse.y >= 698 && mouse.x <= 1042 && mouse.y <= 790) {
                    gam = 1;
                }
            }
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        if (gam == 0)
            my_draw();
        if (gam == 1)
            my_draw_gam();

        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return(0);
}
