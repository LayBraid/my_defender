/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "game.h"
#include "setup.h"

cf HIT_TOWER_1[3] = {(float) 1,3,(float) 5};

float get_hits(int type, int level)
{
    if (type == TOWER_n1)
        return HIT_TOWER_1[level];
    if (type == TOWER_n2)
        return HIT_TOWER_1[level];
    return 0;
}
