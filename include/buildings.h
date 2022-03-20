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
    #define PRICE_INIT_TOWER_1 5

    #define LIFE_INIT_TOWER_2 25
    #define PRICE_INIT_TOWER_2 10

    #define LIFE_INIT_TOWER_3 40
    #define PRICE_INIT_TOWER_3 15

    #define LIFE_INIT_TOWER_4 60
    #define PRICE_INIT_TOWER_4 20

    #define LIFE_INIT_TANK_1 20
    #define PRICE_INIT_TANK_1 10

    #define LIFE_INIT_TANK_2 35
    #define PRICE_INIT_TANK_2 20

    #define LIFE_INIT_MISSILE_1 20
    #define PRICE_INIT_MISSILE_1 15

    #define LIFE_INIT_MISSILE_2 35
    #define PRICE_INIT_MISSILE_2 20

    #define LIFE_INIT_MISSILE_3 50
    #define PRICE_INIT_MISSILE_3 25

    #define LIFE_INIT_MISSILE_4 70
    #define PRICE_INIT_MISSILE_4 30

    #define LIFE_INIT_PLANE_1 35
    #define PRICE_INIT_PLANE_1 20

    #define LIFE_INIT_PLANE_2 50
    #define PRICE_INIT_PLANE_2 30

void add_to_list_build(node_earthly_build **node, build_t *build);

void setup_first_build(node_earthly_build **node, build_t *build);

int get_max_build(node_earthly_build **node);

void add_building(dfd *df);

int numbers_earthly(dfd *df);

void launch_towers(dfd *df, int type);

void add_building_no_money(dfd *df);

#endif
