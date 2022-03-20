/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#ifndef MY_DEFENDER_DATA_H
    #define MY_DEFENDER_DATA_H

    #include "struct.h"

char *save_game(dfd *df);

void save_data(dfd *df);

char *add_shop(dfd *df);

char *add_buildings(dfd *df);

void open_data(dfd *df);

void get_info_data(dfd *df, const char *data);

void decrypt_shop(dfd *df, const char *data);

void add_tower_1(dfd *df);

void add_tower_2(dfd *df);

void add_tower_3(dfd *df);

void add_tower_4(dfd *df);

void add_tank_1(dfd *df);

void add_tank_2(dfd *df);

void add_missile_1(dfd *df);

void add_missile_2(dfd *df);

void add_missile_3(dfd *df);

void add_missile_4(dfd *df);

void add_plane_1(dfd *df);

void add_plane_2(dfd *df);

void decrypt_buildings(dfd *df, char *data);

#endif
