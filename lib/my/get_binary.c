/*
** EPITECH PROJECT, 2019
** get_binary
** File description:
** my_printf %b
*/

#include <unistd.h>
#include "../../include/my.h"

void get_binary(int num)
{
    if (num == 0) {
        my_putchar('0');
        return;
    } else
        res_dif_int(num,2);
}
