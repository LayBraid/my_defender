/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_UTILS_H
    #define MYRUNNER_UTILS_H

    #include "struct.h"

    #include <sys/stat.h>
    #include <sys/fcntl.h>

int switch_cursor(dfd *my_defender, int nb);

void switch_step(dfd *my_defender, int x);

void set_best_score(dfd *my_defender);

void draw_best_score(dfd *my_defender);

void get_best_score(dfd *my_defender, char *buffer);

void quit_game(dfd *defender);

void switch_anim_button(node_button *button, int anim);

void anim_img_id(dfd *df, int id, int anim);

void draw_coins(dfd *my_defender);

void draw_emeralds(dfd *my_defender);

void draw_my_drag(dfd *df);

int display(int step, int actual);

sfVector2f vector_if(sfVector2i vector);

int get_type_building(int id_img);

float get_x_box(dfd *df, int box);

float get_y_box(dfd *df, int box);

float get_r_x_build(int type);

float get_r_y_build(int type);

float get_initial_life(int id_build);

void select_normal_texture(dfd *df);

void select_RU_UK_texture(dfd *df);

#endif
