/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_DEFENDER_BUILDINGS_H
    #define MY_DEFENDER_BUILDINGS_H

    #include "struct.h"

    #define LIFE_INIT_TOWER_1 15
    #define LIFE_INIT_TOWER_2 25
    #define LIFE_INIT_TOWER_3 40
    #define LIFE_INIT_TOWER_4 60

    #define LIFE_INIT_TANK_1 20
    #define LIFE_INIT_TANK_2 35

    #define LIFE_INIT_MISSILE_1 20
    #define LIFE_INIT_MISSILE_2 35
    #define LIFE_INIT_MISSILE_3 50
    #define LIFE_INIT_MISSILE_4 70

    #define LIFE_INIT_PLANE_1 35
    #define LIFE_INIT_PLANE_2 50

void add_to_list_build(node_earthly_build **node, build_t *build);

void setup_first_build(node_earthly_build **node, build_t *build);

int get_max_build(node_earthly_build **node);

void add_building(dfd *df);

int numbers_earthly(dfd *df);

#endif
