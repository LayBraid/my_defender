/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "my.h"
#include "setup.h"
#include "events.h"
#include "steps.h"
#include "data.h"
#include "music.h"

/*
* Fonction principale de notre jeu
*
* On commence par setup la game >> voir explications 'setup_game'
*
* Boucle de la fenêtre
*  - Clear
*  - Appel des events
*  - Appel des fonctions par rapport au step du jeu
*  - Display
*
* Destroy tout à la fin
*/

void update_with_argument(dfd *df, char *path_texture, int fps)
{
    if (my_strcmp(path_texture, "none") != 0) {
        df->step = OPEN;
        df->texture = sfTexture_createFromFile(path_texture, NULL);
        if (my_strcmp(path_texture, "resources/normal.png") == 0)
            df->dlc = 0;
        if (my_strcmp(path_texture, "resources/russia_ukraine.png") == 0)
            df->dlc = 1;
        if (my_strcmp(path_texture, "resources/colorblind.png") == 0)
            df->dlc = 2;
    }
    if (fps != -1) {
        df->fps = fps;
        sfRenderWindow_setFramerateLimit(df->window->window,df->fps);
    }
}

void game_launch(char *path_texture, int fps)
{
    my_defender_t *df = malloc(sizeof(my_defender_t));
    setup_game(df);
    update_with_argument(df, path_texture, fps);
    open_data(df);
    sfColor color = sfColor_fromRGB(60, 63, 78);
    music_player(df);
    while (sfRenderWindow_isOpen(df->window->window)) {
        sfRenderWindow_clear(df->window->window, color);
        global_steps(df);
        poll_events(df, df->window->window);
        sfRenderWindow_display(df->window->window);
    }
    save_data(df);
    sfRenderWindow_destroy(df->window->window);
}
