/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "events.h"

void mouse_pressed_event(my_defender_t *my_defender, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed)
        check_on_click(my_defender);
}

void mouse_unpressed_event(my_defender_t *my_defender, sfEvent event)
{
    if (event.type == sfEvtMouseButtonReleased)
        check_on_un_click(my_defender);
}
