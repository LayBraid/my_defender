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
    DRAG_1,
    DRAG_2,
    MAINA,
    NEVER,
};

enum All_building {
    TOWER_n1,
    TOWER_n2,
    TOWER_n3,
    TOWER_n4,
    TANK_n1,
    TANK_n2,
    MISSILE_n1,
    MISSILE_n2,
    MISSILE_n3,
    MISSILE_n4,
    PLANE_n1,
    PLANE_n2,
};

enum Earthly_Building {
    TOWER,
    TANK,
    MISSILE,
};

enum Flying_Building {
    PLANE,
};

enum DD_State {
    NOTHING,
    BUILDING,
};

void game_launch(void);

void drag_and_drop(my_defender_t *defender);

void drag_and_drop_launch(dfd *df);

#endif
