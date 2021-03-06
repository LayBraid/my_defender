/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "events.h"
#include "utils.h"
#include "game.h"

void click_button(my_defender_t *df,
node_button *button, sfVector2i mouse)
{
    if (display(df, button->button->step_display, df->step) &&
        ((float) mouse.x > button->button->x_click &&
        (float) mouse.x < button->button->x_click + button->button->x_max &&
        (float) mouse.y > button->button->y_click &&
        (float) mouse.y < button->button->y_click + button->button->y_max)) {
        if (df->step == PAUSE_GAME && button->button->step_display != S_H)
            return;
        if (button->button->button->anim_pos == 1) {
            switch_anim_button(button, 2);
            sfMusic_stop(df->click);
            sfMusic_play(df->click);
        }
        return;
    }
}

void check_on_click(my_defender_t *defender)
{
    sfVector2i mu = sfMouse_getPositionRenderWindow(defender->window->window);
    node_button *tmp = defender->list_buttons;

    while (tmp->id < tmp->next->id) {
        click_button(defender, tmp, mu);
        tmp = tmp->next;
    }
    click_button(defender, tmp, mu);
}
