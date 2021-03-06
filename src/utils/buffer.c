/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** No file there , just an epitech header example
*/

#include <sys/fcntl.h>
#include "utils.h"
#include "my.h"

char *get_in_buffer(char *path)
{
    int fd;
    char *buffer;

    buffer = malloc(sizeof(char) * (3000));
    fd = open(path, O_RDONLY);
    if (fd == -1)
        return "error";
    read(fd, buffer, 3000);
    buffer[3000] = '\0';
    close(fd);
    return buffer;
}

char *extract_between_limits(char const *exp, int s1, int s2)
{
    int length = s2 - s1;
    char *result = malloc(sizeof(char) * (length + 2));

    for (int index = 0; index <= length; ++index)
        result[index] = exp[index + s1];
    result[length + 1] = '\0';
    return result;
}

int get_it_char(const char *str, char c, int index)
{
    int it = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c && it == index)
            return i;
        if (str[i] == c && it != index)
            it++;
    }
    return -1;
}
