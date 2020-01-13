/*
** EPITECH PROJECT, 2019
** situ_gene
** File description:
** my_printf normal situations
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

void normal_situ(char *begin, va_list arg)
{
    switch (*begin) {
    case '%':
        my_putchar('%');
        break;
    case 'p':
        my_putstr("0x");
        situ_x(arg);
        break;
    default:
        situ_special(begin,arg);
        break;
    }
}

void situ_gene(char *begin, va_list arg)
{
    switch (*begin) {
    case 'c':
        my_putchar(va_arg(arg, int));
        break;
    case 'd': case 'i':
        my_put_nbr(va_arg(arg, int));
        break;
    case 's':
        my_putstr(va_arg(arg, char*));
        break;
    case 'f':
        get_float(va_arg(arg, double));
        break;
    default:
        normal_situ(begin,arg);
        break;
    }
}
