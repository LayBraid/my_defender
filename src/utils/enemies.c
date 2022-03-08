/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

const int WAVES[5] = {1, 5, 10, 16, 24};

int count_enemies(dfd *df)
{
    node_enemy *tmp= df->enemies;
    int count = 0;

    if (df->enemies == NULL)
        return count;
    while (tmp->id < tmp->next->id) {
        count++;
        tmp = tmp->next;
    }
    count++;
    return count;
}

int max_enemies(dfd *df)
{
    return WAVES[df->wave - 1];
}
