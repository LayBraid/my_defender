/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_SETUP_H
    #define MYRUNNER_SETUP_H

    #include "game.h"
    #include "struct.h"
    #include "utils.h"

window_t* setup_window(my_defender_t *my_defender);

void setup_game(my_defender_t *my_defender);

void setup_cursor(my_defender_t *my_defender);

void setup_all_img(list_img_t *list);

classic_img *setup_a_classic_img(char *path, float x, float y);

anim_img *setup_a_anim_img(char *path, const float info[7]);

hovered_button *setup_a_hovered_button(char *path, float info[9]);

void setup_buttons(list_buttons_t *list);

#endif
