/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/struct.h"
#include "../../../include/setup.h"

hovered_button *setup_a_hovered_button(char *path, float info[9])
{
    hovered_button *button = malloc(sizeof(hovered_button));

    button->button = setup_a_anim_img(path, info);
    button->x_click = info[7];
    button->y_click = info[8];
    return button;
}