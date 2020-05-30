/*
** EPITECH PROJECT, 2019
** my_situx
** File description:
** my printf situation %X
*/

#include "../include/my.h"

void x_count1(char count, int val2, char ch)
{
    while (count) {
        ch = val2 / my_pow(16, count - 1);
        val2 %= my_pow(16, count - 1);
        if (ch <= 9)
            my_putchar(ch + '0');
        else
            my_putchar(ch - 10 + 'A');
        count--;
    }
}

void situ_x_mas(va_list arg)
{
    int v;
    int q;
    char count;
    char ch;
    int res = 0;

    v = va_arg(arg, int);
    q = v;
    count = 0;
    while (q) {
        count++;
        q /= 16;
    }
    res += count;
    q = v;
    x_count1(count,q,ch);
}
