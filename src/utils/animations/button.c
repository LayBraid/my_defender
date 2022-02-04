/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

void switch_anim_button(node_button *button, int anim)
{
    sfIntRect rect = sfSprite_getTextureRect(button->button->button->sprite);
    rect.left = button->button->button->x_power_anim * anim;
    sfSprite_setTextureRect(button->button->button->sprite, rect);
}
