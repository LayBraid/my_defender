/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

void hit_enemy(dfd *df, node_enemy *enemy, node_earthly_build *earthly)
{
    enemy->enemy->life -= earthly->build->hit;
}
