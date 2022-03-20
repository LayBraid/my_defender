/*
** EPITECH PROJECT, 2022
** my_df
** File description:
** Find a exit in the map
*/

#include "lasers.h"

void laser_follow(sfVector2f pos_a, sfVector2f pos_b)
{
    if (pos_a.x > pos_b.x) {
        while (pos_b.x != pos_a.x) {
            pos_a.x++;
        }
        if (pos_a.y > pos_b.x) {
            pos_a.y++;
        } else {
            pos_a.y--;
        }
    }
    if (pos_b.x > pos_a.x) {
        while (pos_b.x != pos_a.x) {
            pos_b.x++;
        }
        if (pos_a.y > pos_b.x) {
            pos_a.y++;
        } else {
            pos_a.y--;
        }
    }
}
