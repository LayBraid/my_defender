/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "game.h"

const int TOWER_R[4] = {1, 3, 5, 7};
const int TANK_R[2] = {2, 4};

int range_next(int tower, int enemy, int range)
{
    for (int i = 0; i < range; i++)
        if (tower - (i + 1) - (i + 1 * 14) == enemy)
            return 1;
    for (int i = 0; i < range; i++)
        if (tower + (i + 1) + (i + 1 * 14) == enemy)
            return 1;
    for (int i = 0; i < range; i++)
        if (tower + (i + 1) - (i + 1 * 14) == enemy)
            return 1;
    for (int i = 0; i < range; i++)
        if (tower - (i + 1) + (i + 1 * 14) == enemy)
            return 1;
    return 0;
}

int in_range(int tower, int enemy, int range)
{
    tower -= 20;
    enemy -= 20;
    if (tower - range <= enemy && tower + range >= enemy)
        return 1;
    for (int i = 0; i < range; i++)
        if (tower - (i + 1 * 14) == enemy)
            return 1;
    for (int i = 0; i < range; i++)
        if (tower + (i + 1 * 14) == enemy)
            return 1;
    return range_next(tower, enemy, range);
}

int get_range(int type)
{
    if (type == TOWER_n1)
        return TOWER_R[0];
    if (type == TOWER_n2)
        return TOWER_R[1];
    if (type == TOWER_n3)
        return TOWER_R[2];
    if (type == TOWER_n4)
        return TOWER_R[3];
    if (type == TANK_n1)
        return TANK_R[0];
    if (type == TANK_n2)
        return TANK_R[1];
    return 0;
}
