/*
** EPITECH PROJECT, 2022
** df
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"
#include "game.h"
#include "roads.h"

/*
* Fonction appelée pour setup là game au début du programme
*
* Setup de la window
* Setup des images
* Setup des boutons
* Définition du step au démarrage du jeu
*/

//TODO Changer le son de hit par défaut

void update_pause_bg(dfd *df)
{
    node_img *tmp = df->list_img;
    sfVector2f vector = {30, 30};

    while (tmp->id != 26)
        tmp = tmp->next;
    sfSprite_setScale(tmp->img->sprite, vector);
}

void other_setup(dfd *df)
{
    df->spawning = FALSE;
    df->enemies_clocks = NULL;
    df->hit = sfMusic_createFromFile("resources/click.ogg");
    df->spawn_round = 0;
    init_shop(df);
    update_pause_bg(df);
}

void next_setup(dfd *df)
{
    df->list_buttons = setup_buttons(df);
    df->step = SELECT;
    df->enemies = NULL;
    df->move_clock = NULL;
    df->laser_clock = NULL;
    df->coins = 20;
    df->emeralds = 20;
    df->wave = 0;
    df->placing = FALSE;
    df->fps = 130;
    df->list_img = setup_img(df);
    df->click = sfMusic_createFromFile("resources/click.ogg");
    df->drag = malloc(sizeof(d_d_t));
    df->drag->id_building = -1;
    df->drag->state = NOTHING;
    df->drag->x_correction = 0;
    df->drag->y_correction = 0;
    df->last_unclick = -1;
    df->wave_status = STOP;
    other_setup(df);
}

void setup_game(dfd *df)
{
    df->clock_enemy = malloc(sizeof(clocks_t));
    df->clock_enemy->clock = sfClock_create();
    df->clock_lasers = malloc(sizeof(clocks_t));
    df->clock_lasers->clock = sfClock_create();
    df->clock_popup = malloc(sizeof(clocks_t));
    df->clock_popup->clock = sfClock_create();
    df->enemies_move = malloc(sizeof(clocks_t));
    df->enemies_move->clock = sfClock_create();
    df->enem_spawn = malloc(sizeof(clocks_t));
    df->enem_spawn->clock = sfClock_create();
    df->tmp_create = malloc(sizeof(build_t));
    df->window = setup_window(df);
    df->list_img = malloc(sizeof(node_img));
    df->list_buttons = malloc(sizeof(node_button));
    df->earthly_build = NULL;
    df->flying_build = NULL;
    df->movement = malloc(sizeof(node_movement));
    setup_first_movement(&df->movement, START);
    df->texture = sfTexture_createFromFile("resources/normal.png", NULL);
    next_setup(df);
}
