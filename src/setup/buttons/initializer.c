/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "game.h"
#include "my.h"
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

cf PLAY[12] = {683, 875, 0, 2045, 141, 434, 2, 713,915, 374, 61, OPEN};
cf QUIT[12] = {1715, 993, 0, 2186, 100, 100, 2, 1750, 1026, 30, 34,OPEN};
cf HELPER[12] = {5, 1005, 0, 1403, 80, 80, 2, 20, 1020, 50, 50, MAIN_DRAG};
cf SETTING[12] = {65, 1005, 0, 1483, 80, 80, 2, 80, 1020, 50, 50,MAIN_DRAG};
cf HOME[12] = {125, 1005, 0, 1563, 80, 80, 2, 140, 1020, 50, 50,MAIN_DRAG};
cf QUIT2[12] = {185, 1005, 0, 1643, 80, 80, 2, 220, 1020, 50, 50,MAIN_DRAG};
cf TIME_DOWN[12] = {612, 1005, 0, 1883, 80, 80, 2, 633, 1033, 38, 24,MAIN_DRAG};
cf TIME_UP[12] = {698, 1005, 0, 1963, 80, 80, 2, 719, 1033, 38, 24,MAIN_DRAG};
cf PAUSE[12] = {655, 1005, 0, 1723, 80, 80, 2, 683, 1029, 32, 24,MAIN_DRAG};
cf TOWER_1[12] = {1441, 253,250, 1403, 110, 110, 2, 1456, 268, 80, 80,MAIN_DRAG};
cf TOWER_2[12] = {1541, 253,250, 1513, 110, 110, 2, 1556, 268, 80, 80,MAIN_DRAG};
cf TOWER_3[12] = {1641, 253,250, 1623, 110, 110, 2, 1656, 268, 80, 80,MAIN_DRAG};
cf TOWER_4[12] = {1441, 353,250, 1733, 110, 110, 2, 1456, 368, 80, 80,MAIN_DRAG};
cf TANK_1[12] = {1441, 504,250, 1843, 110, 110, 2, 1456, 519, 80, 80,MAIN_DRAG};
cf TANK_2[12] = {1541, 504,580, 1403, 110, 110, 2, 1556, 519, 80, 80,MAIN_DRAG};
cf MISSILE_1[12] = {1441, 655,580, 1513, 110, 110, 2, 1456, 670, 80, 80,MAIN_DRAG};
cf MISSILE_2[12] = {1541, 655,580, 1623, 110, 110, 2, 1556, 670, 80, 80,MAIN_DRAG};
cf MISSILE_3[12] = {1641, 655,580, 1733, 110, 110, 2, 1656, 670, 80, 80,MAIN_DRAG};
cf MISSILE_4[12] = {1441, 755,580, 1843, 110, 110, 2, 1456, 770, 80, 80,MAIN_DRAG};
cf PLANE_1[12] = {1441, 906,910, 1403, 110, 110, 2, 1456, 921, 80, 80,MAIN_DRAG};
cf PLANE_2[12] = {1541, 906,910, 1513, 110, 110, 2, 1556, 921, 80, 80,MAIN_DRAG};

