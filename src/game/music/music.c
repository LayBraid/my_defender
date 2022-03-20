/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include "music.h"

void music_player(dfd *df)
{
    df->music = sfMusic_createFromFile("resources/calm.wav");

    sfMusic_setVolume(df->music, 50);
    sfMusic_play(df->music);
    sfMusic_setLoop(df->music, sfTrue);
}
