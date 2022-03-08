/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "utils.h"

void check_button(node_button *button, int step, sfVector2i mouse)
{
    if (display(button->button->step_display, step) &&
        ((float) mouse.x > button->button->x_click &&
        (float) mouse.x < button->button->x_click + button->button->x_max &&
        (float) mouse.y > button->button->y_click &&
        (float) mouse.y < button->button->y_click + button->button->y_max)) {
        if (button->button->button->anim_pos == 0)
            switch_anim_button(button, 1);
        return;
    }
    switch_anim_button(button, 0);
}

void check_on_hover(dfd *df)
{
    sfVector2i mu = sfMouse_getPositionRenderWindow(df->window->window);
    node_button *tmp = df->list_buttons;

    while (tmp->id < tmp->next->id) {
        check_button(tmp, df->step, mu);
        tmp = tmp->next;
    }
    check_button(tmp, df->step, mu);
}
