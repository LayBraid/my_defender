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

void add_movement_enemy(dfd *df, node_enemy *enemy, sfVector2f vector,
const int *info);

void move_enemy_right(dfd *df, int id_enemy);

void move_enemy_left(dfd *df, int id_enemy);

void move_enemy_up(dfd *df, int id_enemy);

void move_enemy_down(dfd *df, int id_enemy);

void spawn_enemy(dfd *df);

void exe_movement_enemy(dfd *df);

void move_all_enemies(dfd *df);

void hit_enemy(dfd *df, node_enemy *enemy, node_earthly_build *earthly);

void add_to_list_clock_ene(node_anim_enemy_t **node);

void setup_first_clock_ene(node_anim_enemy_t **node);

void add_hit_enemy(dfd *df, node_enemy *enemy, const int *info);

void exe_one_hit(node_anim_enemy_t *node);

void exe_one_move(node_anim_enemy_t *node);

#endif
