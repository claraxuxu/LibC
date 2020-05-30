/*
** claraxuxu, 2019
** my_put_nbr
** File description:
** display the number given as a parameter
*/

#include "lib_str.h"

int my_put_nbr(int nb)
{
    int n = 0;
    int var = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    n = nb % 10;
    if (nb != n)
        my_put_nbr((nb - n) / 10);
    my_putchar(n + 48);
    if (var)
        my_putchar(var + 48);
    return (n);
}
