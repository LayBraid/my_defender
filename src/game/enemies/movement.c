/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "roads.h"

void exe_movement_enemy(dfd *df)
{
    node_movement_clock *move = df->move_clock;

    if (df->move_clock == NULL)
        return;
    df->move_clock = df->move_clock->next;
    sfSprite_setPosition(move->sprite, move->position);
}

void add_deplacement(dfd *df, node_enemy *enemy, int action)
{
    switch (action) {
        case UP:
            move_enemy_up(df, enemy->id);
            break;
        case DOWN:
            move_enemy_down(df, enemy->id);
            break;
        case LEFT:
            move_enemy_left(df, enemy->id);
            break;
        case RIGHT:
            move_enemy_right(df, enemy->id);
            break;
        default:
            break;
    }
}

void move_all_enemies(dfd *df)
{
    node_enemy *tmp = df->enemies;

    if (df->enemies == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        add_deplacement(df, tmp, get_next_move_hard(df, tmp->enemy->id_box));
        tmp = tmp->next;
    }
    add_deplacement(df, tmp, get_next_move_hard(df, tmp->enemy->id_box));
}
