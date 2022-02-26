/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_DEFENDER_ENEMIES_H
    #define MY_DEFENDER_ENEMIES_H

    #include "struct.h"

int get_max_enemy(node_enemy **node);

void add_to_list_enemy(node_enemy **node, enemy_t *enemy);

void setup_first_enemy(node_enemy **node, enemy_t *enemy);

void add_movement_enemy(dfd *df, sfSprite *sprite, sfVector2f vector);

void move_enemy_right(dfd *df, int id_enemy);

void move_enemy_left(dfd *df, int id_enemy);

void move_enemy_up(dfd *df, int id_enemy);

void move_enemy_down(dfd *df, int id_enemy);

void spawn_enemy(dfd *df);

void exe_movement_enemy(dfd *df);

#endif