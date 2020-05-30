/*
** claraxuxu, 2019
** my_realloc
** File description:
** realloc a string
*/

#include "lib_str.h"

char *my_realloc(char *str, int size)
{
    char *new = malloc(my_strlen(str) + size);

    my_strncpy(new, str, my_strlen(str) + 1);
    free(str);
    return (new);
}