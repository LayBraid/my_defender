/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "buildings.h"
#include "utils.h"
#include "enemies.h"

void checking_range(dfd *df, int id_build, node_earthly_build *earthly)
{
    node_enemy *tmp = df->enemies;

    while (tmp->id < tmp->next->id) {
        if (in_range(id_build, tmp->enemy->id_box, earthly->build->range)
            && tmp->enemy->life > 0) {
            hit_enemy(df, tmp, earthly);
            return;
        }
        tmp = tmp->next;
    }
    if (in_range(id_build, tmp->enemy->id_box, earthly->build->range)
        && tmp->enemy->life > 0) {
        hit_enemy(df, tmp, earthly);
        return;
    }
}

void launch_towers(dfd *df, int type)
{
    node_earthly_build *tmp = df->earthly_build;

    while (tmp->id < tmp->next->id) {
        if (tmp->build->type == type)
            checking_range(df, tmp->build->id_box, tmp);
        tmp = tmp->next;
    }
    if (tmp->build->type == type)
        checking_range(df, tmp->build->id_box, tmp);//TODO replace 1 by the range
}
