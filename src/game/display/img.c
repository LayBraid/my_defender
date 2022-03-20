/*
** EPITECH PROJECT, 2022
** my_df
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "utils.h"

void display_img(dfd *df)
{
    node_img *tmp = df->list_img;

    while (tmp->id < tmp->next->id) {
        if (display(df, tmp->img->step_display, df->step))
            sfRenderWindow_drawSprite(df->window->window,
            tmp->img->sprite, NULL);
        tmp = tmp->next;
    }
    if (display(df, tmp->img->step_display, df->step))
        sfRenderWindow_drawSprite(df->window->window,
        tmp->img->sprite, NULL);
}
