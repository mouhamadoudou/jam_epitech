/*
** EPITECH PROJECT, 2022
** convert.c
** File description:
** convert.c
*/

#include "game.h"

param init(param *t)
{
    t->v_text.x = 370;
    t->v_text.y = 0;
}

char *convert(int nb)
{
    //  long sec = 120;
    //  while (sec > 0)
    //  {
    //      sec--;
    //      sleep(1000);
    //  }
    //  return sec;
    int s = 0;
    int i = nb;
    int j = 0;
    char *str = malloc(sizeof(char) * (s + j + 1));

    while (i)
    {
        i = i / 10;
        s++;
    }
    for (i = s + j - 1; i >= j; i--, nb = nb / 10)
        str[i] = nb % 10 + 48;
    str[s + j] = '\0';
    printf(str);
    return str;
}

param score(param *se)
{
    init(se);

    se->font = sfFont_createFromFile("font/julietta.ttf");
    se->text = sfText_create();

    se->text = sfText_create();
    se->count = se->count + 1;
    
    if (se->count >= 500) {
        sfRenderWindow_drawSprite(se->window, se->succe, NULL);
        se->game = 3;
    }

    sfText_setPosition(se->text, se->v_text);
    sfText_setFont(se->text, se->font);
    sfText_setString(se->text, convert(se->count));
    sfText_setCharacterSize(se->text, 100);
    sfText_setColor(se->text, sfRed);
    sfRenderWindow_drawText(se->window, se->text, NULL);
}