cf P_1_1[12] = {13, 3, 0, 2805, 110, 110, 2, 28, 18, 80, 80, DRAG};
cf P_2_1[12] = {109, 3, 0, 2805, 110, 110, 2, 124, 18, 80, 80, DRAG};
cf P_3_1[12] = {205, 3, 0, 2805, 110, 110, 2, 220, 18, 80, 80, DRAG};
cf P_4_1[12] = {301, 3, 0, 2805, 110, 110, 2, 316, 18, 80, 80, DRAG};
cf P_5_1[12] = {397, 3, 0, 2805, 110, 110, 2, 412, 18, 80, 80, DRAG};
cf P_6_1[12] = {493, 3, 0, 2805, 110, 110, 2, 508, 18, 80, 80, DRAG};
cf P_7_1[12] = {589, 3, 0, 2805, 110, 110, 2, 604, 18, 80, 80, DRAG};
cf P_8_1[12] = {685, 3, 0, 2805, 110, 110, 2, 700, 18, 80, 80, DRAG};
cf P_9_1[12] = {781, 3, 0, 2805, 110, 110, 2, 796, 18, 80, 80, DRAG};
cf P_10_1[12] = {877, 3, 0, 2805, 110, 110, 2, 892, 18, 80, 80, DRAG};
cf P_11_1[12] = {973, 3, 0, 2805, 110, 110, 2, 988, 18, 80, 80, DRAG};
cf P_12_1[12] = {1069, 3, 0, 2805, 110, 110, 2, 1084, 18, 80, 80, DRAG};
cf P_13_1[12] = {1165, 3, 0, 2805, 110, 110, 2, 1180, 18, 80, 80, DRAG};
cf P_14_1[12] = {1261, 3, 0, 2805, 110, 110, 2, 1276, 18, 80, 80, DRAG};

cf P_1_2[12] = {13, 99, 0, 2805, 110, 110, 2, 28, 104, 80, 80, DRAG};
cf P_2_2[12] = {109, 99, 0, 2805, 110, 110, 2, 124, 104, 80, 80, DRAG};
cf P_3_2[12] = {205, 99, 0, 2805, 110, 110, 2, 220, 104, 80, 80, DRAG};
cf P_4_2[12] = {301, 99, 0, 2805, 110, 110, 2, 316, 104, 80, 80, DRAG};
cf P_5_2[12] = {397, 99, 0, 2805, 110, 110, 2, 412, 104, 80, 80, DRAG};
cf P_6_2[12] = {493, 99, 0, 2805, 110, 110, 2, 508, 104, 80, 80, DRAG};
cf P_7_2[12] = {589, 99, 0, 2805, 110, 110, 2, 604, 104, 80, 80, DRAG};
cf P_8_2[12] = {685, 99, 0, 2805, 110, 110, 2, 700, 104, 80, 80, DRAG};
cf P_9_2[12] = {781, 99, 0, 2805, 110, 110, 2, 796, 104, 80, 80, DRAG};
cf P_10_2[12] = {877, 99, 0, 2805, 110, 110, 2, 892, 104, 80, 80, DRAG};
cf P_11_2[12] = {973, 99, 0, 2805, 110, 110, 2, 988, 104, 80, 80, DRAG};
cf P_12_2[12] = {1069, 99, 0, 2805, 110, 110, 2, 1084, 104, 80, 80, DRAG};
cf P_13_2[12] = {1165, 99, 0, 2805, 110, 110, 2, 1180, 104, 80, 80, DRAG};
cf P_14_2[12] = {1261, 99, 0, 2805, 110, 110, 2, 1276, 104, 80, 80, DRAG};

cf P_1_3[12] = {13, 195, 0, 2805, 110, 110, 2, 28, 200, 80, 80, DRAG};
cf P_2_3[12] = {109, 195, 0, 2805, 110, 110, 2, 124, 200, 80, 80, DRAG};
cf P_3_3[12] = {205, 195, 0, 2805, 110, 110, 2, 220, 200, 80, 80, DRAG};
cf P_4_3[12] = {301, 195, 0, 2805, 110, 110, 2, 316, 200, 80, 80, DRAG};
cf P_5_3[12] = {397, 195, 0, 2805, 110, 110, 2, 412, 200, 80, 80, DRAG};
cf P_6_3[12] = {493, 195, 0, 2805, 110, 110, 2, 508, 200, 80, 80, DRAG};
cf P_7_3[12] = {589, 195, 0, 2805, 110, 110, 2, 604, 200, 80, 80, DRAG};
cf P_8_3[12] = {685, 195, 0, 2805, 110, 110, 2, 700, 200, 80, 80, DRAG};
cf P_9_3[12] = {781, 195, 0, 2805, 110, 110, 2, 796, 200, 80, 80, DRAG};
cf P_10_3[12] = {877, 195, 0, 2805, 110, 110, 2, 892, 200, 80, 80, DRAG};
cf P_11_3[12] = {973, 195, 0, 2805, 110, 110, 2, 988, 200, 80, 80, DRAG};
cf P_12_3[12] = {1069, 195, 0, 2805, 110, 110, 2, 1084, 200, 80, 80, DRAG};
cf P_13_3[12] = {1165, 195, 0, 2805, 110, 110, 2, 1180, 200, 80, 80, DRAG};
cf P_14_3[12] = {1261, 195, 0, 2805, 110, 110, 2, 1276, 200, 80, 80, DRAG};

