/*
** EPITECH PROJECT, 2021
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "steps.h"
#include "events.h"
#include "game.h"
#include "utils.h"

/*
 * Première fonction appelée pour appeler seulement les fonctions
 * que l'on a besoin à tel moment du jeu
 */

void global_steps(dfd *df)
{
    display_buttons(df);
    display_img(df);
    check_on_hover(df);
    if (df->step == MAIN)
        exe_step_main(df);
    if (df->drag->state == BUILDING)
        draw_my_drag(df);
}
