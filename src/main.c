/*
** EPITECH PROJECT, 2021
** BLANK_PROJECT_C
** File description:
** No file there , just an epitech header example
*/

#include "game.h"
#include "my.h"

/*
 * Message d'help du jeu
 */

int help_message(void)
{
    my_putstr("--- MyDefender [HELP] ---\n\n");
    my_putstr("./mydefender >> launch game\n\n");
    my_putstr("Click on '?' in main menu\nto get more help.\n");
    my_putstr("--- Thanks for playing ---\n");
    return 1;
}

/*
 * Fonction main
 *
 * Vérification du nombre d'argument
 * Vérification du '-h'
 */

int main(int ac, char **av)
{
    exit_finder(av[2]);
    // if (ac == 2 && my_strcmp(av[1], "-h") == 0)
    //     return help_message();
    // if (ac == 1)
    //     game_launch();
    // return (1);
}
