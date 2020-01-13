/*
** EPITECH PROJECT, 2019
** my_situx
** File description:
** my printf situation %x
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

void x_count(char count, int val2, char ch)
{
    while (count) {
        ch = val2 / my_pow(16, count - 1);
        val2 %= my_pow(16, count - 1);
        if (ch <= 9)
            my_putchar(ch + '0');
        else
            my_putchar(ch - 10 + 'a');
        count--;
    }
}

void situ_x(va_list arg)
{
    int val;
    int val2;
    char count;
    char ch;
    int res = 0;

    val = va_arg(arg, int); 
    val2 = val;
    count = 0;
    while (val2) {
        count++;
        val2 /= 16;
    }
    res += count;
    val2 = val;
    x_count(count,val2,ch);
}
