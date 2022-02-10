/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"

/*
 * Ce qu'on donne en entrée:
 * - 'path': >> path de la ressource
 * - 'info' >> la variable globale qui correspond au bouton
 * - 'function' >> la fonction executée quand on click vu que c'est un bouton
 *
 * Ça retourne un objet 'hovered_button' setup auto
*/

hovered_button *setup_button(dfd *defender, const float info[12],
void (* function)(my_defender_pointer *defender))
{
    hovered_button *button = malloc(sizeof(hovered_button));

    button->button = setup_a_anim_img(defender, info);
    button->x_click = info[7];
    button->y_click = info[8];
    button->x_max = info[9];
    button->y_max = info[10];
    button->step_display = (int) info[11];
    button->function = function;
    return button;
}
