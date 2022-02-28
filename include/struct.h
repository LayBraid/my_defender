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

/*
 * Contenu d'un batiment
 */

typedef struct build_struct {
    anim_img *img;
    int type;
    int id_build;
    int id_box;
    int level;
    float life;
} build_t;

/*
 * Structure de node des batiments terrestres
 */

typedef struct node_earthly_build_struct {
    int id;
    build_t *build;
    struct node_earthly_build_struct *next;
} node_earthly_build;

/*
 * Structure de node des batiments aériens
 */

typedef struct node_flying_build_struct {
    int id;
    build_t *build;
    struct node_earthly_build_struct *next;
} node_flying_build;

/*
 * Structure pour les logs des mouvements
 * Pour l'algo de labyrinthe
 */

typedef struct node_movement_struct {
    int id;
    int type;
    struct node_movement_struct *next;
} node_movement;

/*
 * Structure pour que les mouvements soient executés avec une clock
 */

typedef struct node_movement_clock_struct {
    sfSprite *sprite;
    sfVector2f position;
    struct node_movement_clock_struct *next;
} node_movement_clock;

typedef struct enemy_struct {
    int type;
    anim_img *img;
    int id_box;
    float life;
} enemy_t;

typedef struct node_enemy_struct {
    int id;
    enemy_t *enemy;
    struct node_enemy_struct *next;
} node_enemy;

typedef struct clocks_struct {
    sfClock *clock;
    sfTime time;
    float seconds;
} clocks_t;

typedef struct drag_and_drop_struct {
    int state;
    int id_building;
    float x_correction;
    float y_correction;
} d_d_t;

typedef struct my_defender_data {
    window_t *window;
    cursor_t *cursor;
    node_img *list_img;
    node_button *list_buttons;
    node_earthly_build *earthly_build;
    node_flying_build *flying_build;
    node_movement *movement;
    node_movement_clock *move_clock;
    node_movement_clock *laser_clock;
    node_enemy *enemies;
    build_t *tmp_create;
    int step;
    int coins;
    int emeralds;
    int wave;
    clocks_t *clock_enemy;
    clocks_t *clock_lasers;
    int fps;
    int best_score;
    sfTexture *texture;
    d_d_t *drag;
    int last_unclick;
    sfMusic *click;
} my_defender_t;

typedef my_defender_t dfd;

#endif
