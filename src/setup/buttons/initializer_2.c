/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "game.h"
#include "actions.h"

/*
* Informations d'un bouton:
* 0: Position de l'image en X une fois display
* 1: Position de l'image en Y une fois display
* 2: Position du rect de l'image en position X
* 3: Position du rect de l'image en position Y
* 4: Height du rect
* 5: Width du rect
* 6: Position max de l'animations
* 7: Position X de la zone cliquable du bouton
* 8: Position Y de la zone cliquable du bouton
* 9: Taille max en X pour la zone cliquable
* 10: Taille max en Y pour la zone cliquable
* 11: Step où il va être display
*/

// Box de 21 à 146

cf P_3_6[12] = {205, 483, 0, 2805, 110, 110, 2, 220, 488, 80, 80, DRAG_1};
cf P_4_6[12] = {301, 483, 0, 2805, 110, 110, 2, 316, 488, 80, 80, DRAG_1};
cf P_5_6[12] = {397, 483, 0, 2805, 110, 110, 2, 412, 488, 80, 80, DRAG_1};
cf P_6_6[12] = {493, 483, 0, 2805, 110, 110, 2, 508, 488, 80, 80, ROADS};
cf P_7_6[12] = {589, 483, 0, 2805, 110, 110, 2, 604, 488, 80, 80, DRAG_1};
cf P_8_6[12] = {685, 483, 0, 2805, 110, 110, 2, 700, 488, 80, 80, DRAG_1};
cf P_9_6[12] = {781, 483, 0, 2805, 110, 110, 2, 796, 488, 80, 80, DRAG_1};
cf P_10_6[12] = {877, 483, 0, 2805, 110, 110, 2, 892, 488, 80, 80, ROADS};
cf P_11_6[12] = {973, 483, 0, 2805, 110, 110, 2, 988, 488, 80, 80, DRAG_1};
cf P_12_6[12] = {1069, 483, 0, 2805, 110, 110, 2, 1084, 488, 80, 80, DRAG_1};
cf P_13_6[12] = {1165, 483, 0, 2805, 110, 110, 2, 1180, 488, 80, 80, DRAG_1};
cf P_14_6[12] = {1261, 483, 0, 2805, 110, 110, 2, 1276, 488, 80, 80, DRAG_1};

cf P_1_7[12] = {13, 579, 0, 2805, 110, 110, 2, 28, 584, 80, 80, DRAG_1};
cf P_2_7[12] = {109, 579, 0, 2805, 110, 110, 2, 124, 584, 80, 80, DRAG_1};
cf P_3_7[12] = {205, 579, 0, 2805, 110, 110, 2, 220, 584, 80, 80, DRAG_1};
cf P_4_7[12] = {301, 579, 0, 2805, 110, 110, 2, 316, 584, 80, 80, DRAG_1};
cf P_5_7[12] = {397, 579, 0, 2805, 110, 110, 2, 412, 584, 80, 80, DRAG_1};
cf P_6_7[12] = {493, 579, 0, 2805, 110, 110, 2, 508, 584, 80, 80, ROADS};
cf P_7_7[12] = {589, 579, 0, 2805, 110, 110, 2, 604, 584, 80, 80, ROADS};
cf P_8_7[12] = {685, 579, 0, 2805, 110, 110, 2, 700, 584, 80, 80, ROADS};
cf P_9_7[12] = {781, 579, 0, 2805, 110, 110, 2, 796, 584, 80, 80, ROADS};
cf P_10_7[12] = {877, 579, 0, 2805, 110, 110, 2, 892, 584, 80, 80, ROADS};
cf P_11_7[12] = {973, 579, 0, 2805, 110, 110, 2, 988, 584, 80, 80, DRAG_1};
cf P_12_7[12] = {1069, 579, 0, 2805, 110, 110, 2, 1084, 584, 80, 80, DRAG_1};
cf P_13_7[12] = {1165, 579, 0, 2805, 110, 110, 2, 1180, 584, 80, 80, DRAG_1};
cf P_14_7[12] = {1261, 579, 0, 2805, 110, 110, 2, 1276, 584, 80, 80, DRAG_1};

