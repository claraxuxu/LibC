/*
** claraxuxu, 2019
** my_getnbr
** File description:
** get nbr from a string
*/

#include "lib_str.h"

int my_getnbr(char *str)
{
    int val = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            val *= 10;
            val += *str - '0';
        } else return (-1);
        str++;
    }
    return (val);
}