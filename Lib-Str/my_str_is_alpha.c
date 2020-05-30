/*
** claraxuxu, 2019
** my_str_is
** File description:
** check str is an alphabet
*/

#include "lib_str.h"

int my_str_isalpha(char *str)
{
    int alpha = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] >= 65 && str[i] <= 90) ||
            (str[i] >= 97 && str[i] <= 122))
            alpha++;
    if (alpha == my_strlen(str))
        return (1);
    return (alpha);
}