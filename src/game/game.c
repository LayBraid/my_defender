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
    }
    if (fps != -1) {
        df->fps = fps;
        sfRenderWindow_setFramerateLimit(df->window->window,df->fps);
    }
}

void game_launch(char *path_texture, int fps)
{
    my_defender_t *my_defender = malloc(sizeof(my_defender_t));
    setup_game(my_defender);
    update_with_argument(my_defender, path_texture, fps);
    sfColor color = sfColor_fromRGB(60, 63, 78);
    //music_player();
    while (sfRenderWindow_isOpen(my_defender->window->window)) {
        sfRenderWindow_clear(my_defender->window->window, color);
        global_steps(my_defender);
        poll_events(my_defender, my_defender->window->window);
        sfRenderWindow_display(my_defender->window->window);
    }
    sfRenderWindow_destroy(my_defender->window->window);
}

//TODO rajouter un free global de toutes les variables
