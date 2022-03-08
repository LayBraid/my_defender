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
#include "display.h"
#include "clocks.h"

/*
* Première fonction appelée pour appeler seulement les fonctions
* que l'on a besoin à tel moment du jeu
*/

void global_steps(dfd *df)
{
    display_buttons(df);
    display_img(df);
    display_buildings(df);
    display_enemies(df);
    check_on_hover(df);
    clock_movement_enemies(df);
    clock_lasers_animation(df);
    clock_spawn_enemies(df);
    clock_enemies_move(df);
    if (df->step == POP || df->step == POP_MONEY)
        clock_pop_up(df);
    if (display(MAINA, df->step))
        exe_step_main(df);
    if (df->drag->state == BUILDING)
        draw_my_drag(df);
}
