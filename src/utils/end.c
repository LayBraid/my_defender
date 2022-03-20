/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "game.h"

void move_title(dfd *df)
{
    node_img *tmp = df->list_img;
    sfVector2f vector;

    while (tmp->id != 36)
        tmp = tmp->next;
    vector = sfSprite_getPosition(tmp->img->sprite);
    if (vector.y < 478) {
        vector.y += 2;
        sfSprite_setPosition(tmp->img->sprite, vector);
    } else
        switch_step(df, END_SKIP);
}
