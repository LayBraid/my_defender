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

float get_r_x_build(int type)
{
    if (type < 5)
        return 250;
    if (type < 10)
        return 580;
    return 910;
}

float get_r_y_build(int type)
{
    if (type == TOWER_n1 || type == TANK_n2 || type == PLANE_n1)
        return 1403;
}
