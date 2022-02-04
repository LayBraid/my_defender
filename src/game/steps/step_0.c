/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "steps.h"
#include "display.h"

/*
 * Fonction appelée à la step 0 du jeu
 *
 * Elle sert à display seulement ce qu'on a besoin
 * C'est ici qu'on appelle les fonctions des clocks
 */

void exe_step_0(my_defender_t *defender)
{
    sfRenderWindow_drawSprite(defender->window->window,
                              defender->list_img->bg_open->sprite, NULL);
    display_buttons(defender);
}