cf P_1_4[12] = {13, 291, 0, 2805, 110, 110, 2, 28, 296, 80, 80, DRAG};
cf P_2_4[12] = {109, 291, 0, 2805, 110, 110, 2, 124, 296, 80, 80, DRAG};
cf P_3_4[12] = {205, 291, 0, 2805, 110, 110, 2, 220, 296, 80, 80, DRAG};
cf P_4_4[12] = {301, 291, 0, 2805, 110, 110, 2, 316, 296, 80, 80, DRAG};
cf P_5_4[12] = {397, 291, 0, 2805, 110, 110, 2, 412, 296, 80, 80, DRAG};
cf P_6_4[12] = {493, 291, 0, 2805, 110, 110, 2, 508, 296, 80, 80, DRAG};
cf P_7_4[12] = {589, 291, 0, 2805, 110, 110, 2, 604, 296, 80, 80, DRAG};
cf P_8_4[12] = {685, 291, 0, 2805, 110, 110, 2, 700, 296, 80, 80, DRAG};
cf P_9_4[12] = {781, 291, 0, 2805, 110, 110, 2, 796, 296, 80, 80, DRAG};
cf P_10_4[12] = {877, 291, 0, 2805, 110, 110, 2, 892, 296, 80, 80, DRAG};
cf P_11_4[12] = {973, 291, 0, 2805, 110, 110, 2, 988, 296, 80, 80, DRAG};
cf P_12_4[12] = {1069, 291, 0, 2805, 110, 110, 2, 1084, 296, 80, 80, DRAG};
cf P_13_4[12] = {1165, 291, 0, 2805, 110, 110, 2, 1180, 296, 80, 80, DRAG};
cf P_14_4[12] = {1261, 291, 0, 2805, 110, 110, 2, 1276, 296, 80, 80, DRAG};

cf P_1_5[12] = {13, 387, 0, 2805, 110, 110, 2, 28, 392, 80, 80, DRAG};
cf P_2_5[12] = {109, 387, 0, 2805, 110, 110, 2, 124, 392, 80, 80, DRAG};
cf P_3_5[12] = {205, 387, 0, 2805, 110, 110, 2, 220, 392, 80, 80, DRAG};
cf P_4_5[12] = {301, 387, 0, 2805, 110, 110, 2, 316, 392, 80, 80, DRAG};
cf P_5_5[12] = {397, 387, 0, 2805, 110, 110, 2, 412, 392, 80, 80, DRAG};
cf P_6_5[12] = {493, 387, 0, 2805, 110, 110, 2, 508, 392, 80, 80, DRAG};
cf P_7_5[12] = {589, 387, 0, 2805, 110, 110, 2, 604, 392, 80, 80, DRAG};
cf P_8_5[12] = {685, 387, 0, 2805, 110, 110, 2, 700, 392, 80, 80, DRAG};
cf P_9_5[12] = {781, 387, 0, 2805, 110, 110, 2, 796, 392, 80, 80, DRAG};
cf P_10_5[12] = {877, 387, 0, 2805, 110, 110, 2, 892, 392, 80, 80, DRAG};
cf P_11_5[12] = {973, 387, 0, 2805, 110, 110, 2, 988, 392, 80, 80, DRAG};
cf P_12_5[12] = {1069, 387, 0, 2805, 110, 110, 2, 1084, 392, 80, 80, DRAG};
cf P_13_5[12] = {1165, 387, 0, 2805, 110, 110, 2, 1180, 392, 80, 80, DRAG};
cf P_14_5[12] = {1261, 387, 0, 2805, 110, 110, 2, 1276, 392, 80, 80, DRAG};

