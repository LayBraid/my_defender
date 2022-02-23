/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "buildings.h"
#include "setup.h"
#include "utils.h"
#include "game.h"

/*
 * Informations de l'image:
 * 0: Position de l'image en X une fois display
 * 1: Position de l'image en Y une fois display
 * 2: Position du rect de l'image en position X
 * 3: Position du rect de l'image en position Y
 * 4: Height du rect
 * 5: Width du rect
 * 6: Position max de l'animations (Mettre à -1 pour annuler l'animations)
 * 7: step pour display
 */

void add_building(dfd *df)
{
    cf info[8] = {get_x_box(df, df->tmp_create->id_box),
    get_y_box(df, df->tmp_create->id_box),
    get_r_x_build(df->tmp_create->id_build),0,80,80,0,MAINA};
    anim_img *img = setup_a_anim_img(df, info);

}
