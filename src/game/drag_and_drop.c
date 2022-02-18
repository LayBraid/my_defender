/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "struct.h"
#include "game.h"
#include "utils.h"

//TODO Bouton 9 == Image 12

void check_on_button(my_defender_t *defender,
node_button *button, sfVector2i mouse)
{
    if (display(button->button->step_display, defender->step) &&
        ((float) mouse.x > button->button->x_click &&
         (float) mouse.x < button->button->x_click + button->button->x_max &&
         (float) mouse.y > button->button->y_click &&
         (float) mouse.y < button->button->y_click + button->button->y_max)) {
        defender->drag->id_building = button->id + 3;
        return;
    }
}

void drag_and_drop(my_defender_t *defender)
{
    sfVector2i mu = sfMouse_getPositionRenderWindow(defender->window->window);
    node_button *tmp = defender->list_buttons;

    if (defender->drag->state != NOTHING)
        return;
    while (tmp->id < tmp->next->id) {
        check_on_button(defender, tmp, mu);
        tmp = tmp->next;
    }
    check_on_button(defender, tmp, mu);
    defender->drag->state = BUILDING;
}
