/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_EVENT_H
    #define MYRUNNER_EVENT_H

    #include "struct.h"

void poll_events(dfd *df, sfRenderWindow *window);

void close_event(window_t* window, sfEvent event);

void buttons_event(dfd *df, sfVector2f vector);

void mouse_pressed_event(dfd *df, sfEvent event);

void check_on_hover(dfd *df);

void check_on_click(dfd *df);

void check_on_un_click(dfd *df);

void mouse_unpressed_event(dfd *df, sfEvent event);

void my_key_cheat_code(dfd *df);

#endif
