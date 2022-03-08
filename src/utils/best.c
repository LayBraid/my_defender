/*
** EPITECH PROJECT, 2022
** MyRunner
** File description:
** No file there , just an epitech header example
*/

#include <stdio.h>
#include "utils.h"
#include "my.h"

/*
* Récupération du meilleur score dans notre fichier 'data'
*/

void get_best_score(my_defender_t *my_defender, char *buffer)
{
    my_defender->best_score = my_atoi(buffer);
}

/*
* Écriture d'un nouveau meileur score dans notre fichier 'data'
*/

void set_best_score(my_defender_t *my_defender)
{
    FILE * inputFile = fopen("data/data", "w");

    if (inputFile == NULL) {
        my_putstr("Cannot open file 'data/data'\n");
        exit(84);
    }
    if (my_defender->wave > my_defender->best_score) {
        fwrite(my_itoa(my_defender->wave), 1,
        my_strlen(my_itoa(my_defender->wave)), inputFile);
    } else {
        fwrite(my_itoa(my_defender->best_score), 1,
        my_strlen(my_itoa(my_defender->best_score)), inputFile);
    }
    fclose(inputFile);
}
