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

int switch_cursor(my_defender_t *my_defender, int nb);

void switch_step(my_defender_t *my_defender, int x);

void set_best_score(my_defender_t *my_defender);

void draw_best_score(my_defender_t *my_defender);

void get_best_score(my_defender_t *my_defender, char *buffer);

void quit_game(my_defender_t *defender);

void switch_anim_button(node_button *button, int anim);

void anim_img_id(dfd *df, int id, int anim);

void draw_coins(my_defender_t *my_defender);

void draw_emeralds(dfd *my_defender);

void draw_my_drag(dfd *df);

int display(int step, int actual);

#endif
