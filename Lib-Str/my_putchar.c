/*
** claraxuxu, 2019
** my_putchar
** File description:
** output a character
*/

#include "lib_str.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
