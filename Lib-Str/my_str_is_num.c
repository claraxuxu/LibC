/*
**  claraxuxu, 2019
** my_str_is
** File description:
** check str is number
*/

#include "lib_str.h"

int my_str_isnum(char *str)
{
    int nbr = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 48 && str[i] <= 57)
            nbr++;
    if (nbr == my_strlen(str))
        return (1);
    return (0);
}