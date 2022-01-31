/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../include/utils.h"

void switch_step(my_defender_t *my_defender, int x)
{
    if (x == 0 || x == 1 || x == 4 || x == 5 || x == 6) {
        my_defender->step = x;
    }
    if (x == 2 || x == 3) {
        my_defender->step = x;
    }
}
