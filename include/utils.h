/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_UTILS_H
    #define MYRUNNER_UTILS_H

    #include "struct.h"

int switch_cursor(dfd *my_defender, int nb);

void switch_step(dfd *my_defender, int x);

void quit_game(dfd *defender);

void switch_anim_button(node_button *button, int anim);

void anim_img_id(dfd *df, int id, int anim);

void draw_coins(dfd *my_defender);

void draw_emeralds(dfd *my_defender);

void draw_my_drag(dfd *df);

int display(dfd *df, int step, int actual);

sfVector2f vector_if(sfVector2i vector);

int get_type_building(int id_img);

float get_x_box(dfd *df, int box);

float get_y_box(dfd *df, int box);

float get_r_x_build(int type);

float get_r_y_build(int type);

float get_initial_life(int id_build);

void select_normal_texture(dfd *df);

void select_RU_UK_texture(dfd *df);

int get_initial_price(int id_build);

int count_enemies(dfd *df);

int max_enemies(dfd *df);

int in_range(int tower, int enemy, int range);

float get_hits(int type, int level);

int get_range(int type);

int *simple_id(int type, int id);

int count_enemies_life(dfd *df);

void draw_fps(dfd *df);

void display_pause(dfd *df);

char *get_in_buffer(char *path);

char *extract_between_limits(char const *exp, int s1, int s2);

int get_it_char(const char *str, char c, int index);

void move_title(dfd *df);

void draw_round(dfd *df);

void draw_keys(dfd *df);

#endif