cf P_1_6[12] = {13, 483, 0, 2805, 110, 110, 2, 28, 488, 80, 80, DRAG};
cf P_2_6[12] = {109, 483, 0, 2805, 110, 110, 2, 124, 488, 80, 80, DRAG};

/*
 * Suite de l'initialisation des boutons
 */

node_button *re3_next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, P_12_4, nothing));
    add_button(&node, setup_button(df, P_13_4, nothing));
    add_button(&node, setup_button(df, P_14_4, nothing));
    add_button(&node, setup_button(df, P_1_5, nothing));
    add_button(&node, setup_button(df, P_2_5, nothing));
    add_button(&node, setup_button(df, P_3_5, nothing));
    add_button(&node, setup_button(df, P_4_5, nothing));
    add_button(&node, setup_button(df, P_5_5, nothing));
    add_button(&node, setup_button(df, P_6_5, nothing));
    add_button(&node, setup_button(df, P_7_5, nothing));
    add_button(&node, setup_button(df, P_8_5, nothing));
    add_button(&node, setup_button(df, P_9_5, nothing));
    add_button(&node, setup_button(df, P_10_5, nothing));
    add_button(&node, setup_button(df, P_11_5, nothing));
    add_button(&node, setup_button(df, P_12_5, nothing));
    add_button(&node, setup_button(df, P_13_5, nothing));
    add_button(&node, setup_button(df, P_14_5, nothing));
    add_button(&node, setup_button(df, P_1_6, nothing));
    add_button(&node, setup_button(df, P_2_6, nothing));
    return re4_next_buttons(df, node);
}

/*
 * Suite de l'initialisation des boutons
 */

node_button *re2_next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, P_7_3, nothing));
    add_button(&node, setup_button(df, P_8_3, nothing));
    add_button(&node, setup_button(df, P_9_3, nothing));
    add_button(&node, setup_button(df, P_10_3, nothing));
    add_button(&node, setup_button(df, P_11_3, nothing));
    add_button(&node, setup_button(df, P_12_3, nothing));
    add_button(&node, setup_button(df, P_13_3, nothing));
    add_button(&node, setup_button(df, P_14_3, nothing));
    add_button(&node, setup_button(df, P_1_4, nothing));
    add_button(&node, setup_button(df, P_2_4, nothing));
    add_button(&node, setup_button(df, P_3_4, nothing));
    add_button(&node, setup_button(df, P_4_4, nothing));
    add_button(&node, setup_button(df, P_5_4, nothing));
    add_button(&node, setup_button(df, P_6_4, nothing));
    add_button(&node, setup_button(df, P_7_4, nothing));
    add_button(&node, setup_button(df, P_8_4, nothing));
    add_button(&node, setup_button(df, P_9_4, nothing));
    add_button(&node, setup_button(df, P_10_4, nothing));
    add_button(&node, setup_button(df, P_11_4, nothing));
    return re3_next_buttons(df, node);
}

/*
 * Suite de l'initialisation des boutons
 */

