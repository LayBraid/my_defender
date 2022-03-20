/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "roads.h"

void rotate_enemy(node_enemy *enemy, int move)
{
    sfIntRect rect = sfSprite_getTextureRect(enemy->enemy->img->sprite);
    switch (move) {
        case RIGHT:
            rect.left = 1363;
            break;
        case DOWN:
            rect.left = 1473;
            break;
        case LEFT:
            rect.left = 1583;
            break;
        case UP:
            rect.left = 1693;
            break;
        default:
            break;
    }
    sfSprite_setTextureRect(enemy->enemy->img->sprite, rect);
}
