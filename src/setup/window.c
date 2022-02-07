/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "game.h"
#include "my.h"

/*
 * Setup de notre window
 *
 * Les valeurs de Width et Height sont récupérées dans le fichier 'game.h'
 *
 * Window_name vient aussi du fichier 'game.h'
 * Setup des FPS max. Récupéré aussi du fichier 'game.h'
 *
 * Initialisation ou non du curseur selon l'option Custom_cursor dans 'game.h'
 */

window_t* setup_window(my_defender_t *my_defender)
{
    sfVideoMode mode = {WIDTH, HEIGHT, 32};
    window_t* window = malloc(sizeof(window_t));

    window->window = sfRenderWindow_create(mode, WINDOW_NAME,
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window->window, FPS_MAX);
    if (CUSTOM_CURSOR == 1) {
        sfRenderWindow_setMouseCursorVisible(window->window, sfFalse);
        setup_cursor(my_defender);
    }
    if (!window->window)
        return NULL;
    return window;
}
