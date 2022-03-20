/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "display.h"
#include "game.h"

void display_enemies(dfd *df)
{
    node_enemy *tmp = df->enemies;

    if (df->enemies == NULL)
        return;
    if (df->step == END || df->step == END_SKIP)
        return;
    while (tmp->id < tmp->next->id) {
        if (tmp->enemy->life > 0)
            sfRenderWindow_drawSprite(df->window->window,
            tmp->enemy->img->sprite, NULL);
        tmp = tmp->next;
    }
    if (tmp->enemy->life > 0)
        sfRenderWindow_drawSprite(df->window->window,
        tmp->enemy->img->sprite, NULL);
}
