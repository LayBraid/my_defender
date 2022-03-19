/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "my.h"

void draw_fps(dfd *df)
{
    sfFont* font = sfFont_createFromFile("resources/font.otf");
    sfColor color = sfColor_fromRGB(34, 225, 241);
    sfText* text = sfText_create();
    sfVector2f vector2F;
    char *str = my_itoa(df->fps);
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 18);
    sfText_setColor(text, color);
    vector2F.x = 547;
    vector2F.y = 333;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(df->window->window, text, NULL);
}
