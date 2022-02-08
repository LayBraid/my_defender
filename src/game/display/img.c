/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "game.h"

void display_img(my_defender_t *defender)
{
    node_img *tmp = defender->list_img;

    while (tmp->id < tmp->next->id) {
        if (tmp->img->step_display == defender->step)
            sfRenderWindow_drawSprite(defender->window->window,
            tmp->img->sprite, NULL);
        tmp = tmp->next;
    }
    if (tmp->img->step_display == defender->step)
        sfRenderWindow_drawSprite(defender->window->window,
        tmp->img->sprite, NULL);
}
