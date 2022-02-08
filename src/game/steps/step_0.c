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
    display_buttons(defender);
    display_img(defender);
}
