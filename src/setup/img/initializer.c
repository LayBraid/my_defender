/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "setup.h"
#include "my.h"

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
 * 8: Clock pour display
 */

//TODO Faire le système de clocks

cf TITLE[9] = {473, 386, 0, 0, 308, 854, 0, OPEN, -1};
cf LINES[9] = {0, 0, 0, 308, 1080, 1800, 0, MAIN, -1};
cf BORDER[9] = {594, 1000, 0, 2270, 90, 200, 0, MAIN, -1};
cf SHOP[9] = {1466, 44, 880, 10, 138, 260, 0, MAIN, -1};
cf TOWERS[9] = {1424, 211, 0, 2355, 262, 340, 0, MAIN, -1};
cf MISSILES[9] = {1424, 613, 345, 2355, 262, 340, 0, MAIN, -1};
cf TANKS[9] = {1424, 462, 0, 2618, 163, 340, 0, MAIN, -1};
cf PLANES[9] = {1424, 864, 345, 2618, 163, 340, 0, MAIN, -1};
cf EXIT_PLATE[9] = {0, 370, 1246, 0, 144, 61, 0, MAIN, -1};
cf ENTER_PLATE[9] = {1321, 370, 1186, 0, 144, 61, 0, MAIN, -1};
cf COINS[9] = {1220, 894, 1331, 0, 80, 150, 2, MAIN, -1};
cf EMERALDS[9] = {1220, 954, 1331, 80, 80, 150, 2, MAIN, -1};

node_img *setup_img(dfd *df)
{
    node_img *node = malloc(sizeof(node_img));

    setup_first_img(&node, setup_a_anim_img(df, TITLE));
    add_to_list_img(&node, setup_a_anim_img(df, LINES));
    add_to_list_img(&node, setup_a_anim_img(df, BORDER));
    add_to_list_img(&node, setup_a_anim_img(df, SHOP));
    add_to_list_img(&node, setup_a_anim_img(df, TOWERS));
    add_to_list_img(&node, setup_a_anim_img(df, MISSILES));
    add_to_list_img(&node, setup_a_anim_img(df, TANKS));
    add_to_list_img(&node, setup_a_anim_img(df, PLANES));
    add_to_list_img(&node, setup_a_anim_img(df, EXIT_PLATE));
    add_to_list_img(&node, setup_a_anim_img(df, ENTER_PLATE));
    add_to_list_img(&node, setup_a_anim_img(df, COINS));
    add_to_list_img(&node, setup_a_anim_img(df, EMERALDS));
    return node;
}
