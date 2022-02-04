/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#ifndef MYRUNNER_STRUCT_H
    #define MYRUNNER_STRUCT_H

    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>

typedef struct my_defender_t my_defender_pointer;

typedef struct sprite_cursor {
    sfSprite* sprite;
    sfTexture* texture;
    char **display;
} cursor_t;

typedef struct classic_img_struct {
    sfSprite* sprite;
    sfTexture* texture;
} classic_img;

typedef struct anim_img_struct {
    sfSprite *sprite;
    sfTexture *texture;
    int anim_max;
    int anim_pos;
    int x_power_anim;
    int y_power_anim;
} anim_img;

typedef struct hovered_button_struct {
    anim_img *button;
    float x_click;
    float y_click;
    int step_display;
    void (* function)(my_defender_pointer *defender);
} hovered_button;

typedef struct window_struct {
    sfRenderWindow* window;
    sfEvent event;
    classic_img *bg;
} window_t;

typedef struct list_img {
    classic_img *bg_open;
    anim_img *play_button;
} list_img_t;

typedef struct node_button_struct {
    int id;
    hovered_button *button;
    struct node_button_struct *prev;
    struct node_button_struct *next;
} node_button;

typedef struct clocks_struct {
    sfClock *clock;
    sfTime time;
    float seconds;
} clocks_t;

typedef struct my_defender_data {
    window_t *window;
    cursor_t *cursor;
    list_img_t *list_img;
    node_button *list_buttons;
    int step;
    int score;
    clocks_t *clocks;
    int fps;
    int best_score;
} my_defender_t;

#endif
