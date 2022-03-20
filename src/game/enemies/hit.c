/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "utils.h"
#include "rounds.h"

void hit_enemy(dfd *df, node_enemy *enemy, node_earthly_build *earthly)
{
    enemy->enemy->life -= earthly->build->hit;
    if (enemy->enemy->life < 0 || enemy->enemy->life == 0) {
        enemy->enemy->life = 0;
        df->emeralds += 3 + (df->wave * 2);
        sfMusic_stop(df->hit);
        sfMusic_play(df->hit);
    }
    add_hit_enemy(df, enemy, simple_id(1, enemy->id));
    add_hit_enemy(df, enemy, simple_id(0, enemy->id));
    df->coins += 3 + (df->wave * 2);
    if (enemy->enemy->life == 0 && count_enemies_life(df) == 0)
        stop_round(df);
}