cf P_1_8[12] = {13, 675, 0, 2805, 110, 110, 2, 28, 680, 80, 80, DRAG_1};
cf P_2_8[12] = {109, 675, 0, 2805, 110, 110, 2, 124, 680, 80, 80, DRAG_1};
cf P_3_8[12] = {205, 675, 0, 2805, 110, 110, 2, 220, 680, 80, 80, DRAG_1};
cf P_4_8[12] = {301, 675, 0, 2805, 110, 110, 2, 316, 680, 80, 80, DRAG_1};
cf P_5_8[12] = {397, 675, 0, 2805, 110, 110, 2, 412, 680, 80, 80, DRAG_1};
cf P_6_8[12] = {493, 675, 0, 2805, 110, 110, 2, 508, 680, 80, 80, DRAG_1};
cf P_7_8[12] = {589, 675, 0, 2805, 110, 110, 2, 604, 680, 80, 80, DRAG_1};
cf P_8_8[12] = {685, 675, 0, 2805, 110, 110, 2, 700, 680, 80, 80, DRAG_1};
cf P_9_8[12] = {781, 675, 0, 2805, 110, 110, 2, 796, 680, 80, 80, DRAG_1};
cf P_10_8[12] = {877, 675, 0, 2805, 110, 110, 2, 892, 680, 80, 80, DRAG_1};
cf P_11_8[12] = {973, 675, 0, 2805, 110, 110, 2, 988, 680, 80, 80, DRAG_1};
cf P_12_8[12] = {1069, 675, 0, 2805, 110, 110, 2, 1084, 680, 80, 80, DRAG_1};
cf P_13_8[12] = {1165, 675, 0, 2805, 110, 110, 2, 1180, 680, 80, 80, DRAG_1};
cf P_14_8[12] = {1261, 675, 0, 2805, 110, 110, 2, 1276, 680, 80, 80, DRAG_1};

cf P_1_9[12] = {13, 771, 0, 2805, 110, 110, 2, 28, 776, 80, 80, DRAG_1};
cf P_2_9[12] = {109, 771, 0, 2805, 110, 110, 2, 124, 776, 80, 80, DRAG_1};
cf P_3_9[12] = {205, 771, 0, 2805, 110, 110, 2, 220, 776, 80, 80, DRAG_1};
cf P_4_9[12] = {301, 771, 0, 2805, 110, 110, 2, 316, 776, 80, 80, DRAG_1};
cf P_5_9[12] = {397, 771, 0, 2805, 110, 110, 2, 412, 776, 80, 80, DRAG_1};
cf P_6_9[12] = {493, 771, 0, 2805, 110, 110, 2, 508, 776, 80, 80, DRAG_1};
cf P_7_9[12] = {589, 771, 0, 2805, 110, 110, 2, 604, 776, 80, 80, DRAG_1};
cf P_8_9[12] = {685, 771, 0, 2805, 110, 110, 2, 700, 776, 80, 80, DRAG_1};
cf P_9_9[12] = {781, 771, 0, 2805, 110, 110, 2, 796, 776, 80, 80, DRAG_1};
cf P_10_9[12] = {877, 771, 0, 2805, 110, 110, 2, 892, 776, 80, 80, DRAG_1};
cf P_11_9[12] = {973, 771, 0, 2805, 110, 110, 2, 988, 776, 80, 80, DRAG_1};
cf P_12_9[12] = {1069, 771, 0, 2805, 110, 110, 2, 1084, 776, 80, 80, DRAG_1};
cf P_13_9[12] = {1165, 771, 0, 2805, 110, 110, 2, 1180, 776, 80, 80, DRAG_1};
cf P_14_9[12] = {1261, 771, 0, 2805, 110, 110, 2, 1276, 776, 80, 80, DRAG_1};

cf P_START[12] = {-83, 387, 0, 2805, 110, 110, 2, -68, 392, 80, 80, ENEMY};
cf P_END[12] = {1357, 387, 0, 2805, 110, 110, 2, 1372, 392, 80, 80, ENEMY};

cf DLC_1[12] = {728, 390, 0, 3760, 110, 344, 2, 758, 414, 284, 61, SELECT};
cf DLC_2[12] = {544, 486, 0, 3870, 110, 712, 2, 574, 510, 652, 61, SELECT};
cf DLC_3[12] = {665, 582, 0, 3980, 110, 470, 2, 695, 606, 409, 61, SELECT};

cf HOME_2[12] = {1660, 1005, 0, 1563, 80, 80, 2, 1675, 1020, 50, 50, S_H};
cf QUIT_2[12] = {1720, 1005, 0, 1643, 80, 80, 2, 1735, 1020, 50, 50,S_H};
cf BACK[12] = {1600, 1005, 0, 4623, 80, 80, 2, 1615, 1020, 50, 50,S_H};
cf LAUNCH[12] = {0, 914, 305, 2191, 80, 270, 2, 20, 934, 230, 40,MAINA};

cf CLICK_1[12] = {125, 304, 250, 1653, 80, 153, 2, 140, 319, 123, 50,SETTINGS};
cf CLICK_2[12] = {263, 304, 250, 1733, 80, 153, 2, 278, 319, 123, 50,SETTINGS};

cf HIT_1[12] = {125, 420, 250, 1653, 80, 153, 2, 140, 435, 123, 50,SETTINGS};
cf HIT_2[12] = {263, 420, 250, 1733, 80, 153, 2, 278, 435, 123, 50,SETTINGS};

cf FPS_C[12] = {603, 304, 250, 1813, 80, 153, 2, 618, 319, 123, 50,SETTINGS};

/*
* Suite de l'initialisation des boutons
*/

