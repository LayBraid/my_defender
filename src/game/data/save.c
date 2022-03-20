/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <stdio.h>
#include "data.h"
#include "my.h"

void reset_data(dfd *df)
{
    char *data = DEFAULT;
    FILE *input = fopen("data/data", "w");

    if (input == NULL) {
        write(1, "Cannot open file 'data/data'\n", 29);
        return;
    }
    fwrite(data, 1, my_strlen(data), input);
    fclose(input);
}

void save_data(dfd *df)
{
    char *data = save_game(df);
    FILE *input = fopen("data/data", "w");

    if (input == NULL) {
        write(1, "Cannot open file 'data/data'\n", 29);
        return;
    }
    fwrite(data, 1, my_strlen(data), input);
    fclose(input);
}
