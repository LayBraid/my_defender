/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "utils.h"
#include "game.h"

void un_click_button(my_defender_t *df,
node_button *button, sfVector2i mouse)
{
    if (display(df, button->button->step_display, df->step) &&
        ((float) mouse.x > button->button->x_click &&
        (float) mouse.x < button->button->x_click + button->button->x_max &&
        (float) mouse.y > button->button->y_click &&
        (float) mouse.y < button->button->y_click + button->button->y_max)) {
        if (df->step == PAUSE_GAME && button->button->step_display != S_H)
            return;
        if (button->button->button->anim_pos == 2) {
            df->last_unclick = button->id;
            button->button->function((my_defender_pointer *) df);
            switch_anim_button(button, 0);
            return;
        }
    }
}

void check_on_un_click(my_defender_t *defender)
{
    sfVector2i mu = sfMouse_getPositionRenderWindow(defender->window->window);
    node_button *tmp = defender->list_buttons;

    while (tmp->id < tmp->next->id) {
        un_click_button(defender, tmp, mu);
        tmp = tmp->next;
    }
    un_click_button(defender, tmp, mu);
}
