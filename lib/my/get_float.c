/*
** EPITECH PROJECT, 2019
** get_float
** File description:
** my_printf float
*/

#include <unistd.h>
#include "../../include/my.h"

void get_float(double f)
{
    int temp = (int)f;

    res_dif_int(temp,10);
    my_putchar('.');
    f -= temp;
    if (f == 0) {
        for (temp = 0; temp < 6; temp++) {
            my_putchar('0');
        }
        return;
    } else {
        temp = (int)(f * 1000000);
        res_dif_int(temp,10);
    }
}
