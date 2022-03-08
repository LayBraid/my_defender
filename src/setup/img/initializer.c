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
cf LINES[9] = {0, 0, 0, 308, 1080, 1800, 0, MAINA, -1};
cf BORDER[9] = {594, 1000, 0, 2270, 90, 200, 0, MAINA, -1};
cf SHOP[9] = {1466, 44, 880, 10, 138, 260, 0, MAINA, -1};
cf TOWERS[9] = {1424, 211, 0, 2355, 262, 340, 0, MAINA, -1};
cf MISSILES[9] = {1424, 613, 345, 2355, 262, 340, 0, MAINA, -1};
cf TANKS[9] = {1424, 462, 0, 2618, 163, 340, 0, MAINA, -1};
cf PLANES[9] = {1424, 864, 345, 2618, 163, 340, 0, MAINA, -1};
cf EXIT_PLATE[9] = {0, 370, 1246, 0, 144, 61, 0, MAINA, -1};
cf ENTER_PLATE[9] = {1321, 370, 1186, 0, 144, 61, 0, MAINA, -1};
cf COINS[9] = {1220, 894, 1331, 0, 80, 150, 2, MAINA, -1};
cf EMERALDS[9] = {1220, 954, 1331, 80, 80, 150, 2, MAINA, -1};
cf TOWER_D_1[9] = {1441, 253, 1460, 1403, 110, 110, 0, NEVER, -1};
cf TOWER_D_2[9] = {1541, 253, 1460, 1513, 110, 110, 0, NEVER, -1};
cf TOWER_D_3[9] = {1641, 253, 1460, 1623, 110, 110, 0, NEVER, -1};
cf TOWER_D_4[9] = {1441, 353, 1460, 1733, 110, 110, 0, NEVER, -1};
cf TANK_D_1[9] = {1441, 504, 1460, 1843, 110, 110, 0, NEVER, -1};
cf TANK_D_2[9] = {1541, 504, 1570, 1403, 110, 110, 0, NEVER, -1};
cf MISSILE_D_1[9] = {1441, 655, 1570, 1513, 110, 110, 0, NEVER, -1};
cf MISSILE_D_2[9] = {1541, 655, 1570, 1623, 110, 110, 0, NEVER, -1};
cf MISSILE_D_3[9] = {1641, 655, 1570, 1733, 110, 110, 0, NEVER, -1};
cf MISSILE_D_4[9] = {1441, 755, 1570, 1843, 110, 110, 0, NEVER, -1};
cf PLANE_D_1[9] = {1441, 906, 1680, 1403, 110, 110, 0, NEVER, -1};
cf PLANE_D_2[9] = {1541, 906, 1680, 1513, 110, 110, 0, NEVER, -1};

cf DLC[12] = {390, 63, 0, 3603, 157, 1020, 0, SELECT, -1};
cf NAME[12] = {744, 961, 0, 4090, 110, 313, 0, SEL_HEL, -1};

cf HELP_T[12] = {520, 73, 0, 4196, 137, 760, 0, HELP, -1};
cf HELP_SB[12] = {84, 398, 0, 4333, 285, 1632, 0, HELP, -1};

cf NO_BUILD[12] = {510, 931, 220, 2270, 90, 380, 0, MAIN_POP, -1};
cf NO_MONEY[12] = {510, 931, 600, 2270, 90, 380, 0, POP_MONEY, -1};

node_img *next_img(dfd *df, node_img *node)
{
    add_to_list_img(&node, setup_a_anim_img(df, TANK_D_2));
    add_to_list_img(&node, setup_a_anim_img(df, MISSILE_D_1));
    add_to_list_img(&node, setup_a_anim_img(df, MISSILE_D_2));
    add_to_list_img(&node, setup_a_anim_img(df, MISSILE_D_3));
    add_to_list_img(&node, setup_a_anim_img(df, MISSILE_D_4));
    add_to_list_img(&node, setup_a_anim_img(df, PLANE_D_1));
    add_to_list_img(&node, setup_a_anim_img(df, PLANE_D_2));
    add_to_list_img(&node, setup_a_anim_img(df, DLC));
    add_to_list_img(&node, setup_a_anim_img(df, NAME));
    add_to_list_img(&node, setup_a_anim_img(df, HELP_SB));
    add_to_list_img(&node, setup_a_anim_img(df, HELP_T));
    add_to_list_img(&node, setup_a_anim_img(df, NO_BUILD));
    add_to_list_img(&node, setup_a_anim_img(df, NO_MONEY));
    return node;
}

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
    add_to_list_img(&node, setup_a_anim_img(df, TOWER_D_1));
    add_to_list_img(&node, setup_a_anim_img(df, TOWER_D_2));
    add_to_list_img(&node, setup_a_anim_img(df, TOWER_D_3));
    add_to_list_img(&node, setup_a_anim_img(df, TOWER_D_4));
    add_to_list_img(&node, setup_a_anim_img(df, TANK_D_1));
    return next_img(df, node);
}
