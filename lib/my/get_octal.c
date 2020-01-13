/*
** EPITECH PROJECT, 2019
** my_getoctal
** File description:
** my_printf %o
*/

#include<stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

void get_octal(int num)
{
    if (num == 0) {
        my_putchar('0');
        return;
    } else
        res_dif_int(num,8);
}
