/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "struct.h"
#include "my.h"
#include "game.h"
#include "utils.h"

/*
* Setup automatique du curseur si on active l'option dans le fichier 'game.h'
*/

void setup_cursor(my_defender_t *my_defender)
{
    my_defender->cursor = malloc(sizeof(cursor_t));
    my_defender->cursor->sprite = sfSprite_create();
    my_defender->cursor->texture = sfTexture_createFromFile(PATH_CURSOR,
    NULL);
    sfSprite_setTexture(my_defender->cursor->sprite,
    my_defender->cursor->texture, sfFalse);
    switch_cursor(my_defender, 0);
}
