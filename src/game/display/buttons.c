/*
** EPITECH PROJECT, 2022
** my_df
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "utils.h"

void display_buttons(dfd *df)
{
    node_button *tmp = df->list_buttons;

    while (tmp->id < tmp->next->id) {
        if (display(df, tmp->button->step_display, df->step))
            sfRenderWindow_drawSprite(df->window->window,
            tmp->button->button->sprite, NULL);
        tmp = tmp->next;
    }
    if (display(df, tmp->button->step_display, df->step))
        sfRenderWindow_drawSprite(df->window->window,
        tmp->button->button->sprite, NULL);
}
