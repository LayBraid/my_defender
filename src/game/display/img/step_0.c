/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "../../../../include/display.h"

void display_img_step_0(my_defender_t *my_defender)
{
    sfRenderWindow_drawSprite(my_defender->window->window,
    my_defender->list_img->bg_open->sprite, NULL);
}