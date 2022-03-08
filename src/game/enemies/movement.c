/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my.h"
#include "roads.h"

void add_movement_enemy(dfd *df, sfSprite *sprite, sfVector2f vector)
{
    node_movement_clock *new = malloc(sizeof(node_movement_clock));
    node_movement_clock *tmp = df->move_clock;
    new->sprite = sprite;
    new->position = vector;
    new->next = NULL;

    if (df->move_clock == NULL) {
        df->move_clock = new;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}

void exe_movement_enemy(dfd *df)
{
    if (df->move_clock == NULL)
        return;
    node_movement_clock *move = df->move_clock;
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
    node_enemy *tmp= df->enemies;

    if (df->enemies == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        add_deplacement(df, tmp, get_action_enemy(df, tmp));
        tmp = tmp->next;
    }
    add_deplacement(df, tmp, get_action_enemy(df, tmp));
}
