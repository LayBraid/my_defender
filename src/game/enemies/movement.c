/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my.h"

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
    df->test++;
}

void exe_movement_enemy(dfd *df)
{
    if (df->move_clock == NULL)
        return;
    node_movement_clock *move = df->move_clock;
    df->move_clock = df->move_clock->next;
    sfSprite_setPosition(move->sprite, move->position);
}
