/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

/*
 * Fonction qui switch le rect du cursor si la personnalisation est activée
 * Il faut penser à appeler cette fonction lors du switch step avec le bon
 * int du left
 */

int switch_cursor(my_defender_t *my_defender, int nb)
{
    sfIntRect rect = sfSprite_getTextureRect(my_defender->cursor->sprite);

    rect.left = nb;
    rect.height = 0;
    rect.width = 64;
    rect.height = 64;
    sfSprite_setTextureRect(my_defender->cursor->sprite, rect);
    return 0;
}
