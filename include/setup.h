/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_SETUP_H
    #define MYRUNNER_SETUP_H

    #include "struct.h"

typedef my_defender_t dfd;

typedef const float cf;

window_t* setup_window(my_defender_t *my_defender);

void setup_game(my_defender_t *my_defender);

void setup_cursor(my_defender_t *my_defender);

void add_button(node_button **node, hovered_button *button);

void setup_first_button(node_button **node, hovered_button *button);

node_img *setup_img(dfd *defender);

anim_img *setup_a_anim_img(my_defender_t *defender, const float info[8]);

hovered_button *setup_button(dfd *df, const float info[12],
void (* function)(my_defender_pointer *defender));

node_button *setup_buttons(dfd *defender);

#endif
