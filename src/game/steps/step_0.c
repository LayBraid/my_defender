/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/steps.h"
#include "../../../include/display.h"

void exe_step_0(my_defender_t *my_defender)
{
    sfRenderWindow_drawSprite(my_defender->window->window,
                              my_defender->list_img->bg_open->sprite, NULL);
    sfRenderWindow_drawSprite(my_defender->window->window, my_defender->list_buttons->play->button->sprite, NULL);
}
