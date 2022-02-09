/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_SETUP_H
    #define MYRUNNER_SETUP_H

    #include "struct.h"

window_t* setup_window(my_defender_t *my_defender);

void setup_game(my_defender_t *my_defender);

void setup_cursor(my_defender_t *my_defender);

node_img *setup_img(void);

classic_img *setup_a_classic_img(char *path, float x, float y);

anim_img *setup_a_anim_img(char *path, const float info[8]);

hovered_button *setup_a_hovered_button(const float info[12],
void (* function)(my_defender_pointer *defender));

node_button *setup_buttons(void);

#endif
