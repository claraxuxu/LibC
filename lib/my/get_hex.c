/*
** EPITECH PROJECT, 2019
** get_hex for pointer
** File description:
** my_printf %p
*/

#include <unistd.h>
#include "../../include/my.h"

void rest(int num, int base)
{
    if (num == 0)
        return;
    else {
        res_dif_int(num / base, base);
        my_putstr(num % base);
    }
}

void get_hex(int num)
{
    if (num == 0) {
        my_putchar('0');
        return;
    } else
        rest(num,16);
}
