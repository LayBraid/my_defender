/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "display.h"
#include "utils.h"

void display_earthly_building(dfd *df)
{
    node_earthly_build *tmp = df->earthly_build;

    while (tmp->id < tmp->next->id) {
        if (display(df, tmp->build->img->step_display, df->step)
            && tmp->build->img->sprite != NULL)
            sfRenderWindow_drawSprite(df->window->window,
            tmp->build->img->sprite, NULL);
        tmp = tmp->next;
    }
    if (display(df, tmp->build->img->step_display, df->step)
        && tmp->build->img->sprite != NULL)
        sfRenderWindow_drawSprite(df->window->window,
        tmp->build->img->sprite, NULL);
}
