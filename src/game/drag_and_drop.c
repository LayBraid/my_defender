/*
** EPITECH PROJECT, 2022
** my_df
** File description:
** No file there , just an epitech header example
*/

#include "struct.h"
#include "game.h"
#include "utils.h"
#include "buildings.h"

void check_on_button(dfd *df,
node_button *button, sfVector2i mouse)
{
    if (display(button->button->step_display, df->step) &&
        ((float) mouse.x > button->button->x_click &&
         (float) mouse.x < button->button->x_click + button->button->x_max &&
         (float) mouse.y > button->button->y_click &&
         (float) mouse.y < button->button->y_click + button->button->y_max)) {
        df->drag->id_building = button->id + 3;
        df->drag->x_correction = button->button->x_click - (float) mouse.x;
        df->drag->y_correction = button->button->y_click - (float) mouse.y;
        return;
    }
}

void drag_and_drop(dfd *df)
{
    sfVector2i mu = sfMouse_getPositionRenderWindow(df->window->window);
    node_button *tmp = df->list_buttons;

    if (df->drag->state != NOTHING)
        return;
    while (tmp->id < tmp->next->id) {
        check_on_button(df, tmp, mu);
        tmp = tmp->next;
    }
    check_on_button(df, tmp, mu);
    df->drag->state = BUILDING;
    switch_step(df, DRAG_1);
}

void drag_and_drop_launch(dfd *df)
{
    if (df->drag->state == NOTHING)
        return;
    df->drag->state = NOTHING;
    df->tmp_create->id_box = df->last_unclick;
    df->tmp_create->type = get_type_building(df->drag->id_building);
    df->tmp_create->id_build = df->drag->id_building - 12;
    df->drag->id_building = -1;
    df->drag->x_correction = 0;
    df->drag->y_correction = 0;
    switch_step(df, MAIN);
    add_building(df);
}