node_button *re7_next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, DLC_2, select_RU_UK));
    add_button(&node, setup_button(df, DLC_3, nothing));
    add_button(&node, setup_button(df, HOME_2, home_menu));
    add_button(&node, setup_button(df, QUIT_2, quit_button));
    add_button(&node, setup_button(df, BACK, play_button));
    add_button(&node, setup_button(df, LAUNCH, round_launch));
    add_button(&node, setup_button(df, CLICK_1, click_1));
    add_button(&node, setup_button(df, CLICK_2, click_2));
    add_button(&node, setup_button(df, HIT_1, hit_1));
    add_button(&node, setup_button(df, HIT_2, hit_2));
    add_button(&node, setup_button(df, FPS_C, change_fps));
    return node;
}

node_button *re6_next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, P_13_8, drag_unclick));
    add_button(&node, setup_button(df, P_14_8, drag_unclick));
    add_button(&node, setup_button(df, P_1_9, drag_unclick));
    add_button(&node, setup_button(df, P_2_9, drag_unclick));
    add_button(&node, setup_button(df, P_3_9, drag_unclick));
    add_button(&node, setup_button(df, P_4_9, drag_unclick));
    add_button(&node, setup_button(df, P_5_9, drag_unclick));
    add_button(&node, setup_button(df, P_6_9, drag_unclick));
    add_button(&node, setup_button(df, P_7_9, drag_unclick));
    add_button(&node, setup_button(df, P_8_9, drag_unclick));
    add_button(&node, setup_button(df, P_9_9, drag_unclick));
    add_button(&node, setup_button(df, P_10_9, drag_unclick));
    add_button(&node, setup_button(df, P_11_9, drag_unclick));
    add_button(&node, setup_button(df, P_12_9, drag_unclick));
    add_button(&node, setup_button(df, P_13_9, drag_unclick));
    add_button(&node, setup_button(df, P_14_9, drag_unclick));
    add_button(&node, setup_button(df, P_START, nothing));
    add_button(&node, setup_button(df, P_END, nothing));
    add_button(&node, setup_button(df, DLC_1, select_normal));
    return re7_next_buttons(df, node);
}

/*
* Suite de l'initialisation des boutons
*/

node_button *re5_next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, P_8_7, drag_unclick));
    add_button(&node, setup_button(df, P_9_7, drag_unclick));
    add_button(&node, setup_button(df, P_10_7, drag_unclick));
    add_button(&node, setup_button(df, P_11_7, drag_unclick));
    add_button(&node, setup_button(df, P_12_7, drag_unclick));
    add_button(&node, setup_button(df, P_13_7, drag_unclick));
    add_button(&node, setup_button(df, P_14_7, drag_unclick));
    add_button(&node, setup_button(df, P_1_8, drag_unclick));
    add_button(&node, setup_button(df, P_2_8, drag_unclick));
    add_button(&node, setup_button(df, P_3_8, drag_unclick));
    add_button(&node, setup_button(df, P_4_8, drag_unclick));
    add_button(&node, setup_button(df, P_5_8, drag_unclick));
    add_button(&node, setup_button(df, P_6_8, drag_unclick));
    add_button(&node, setup_button(df, P_7_8, drag_unclick));
    add_button(&node, setup_button(df, P_8_8, drag_unclick));
    add_button(&node, setup_button(df, P_9_8, drag_unclick));
    add_button(&node, setup_button(df, P_10_8, drag_unclick));
    add_button(&node, setup_button(df, P_11_8, drag_unclick));
    add_button(&node, setup_button(df, P_12_8, drag_unclick));
    return re6_next_buttons(df, node);
}

/*
* Suite de l'initialisation des boutons
*/

node_button *re4_next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, P_3_6, drag_unclick));
    add_button(&node, setup_button(df, P_4_6, drag_unclick));
    add_button(&node, setup_button(df, P_5_6, drag_unclick));
    add_button(&node, setup_button(df, P_6_6, drag_unclick));
    add_button(&node, setup_button(df, P_7_6, drag_unclick));
    add_button(&node, setup_button(df, P_8_6, drag_unclick));
    add_button(&node, setup_button(df, P_9_6, drag_unclick));
    add_button(&node, setup_button(df, P_10_6, drag_unclick));
    add_button(&node, setup_button(df, P_11_6, drag_unclick));
    add_button(&node, setup_button(df, P_12_6, drag_unclick));
    add_button(&node, setup_button(df, P_13_6, drag_unclick));
    add_button(&node, setup_button(df, P_14_6, drag_unclick));
    add_button(&node, setup_button(df, P_1_7, drag_unclick));
    add_button(&node, setup_button(df, P_2_7, drag_unclick));
    add_button(&node, setup_button(df, P_3_7, drag_unclick));
    add_button(&node, setup_button(df, P_4_7, drag_unclick));
    add_button(&node, setup_button(df, P_5_7, drag_unclick));
    add_button(&node, setup_button(df, P_6_7, drag_unclick));
    add_button(&node, setup_button(df, P_7_7, drag_unclick));
    return re5_next_buttons(df, node);
}
