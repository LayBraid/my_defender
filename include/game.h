/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_GAME_H
    #define MYRUNNER_GAME_H

    #include "struct.h"

    #define WINDOW_NAME "MyDefender | Simple Tower Defense game"
    #define WIDTH 1800
    #define HEIGHT 1080
    #define PATH_CURSOR "resources/cursor.png"
    #define FPS_MAX 130
    #define CUSTOM_CURSOR 0

enum Steps {
    OPEN,
    MAIN,
    HELP,
    SETTINGS,
    DRAG,
    MAIN_DRAG,
    NEVER,
};

enum Building {
    TOWER,
    TANK,
    MISSILE,
    PLANE
};

enum DD_State {
    NOTHING,
    BUILDING,
};

void game_launch(void);

void display_buttons(my_defender_t *defender);

void display_img(my_defender_t *defender);

void drag_and_drop(my_defender_t *defender);

#endif
