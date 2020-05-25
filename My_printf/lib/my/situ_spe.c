/*
** EPITECH PROJECT, 2019
** situ_gene
** File description:
** my_printf crazy situations
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

void situ_hash(char *begin, va_list arg)
{
    begin++;
    switch (*begin) {
    case 'x':
        my_putstr("0x");
        situ_x(arg);
        break;
    case 'X':
        my_putstr("0X");
        situ_x_mas(arg);
        break;
    case 'o':
        my_putchar('0');
        get_octal(va_arg(arg, int));
        break;
    case 'd':
        my_putchar('+');
        my_put_nbr(va_arg(arg, int));
        break;
    }
}

void crazy_situ(char *begin, va_list arg)
{
    switch (*begin) {
    case 'u':
        my_put_usnbr(va_arg(arg, long));
        break;
    case '#': case '+':
        situ_hash(begin,arg);
        break;
    default:
        my_putchar(*(begin - 1));
        my_putchar(*begin);
        break;
    }
}

void situ_special(char *begin, va_list arg)
{
    switch (*begin) {
    case 'o':
        get_octal(va_arg(arg, int));
        break;
    case 'x':
        situ_x(arg);
        break;
    case 'X':
        situ_x_mas(arg);
        break;
    case 'b':
        get_binary(va_arg(arg, int));
        break;
    default:
        crazy_situ(begin,arg);
        break;
    }
}
