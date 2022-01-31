/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../include/events.h"

int poll_events(my_defender_t *my_defender)
{
    while (sfRenderWindow_pollEvent(my_defender->window->window,
        &my_defender->window->event)) {
        close_event(my_defender->window);
        mouse_pressed_event(my_defender);
    }
    return 0;
}
