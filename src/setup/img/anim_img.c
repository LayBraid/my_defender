/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "setup.h"
#include "my.h"

/*
 * Création d'une image animée
 *
 * Utilisée aussi pour les 'hovered_button'
 *
 * Arguments:
 * - path de la resource
 * - informations de l'image
 *
 * Informations de l'image:
 * 0: Position de l'image en X une fois display
 * 1: Position de l'image en Y une fois display
 * 2: Position du rect de l'image en position X
 * 3: Position du rect de l'image en position Y
 * 4: Height du rect
 * 5: Width du rect
 * 6: Position max de l'animation (Mettre à -1 pour annuler l'animation)
 */

//TODO Gérer le '-1' dans le max de l'animation >> cancel l'animation
//TODO Vérifier si enfaite mettre 0 ne cancel déjà pas l'annimation

anim_img *setup_a_anim_img(char *path, const float info[7])
{
    sfVector2f vector;
    sfIntRect rect;
    anim_img *img = malloc(sizeof(classic_img));

    img->sprite = sfSprite_create();
    img->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(img->sprite,img->texture, sfTrue);
    vector.x = info[0];
    vector.y = info[1];
    rect.left = (int) info[2];
    rect.top = (int) info[3];
    rect.height = (int) info[4];
    rect.width = (int) info[5];
    img->anim_pos = 0;
    img->anim_max = (int) info[6];
    img->x_power_anim = (int) info[4];
    img->y_power_anim = (int) info[5];
    sfSprite_setTextureRect(img->sprite, rect);
    sfSprite_setPosition(img->sprite, vector);
    return img;
}
