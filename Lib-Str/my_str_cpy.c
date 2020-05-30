/*
**  claraxuxu, 2019
** my_str
** File description:
** dest copy src
*/

#include "lib_str.h"

char *my_strcpy(char *dest, char const *src)
{
    int count = 0;
    char const *cpy = src;

    for (cpy = src; *cpy != '\0'; cpy++)
        count ++;
    for (int j = 0; j <= count; j++)
        dest[j] = src[j];
    return (dest);
}