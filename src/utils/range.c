/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

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
