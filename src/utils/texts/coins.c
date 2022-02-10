/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "my.h"

void draw_coins(my_defender_t *my_defender)
{
    sfFont* font = sfFont_createFromFile("resources/font.otf");
    sfColor color = sfColor_fromRGB(204, 153, 51);
    sfText* text = sfText_create();
    sfVector2f vector;
    char *str = my_itoa(my_defender->coins);
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 21);
    sfText_setColor(text, color);
    switch (my_strlen(str)) {
        case 1:
        case 2:
            vector.x = 1327;
            anim_img_id(my_defender, 10, 2);
            break;
        case 3:
            vector.x = 1302;
            anim_img_id(my_defender, 10, 1);
            break;
        case 4:
            vector.x = 1284;
            anim_img_id(my_defender, 10, 0);
            break;
    }
    vector.y = (float) 920.5;
    sfText_setPosition(text, vector);
    sfRenderWindow_drawText(my_defender->window->window, text, NULL);
}
