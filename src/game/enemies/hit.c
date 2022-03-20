/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "utils.h"
#include "rounds.h"
#include "game.h"
#include "my.h"

void hit_enemy(dfd *df, node_enemy *enemy, node_earthly_build *earthly)
{
    int rand = my_rand(0, 7);
    enemy->enemy->life -= earthly->build->hit;
    if (enemy->enemy->life < 0 || enemy->enemy->life == 0) {
        enemy->enemy->life = 0;
        df->emeralds += 1 + (df->wave);
        sfMusic_stop(df->hit);
        sfMusic_play(df->hit);
    }
    add_hit_enemy(df, enemy, simple_id(1, enemy->id));
    add_hit_enemy(df, enemy, simple_id(0, enemy->id));
    if (rand > 5)
        df->coins += 1;
    if (enemy->enemy->life == 0 && count_enemies_life(df) == 0
        && df->spawn_round == max_enemies(df)) {
        stop_round(df);
        if (df->wave == 7)
            switch_step(df, END);
    }
}
