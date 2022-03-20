/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "game.h"

void display_one_button(dfd *df, int id)
{
    node_button *tmp = df->list_buttons;

    while (tmp->id != id)
        tmp = tmp->next;
    sfRenderWindow_drawSprite(df->window->window,
    tmp->button->button->sprite, NULL);
}

void display_one_image(dfd *df, int id)
{
    node_img *tmp = df->list_img;

    while (tmp->id != id)
        tmp = tmp->next;
    sfRenderWindow_drawSprite(df->window->window, tmp->img->sprite, NULL);
}

void display_pause(dfd *df)
{
    if (df->step != PAUSE_GAME)
        return;
    display_one_image(df, 26);
    display_one_image(df, 27);
    display_one_button(df, 154);
    display_one_button(df, 152);
    display_one_button(df, 153);
}
