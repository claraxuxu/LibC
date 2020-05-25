/*
** EPITECH PROJECT, 2019
** my_put_usnbr
** File description:
** display the unsigned number given as a parameter
*/

#include <unistd.h>
#include "../../include/my.h"

void my_put_usnbr(long nb)
{
    int n;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
        }
    if (nb > 9) {
        n = nb / 10;
        my_put_nbr(n);
    }
    n = nb % 10 + 48;
    my_putchar(n);
}
