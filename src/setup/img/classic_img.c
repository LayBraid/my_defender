/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/struct.h"
#include "../../../include/setup.h"

classic_img *setup_a_classic_img(char *path, float x, float y)
{
    sfVector2f vector;
    classic_img *img = malloc(sizeof(classic_img));

    img->sprite = sfSprite_create();
    img->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(img->sprite,img->texture, sfTrue);
    vector.x = x;
    vector.y = y;
    sfSprite_setPosition(img->sprite, vector);
    return img;
}
