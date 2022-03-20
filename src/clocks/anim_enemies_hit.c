/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "clocks.h"
#include "enemies.h"
#include "game.h"

void exe_clock(node_anim_enemy_t *node)
{
    sfTime time = sfClock_getElapsedTime(node->clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.08) {
        exe_one_hit(node);
        sfClock_restart(node->clock);
    }
}

void exe_clock_move(node_anim_enemy_t *node)
{
    sfTime time = sfClock_getElapsedTime(node->clock_move);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.05) {
        exe_one_move(node);
        sfClock_restart(node->clock_move);
    }
}

void clock_enemy_anim(dfd *df)
{
    node_anim_enemy_t *tmp = df->enemies_clocks;

    if (tmp == NULL)
        return;
    if (df->step == PAUSE_GAME || df->step == OPEN || df->step == SETTINGS
        || df->step == HELP)
        return;
    while (tmp->id < tmp->next->id) {
        exe_clock(tmp);
        exe_clock_move(tmp);
        tmp = tmp->next;
    }
    exe_clock(tmp);
    exe_clock_move(tmp);
}
