/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "game.h"

void display_buttons(my_defender_t *defender)
{
    node_button *tmp = defender->list_buttons;

    while (tmp->id < tmp->next->id) {
        if (tmp->button->step_display == defender->step)
            sfRenderWindow_drawSprite(defender->window->window,
            tmp->button->button->sprite, NULL);
        tmp = tmp->next;
    }
    if (tmp->button->step_display == defender->step)
        sfRenderWindow_drawSprite(defender->window->window,
        tmp->button->button->sprite, NULL);
}
