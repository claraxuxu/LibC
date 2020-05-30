/*
** claraxuxu, 2020
** my_memset
** File description:
** function that acts like memsets does.
*/

#include "lib_str.h"

char *my_memset(int size, char with_what)
{
    char *dest = malloc(sizeof(char) * (size + 1));
    int i = 0;

    for (; i < size; dest[i] = with_what, i++);
    dest[i] = 0;
    return (dest);
}