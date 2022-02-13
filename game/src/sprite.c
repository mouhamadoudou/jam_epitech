/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** JAM
*/

#include "game.h"

param buton_press(param pos, sfEvent event)
{
    if (pos.mouse.x >= 730 && pos.mouse.x <= 1200 &&
        pos.mouse.y >= 590 && pos.mouse.y <= 700 &&
        event.type == sfEvtMouseButtonPressed) {
        pos.game = 1;
        pos.v_bird.x = -2150;
        pos.v_bird1.x = -900;
        pos.v_bird2.x = -3000;
        pos.v_forest1.x = 6000;
        pos.v_butonplay1.x = 6000;
        sfSprite_setPosition(pos.s_forest1, pos.v_forest1);
        sfSprite_setPosition(pos.s_butonplay1, pos.v_butonplay1);
    }
    return pos;
}

param mouse_press(param pos, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(pos.window);
    if (event.type == sfEvtMouseMoved) {
        pos.v_aim.x = event.mouseMove.x - 100;
        pos.v_aim.y = event.mouseMove.y - 88;
        sfSprite_setPosition(pos.s_bird1, pos.v_bird1);
    }
}

param get_pos(param pos)
{
    pos.clock_png = sfClock_create();
    sfEvent event;

    pos_vec(&pos);
    pos_vec1(&pos);
    texture_create(&pos);
    // texture_create_success(&pos);
    sprite_create(&pos);
    // sprite_create_success(&pos);
    pos_texture(&pos);
    // pos_texture_success(&pos);
    pos_sprite(&pos);
   // music_play(&pos);
    return pos;
}

param draw_pos(param pos, sfEvent event)
{
    draw_sprite(&pos);
    live(&pos);
    //draw_sprite_success(&pos);

    movement_sprite2(&pos, event);
    movement_sprite3(&pos, event);
    //score(&pos);
    return pos;
}

int okay(int ac, char **av)
{
    sfEvent event;
    param pos = get_pos(pos);
    pos.game = 0;

    while (sfRenderWindow_isOpen(pos.window)) {
        pos.mouse = sfMouse_getPositionRenderWindow(pos.window);
        move_sprite(&pos);
        while (sfRenderWindow_pollEvent(pos.window, &event)) {
            pos = buton_press(pos, event);
            mouse_press(pos, event);
        }
        pos = draw_pos(pos, event);
        draw_sprite(&pos);
        if (pos.game == 1) {
            score(&pos);
            movement_sprite(&pos);
            live(&pos);
        }
        game2(pos, event);
        game3(pos, event);
        sfRenderWindow_display(pos.window);
    }
    destroy_all(&pos);
    return 0;
}
