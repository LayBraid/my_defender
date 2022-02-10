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

typedef const float cf;

cf PLAY[12] = {683, 875, 0, 2045, 141, 434, 2, 713,915, 374, 61, OPEN};
cf QUIT[12] = {1715, 993, 0, 2186, 100, 100, 2, 1750, 1026, 30, 34,OPEN};
cf HELPER[12] = {5, 1005, 0, 1403, 80, 80, 2, 20, 1020, 50, 50, MAIN};
cf SETTING[12] = {65, 1005, 0, 1483, 80, 80, 2, 80, 1020, 50, 50,MAIN};
cf HOME[12] = {125, 1005, 0, 1563, 80, 80, 2, 140, 1020, 50, 50,MAIN};
cf QUIT2[12] = {185, 1005, 0, 1643, 80, 80, 2, 220, 1020, 50, 50,MAIN};
cf TIME_DOWN[12] = {612, 1005, 0, 1883, 80, 80, 2, 633, 1033, 38, 24,MAIN};
cf TIME_UP[12] = {698, 1005, 0, 1963, 80, 80, 2, 719, 1033, 38, 24,MAIN};
cf PAUSE[12] = {655, 1005, 0, 1723, 80, 80, 2, 683, 1029, 32, 24,MAIN};
cf TOWER_1[12] = {1441, 253,250, 1403, 110, 110, 2, 1456, 268, 80, 80,MAIN};
cf TOWER_2[12] = {1541, 253,250, 1513, 110, 110, 2, 1556, 268, 80, 80,MAIN};
cf TOWER_3[12] = {1641, 253,250, 1623, 110, 110, 2, 1656, 268, 80, 80,MAIN};
cf TOWER_4[12] = {1441, 353,250, 1733, 110, 110, 2, 1456, 368, 80, 80,MAIN};
cf TANK_1[12] = {1441, 504,250, 1843, 110, 110, 2, 1456, 519, 80, 80,MAIN};
cf TANK_2[12] = {1541, 504,580, 1403, 110, 110, 2, 1556, 519, 80, 80,MAIN};
cf MISSILE_1[12] = {1441, 655,580, 1513, 110, 110, 2, 1456, 670, 80, 80,MAIN};
cf MISSILE_2[12] = {1541, 655,580, 1623, 110, 110, 2, 1556, 670, 80, 80,MAIN};
cf MISSILE_3[12] = {1641, 655,580, 1733, 110, 110, 2, 1656, 670, 80, 80,MAIN};
cf MISSILE_4[12] = {1441, 755,580, 1843, 110, 110, 2, 1456, 770, 80, 80,MAIN};

/*
 * Suite de l'initialisation des boutons
 */

node_button *next_buttons(dfd *df, node_button *node)
{
    add_button(&node, setup_button(df, MISSILE_4, quit_button));
    add_button(&node, setup_button(df, MISSILE_3, quit_button));
    return node;
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
    add_button(&node, setup_button(df, TOWER_1, quit_button));
    add_button(&node, setup_button(df, TOWER_2, quit_button));
    add_button(&node, setup_button(df, TOWER_3, quit_button));
    add_button(&node, setup_button(df, TOWER_4, quit_button));
    add_button(&node, setup_button(df, TANK_1, quit_button));
    add_button(&node, setup_button(df, TANK_2, quit_button));
    add_button(&node, setup_button(df, MISSILE_1, quit_button));
    add_button(&node, setup_button(df, MISSILE_2, quit_button));
    return next_buttons(df, node);
}
