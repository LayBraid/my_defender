/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <printf.h>
#include "enemies.h"
#include "game.h"
#include "my.h"
#include "setup.h"

/*
 * Informations de l'image:
 * 0: Position de l'image en X une fois display
 * 1: Position de l'image en Y une fois display
 * 2: Position du rect de l'image en position X
 * 3: Position du rect de l'image en position Y
 * 4: Height du rect
 * 5: Width du rect
 * 6: Position max de l'animations (Mettre à -1 pour annuler l'animations)
 * 7: step pour display
 */

void move_enemy_right(dfd *df, int id_enemy)
{
    node_enemy *tmp = df->enemies;
    node_button *button = df->list_buttons;
    sfVector2f vector;
    sfVector2f vector_2;

    while (tmp->id != id_enemy)
        tmp = tmp->next;
    while (button->id != tmp->enemy->id_box)
        button = button->next;
    vector = sfSprite_getPosition(button->button->button->sprite);
    vector_2 = vector;
    if (tmp->enemy->id_box == 147)
        tmp->enemy->id_box = 77;
    else
        tmp->enemy->id_box++;
    while (vector.x + 96 >= vector_2.x) {
        vector_2.x += 2;
        add_movement_enemy(df, tmp->enemy->img->sprite, vector_2);
    }
}

void spawn_enemy(dfd *df)
{
    enemy_t *tmp= malloc(sizeof(enemy_t));
    cf info[8] = {-83, 387, 0, 3478, 110, 110, 0, MAINA};
    tmp->img = setup_a_anim_img(df, info);
    tmp->type = SIMPLE;
    tmp->life = 20;
    tmp->id_box = 147;
    if (df->enemies == NULL)
        setup_first_enemy(&df->enemies, tmp);
    else
        add_to_list_enemy(&df->enemies, tmp);
}
