/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "game.h"
#include "my.h"
#include "setup.h"
#include "utils.h"

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
    while (vector.x + 95 >= vector_2.x) {
        vector_2.x += 2;
        add_movement_enemy(df, tmp, vector_2,
        simple_id(0, tmp->id));
    }
}

void move_enemy_left(dfd *df, int id_enemy)
{
    node_enemy *tmp = df->enemies;
    node_button *button = df->list_buttons;
    sfVector2f vector;
    sfVector2f vector_2;

    if (tmp->enemy->id_box == 147)
        return;
    while (tmp->id != id_enemy)
        tmp = tmp->next;
    while (button->id != tmp->enemy->id_box)
        button = button->next;
    vector = sfSprite_getPosition(button->button->button->sprite);
    vector_2 = vector;
    tmp->enemy->id_box--;
    while (vector.x - 95 <= vector_2.x) {
        vector_2.x -= 2;
        add_movement_enemy(df, tmp, vector_2,
        simple_id(0, tmp->id));
    }
}

void move_enemy_up(dfd *df, int id_enemy)
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
    tmp->enemy->id_box -= 14;
    while (vector.y - 95 <= vector_2.y) {
        vector_2.y -= 2;
        add_movement_enemy(df, tmp, vector_2,
        simple_id(0, tmp->id));
    }
}

void move_enemy_down(dfd *df, int id_enemy)
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
    tmp->enemy->id_box += 14;
    while (vector.y + 95 >= vector_2.y) {
        vector_2.y += 2;
        add_movement_enemy(df, tmp, vector_2,
        simple_id(0, tmp->id));
    }
}

void spawn_enemy(dfd *df)
{
    enemy_t *tmp= malloc(sizeof(enemy_t));
    cf info[8] = {-83, 387, 1363, 2001, 110, 110, 0, MAINA};
    tmp->img = setup_a_anim_img(df, info);
    tmp->type = SIMPLE;
    tmp->life = 20;
    tmp->id_box = 147;
    if (df->enemies == NULL) {
        setup_first_clock_ene(&df->enemies_clocks);
        setup_first_enemy(&df->enemies, tmp);
    } else {
        add_to_list_clock_ene(&df->enemies_clocks);
        add_to_list_enemy(&df->enemies, tmp);
    }
}
