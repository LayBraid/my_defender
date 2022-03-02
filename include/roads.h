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

void convert_board(dfd *df);

int exit_finder(int ** map);

int check_road(dfd *df, int **map);

#endif
