/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "game.h"

float get_x_box(dfd *df, int box)
{
    node_button *tmp = df->list_buttons;
    sfVector2f vector;

    while (tmp->id != box) {
        tmp = tmp->next;
    }
    vector = sfSprite_getPosition(tmp->button->button->sprite);
    return vector.x;
}

float get_y_box(dfd *df, int box)
{
    node_button *tmp = df->list_buttons;
    sfVector2f vector;

    while (tmp->id != box) {
        tmp = tmp->next;
    }
    vector = sfSprite_getPosition(tmp->button->button->sprite);
    return vector.y;
}

int get_type_building(int id_img)
{
    if (id_img < 16)
        return TOWER;
    if (id_img < 18)
        return TANK;
    if (id_img < 22)
        return MISSILE;
    if (id_img < 24)
        return PLANE;
    return -1;
}
