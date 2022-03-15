/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "utils.h"

void hit_enemy(dfd *df, node_enemy *enemy, node_earthly_build *earthly)
{
    enemy->enemy->life -= earthly->build->hit;
    add_hit_enemy(df, enemy, simple_id(1, enemy->id));
    add_hit_enemy(df, enemy, simple_id(0, enemy->id));
}
