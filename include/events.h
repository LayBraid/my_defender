/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_EVENT_H
    #define MYRUNNER_EVENT_H

    #include "game.h"
    #include "utils.h"

int poll_events(my_defender_t *my_defender);

int close_event(window_t* window);

void buttons_event(my_defender_t *my_defender, sfVector2f vector);

void mouse_pressed_event(my_defender_t *my_defender);

#endif
