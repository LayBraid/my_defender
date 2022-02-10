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

/*
 * Deuxieme typedef de la struct globale pour l'utiliser
 * dans les pointeurs de fonction (à cause de l'ordre de déclaration)
 */

typedef struct my_defender_t my_defender_pointer;

typedef struct sprite_cursor {
    sfSprite* sprite;
    sfTexture* texture;
    char **display;
} cursor_t;

typedef struct anim_img_struct {
    sfSprite *sprite;
    sfTexture *texture;
    int anim_max;
    int anim_pos;
    int x_power_anim;
    int y_power_anim;
    int init_rect_x;
    int init_rect_y;
    int step_display;
} anim_img;

typedef struct hovered_button_struct {
    anim_img *button;
    float x_click;
    float y_click;
    float x_max;
    float y_max;
    int step_display;
    void (* function)(my_defender_pointer *defender);
} hovered_button;

typedef struct window_struct {
    sfRenderWindow* window;
} window_t;

typedef struct node_button_struct {
    int id;
    hovered_button *button;
    struct node_button_struct *next;
} node_button;

typedef struct node_img_struct {
    int id;
    anim_img *img;
    struct node_img_struct *next;
} node_img;

typedef struct clocks_struct {
    sfClock *clock;
    sfTime time;
    float seconds;
} clocks_t;

typedef struct my_defender_data {
    window_t *window;
    cursor_t *cursor;
    node_img *list_img;
    node_button *list_buttons;
    int step;
    int coins;
    int emeralds;
    clocks_t *clocks;
    int fps;
    int best_score;
    sfTexture *texture;
} my_defender_t;

#endif
