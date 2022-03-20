/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "my.h"

void draw_spawn(dfd *df)
{
    sfFont* font = sfFont_createFromFile("resources/font.otf");
    sfColor color = sfColor_fromRGB(34, 225, 241);
    sfText* text = sfText_create();
    sfVector2f vector2F;
    char *str = "Spawn: ";
    my_strcat_3(&str, my_itoa(df->spawn_round));
    my_strcat_3(&str, "/");
    my_strcat_3(&str, my_itoa(max_enemies(df)));
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 18);
    sfText_setColor(text, color);
    vector2F.x = 41;
    vector2F.y = 963;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(df->window->window, text, NULL);
}

void draw_round(dfd *df)
{
    sfFont* font = sfFont_createFromFile("resources/font.otf");
    sfColor color = sfColor_fromRGB(34, 225, 241);
    sfText* text = sfText_create();
    sfVector2f vector2F;
    char *str = "Round: ";
    my_strcat_3(&str, my_itoa(df->wave));
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 18);
    sfText_setColor(text, color);
    vector2F.x = 41;
    vector2F.y = 943;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(df->window->window, text, NULL);
    draw_spawn(df);
}
