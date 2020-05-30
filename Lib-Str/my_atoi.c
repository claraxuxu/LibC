/*
**  claraxuxu, 2020
** my_atoi
** File description:
** change str to int mode
*/

#include "lib_str.h"

int my_atoi_char(char src)
{
    int s = 0;

    if (src >= '0' && src <= '9')
        s = s * 10 + src - '0';
    return (s);
}

int my_atoi(char *src)
{
    int s = 0;
    int a = 1;

    while (*src == ' ')
        src++;
    if (*src == '+' || *src == '-') {
        if (*src == '-')
            a = -1;
        src++;
    }
    while (*src != '\0' && *src >= '0' && *src <= '9') {
        s = s * 10 + *src - '0';
        src++;
    }
    s = s * a;
    return (s);
}