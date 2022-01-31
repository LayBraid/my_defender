/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include "../../../include/utils.h"

void draw_text_score(my_defender_t *my_defender)
{
    sfFont* font = sfFont_createFromFile("resources/font.ttf");
    sfColor color = sfColor_fromRGB(227, 249, 255);
    sfText* text = sfText_create();
    sfVector2f vector2F;
    char *str = my_itoa(my_defender->score);
    str = my_strcat(str, " m");
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 45);
    sfText_setColor(text, color);
    vector2F.x = 27;
    vector2F.y = 120;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(my_defender->window->window, text, NULL);
}

void draw_text_score_death_lore(my_defender_t *my_defender)
{
    sfFont* font = sfFont_createFromFile("resources/font.ttf");
    sfColor color = sfColor_fromRGB(239, 213, 72);
    sfText* text = sfText_create();
    sfVector2f vector2F;
    char *str = my_itoa(my_defender->score);
    str = my_strcat(str, " m");
    if (!font)
        return;
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 160);
    sfText_setColor(text, color);
    vector2F.x = 729.5f;
    vector2F.y = 255;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(my_defender->window->window, text, NULL);
}
