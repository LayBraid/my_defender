/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_DEFENDER_ROADS_H
    #define MY_DEFENDER_ROADS_H

#include "struct.h"

enum Movements {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    START,
};

int get_max_movement(node_movement **node);

void add_to_list_movement(node_movement **node, int movement);

void setup_first_movement(node_movement **node, int movement);

void add_movement(dfd *df, int type);

int get_delete_last(dfd *df);

int get_action_enemy(dfd *df, node_enemy *enemy);

int exit_finder(int ** map);

int solver(dfd *df, int **map, int id_box);

int *get_positions_box(int id_box);

int **init_my_array(void);

void add_towers(dfd *df, int **array);

void add_enemies(dfd *df, int **array);

int get_next_move_hard(dfd* df, int id);

#endif
