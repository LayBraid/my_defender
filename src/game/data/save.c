/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <stdio.h>
#include "data.h"
#include "my.h"

void save_data(dfd *df)
{
    char *data = save_game(df);
    FILE *input = fopen("data/data", "w");

    if (input == NULL) {
        my_putstr("Cannot open file 'data/data'\n");
        return;
    }
    fwrite(data, 1, my_strlen(data), input);
    fclose(input);
}
