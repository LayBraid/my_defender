/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

const int WAVES[8] = {3, 5, 10, 16, 24, 30, 40, 50};

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

int count_enemies_life(dfd *df)
{
    node_enemy *tmp= df->enemies;
    int count = 0;

    if (df->enemies == NULL)
        return count;
    while (tmp->id < tmp->next->id) {
        if (tmp->enemy->life > 0)
            count++;
        tmp = tmp->next;
    }
    if (tmp->enemy->life > 0)
        count++;
    return count;
}

int max_enemies(dfd *df)
{
    return WAVES[df->wave - 1];
}
