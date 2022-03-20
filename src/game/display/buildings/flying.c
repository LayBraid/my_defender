/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "display.h"
#include "utils.h"

void display_flying_building(dfd *df)
{
    node_flying_build *tmp = df->flying_build;

    while (tmp->id < tmp->next->id) {
        if (display(df, tmp->build->img->step_display, df->step))
            sfRenderWindow_drawSprite(df->window->window,
            tmp->build->img->sprite, NULL);
        tmp = tmp->next;
    }
    if (display(df, tmp->build->img->step_display, df->step))
        sfRenderWindow_drawSprite(df->window->window,
        tmp->build->img->sprite, NULL);
}