node_button *re_next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, P_2_2, nothing));
    add_button(&node, setup_button(df, P_3_2, nothing));
    add_button(&node, setup_button(df, P_4_2, nothing));
    add_button(&node, setup_button(df, P_5_2, nothing));
    add_button(&node, setup_button(df, P_6_2, nothing));
    add_button(&node, setup_button(df, P_7_2, nothing));
    add_button(&node, setup_button(df, P_8_2, nothing));
    add_button(&node, setup_button(df, P_9_2, nothing));
    add_button(&node, setup_button(df, P_10_2, nothing));
    add_button(&node, setup_button(df, P_11_2, nothing));
    add_button(&node, setup_button(df, P_12_2, nothing));
    add_button(&node, setup_button(df, P_13_2, nothing));
    add_button(&node, setup_button(df, P_14_2, nothing));
    add_button(&node, setup_button(df, P_1_3, nothing));
    add_button(&node, setup_button(df, P_2_3, nothing));
    add_button(&node, setup_button(df, P_3_3, nothing));
    add_button(&node, setup_button(df, P_4_3, nothing));
    add_button(&node, setup_button(df, P_5_3, nothing));
    add_button(&node, setup_button(df, P_6_3, nothing));
    return re2_next_buttons(df, node);
}

/*
 * Suite de l'initialisation des boutons
 */

node_button *next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, MISSILE_3, quit_button));
    add_button(&node, setup_button(df, MISSILE_4, quit_button));
    add_button(&node, setup_button(df, PLANE_1, quit_button));
    add_button(&node, setup_button(df, PLANE_2, quit_button));
    add_button(&node, setup_button(df, P_1_1, nothing));
    add_button(&node, setup_button(df, P_2_1, nothing));
    add_button(&node, setup_button(df, P_3_1, nothing));
    add_button(&node, setup_button(df, P_4_1, nothing));
    add_button(&node, setup_button(df, P_5_1, nothing));
    add_button(&node, setup_button(df, P_6_1, nothing));
    add_button(&node, setup_button(df, P_7_1, nothing));
    add_button(&node, setup_button(df, P_8_1, nothing));
    add_button(&node, setup_button(df, P_9_1, nothing));
    add_button(&node, setup_button(df, P_10_1, nothing));
    add_button(&node, setup_button(df, P_11_1, nothing));
    add_button(&node, setup_button(df, P_12_1, nothing));
    add_button(&node, setup_button(df, P_13_1, nothing));
    add_button(&node, setup_button(df, P_14_1, nothing));
    add_button(&node, setup_button(df, P_1_2, nothing));
    return re_next_buttons(df, node);
}

/*
 * Explication de la fonction:
 *
 * Pour le premier bouton il faut utiliser la fonction 'setup_first'
 * et pour les autres 'add_to_list'.
 *
 * Premier paramètre à passer à chaque fois c'est l'adresse de node '&node'
 * Ensuite le retour de la fonction 'setup_button'.
 *
 * Voir explication 'setup_button' pour les arguments
 */

node_button *setup_buttons(dfd *df)
{
    node_button *node = malloc(sizeof(node_button));

    setup_first_button(&node, setup_button(df, PLAY, play_button));
    add_button(&node, setup_button(df, QUIT, quit_button));
    add_button(&node, setup_button(df, HELPER, quit_button));
    add_button(&node, setup_button(df, SETTING, quit_button));
    add_button(&node, setup_button(df, HOME, quit_button));
    add_button(&node, setup_button(df, QUIT2, quit_button));
    add_button(&node, setup_button(df, TIME_DOWN, quit_button));
    add_button(&node, setup_button(df, TIME_UP, quit_button));
    add_button(&node, setup_button(df, PAUSE, quit_button));
    add_button(&node, setup_button(df, TOWER_1, d_and_d));
    add_button(&node, setup_button(df, TOWER_2, d_and_d));
    add_button(&node, setup_button(df, TOWER_3, d_and_d));
    add_button(&node, setup_button(df, TOWER_4, d_and_d));
    add_button(&node, setup_button(df, TANK_1, d_and_d));
    add_button(&node, setup_button(df, TANK_2, d_and_d));
    add_button(&node, setup_button(df, MISSILE_1, d_and_d));
    add_button(&node, setup_button(df, MISSILE_2, d_and_d));
    return next_buttons(df, node);
}
