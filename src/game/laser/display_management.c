/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "lasers.h"
#include "my.h"

void add_anim_laser(dfd *df, sfSprite *sprite, sfVector2f vector)
{
    node_movement_clock *new = malloc(sizeof(node_movement_clock));
    node_movement_clock *tmp = df->laser_clock;
    new->sprite = sprite;
    new->position = vector;
    new->next = NULL;

    if (df->laser_clock == NULL) {
        df->laser_clock = new;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}

void exe_laser_anim(dfd *df)
{
    if (df->laser_clock == NULL)
        return;
    node_movement_clock *move = df->laser_clock;
    df->laser_clock = df->laser_clock->next;
    sfSprite_setPosition(move->sprite, move->position);
}
