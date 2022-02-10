/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "steps.h"
#include "events.h"

/*
 * Première fonction appelée pour appeler seulement les fonctions
 * que l'on a besoin à tel moment du jeu
 */

void global_steps(my_defender_t *my_defender)
{
    display_img(my_defender);
    display_buttons(my_defender);
    check_on_hover(my_defender);
    if (my_defender->step == MAIN)
        exe_step_main(my_defender);
}
