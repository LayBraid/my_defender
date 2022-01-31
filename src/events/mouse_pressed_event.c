/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../include/events.h"

void mouse_pressed_event(my_defender_t *my_defender)
{
    sfVector2i mouse;
    sfVector2f vector;
    if (my_defender->window->event.type == sfEvtMouseButtonPressed) {
        mouse = sfMouse_getPositionRenderWindow(my_defender->window->window);
        vector.x = mouse.x;
        vector.y = mouse.y;
        //buttons_event(my_defender, vector);
    }
}
