/*
** claraxuxu, 2019
** my_putstrc
** File description:
** out put str
*/

#include "lib_str.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}