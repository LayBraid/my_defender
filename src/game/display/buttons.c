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
    while (defender->list_buttons->id < defender->list_buttons->next->id) {
        if (defender->list_buttons->button->step_display == defender->step)
            sfRenderWindow_drawSprite(defender->window->window, defender->list_buttons->button->button->sprite, NULL);
        defender->list_buttons = defender->list_buttons->next;
    }
    if (defender->list_buttons->button->step_display == defender->step)
        sfRenderWindow_drawSprite(defender->window->window, defender->list_buttons->button->button->sprite, NULL);
    defender->list_buttons = defender->list_buttons->next;
}
