/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** write printf
*/

#include <stdio.h>
#include <stdarg.h>
#include "include/my.h"

int judge(char *begin)
{
    if ((*(begin + 1) >= 'a' && *(begin + 1) <= 'z' ||
         *(begin + 1) >= 'A' && *(begin + 1) <= 'Z' ) ||
        *(begin + 1) == '#' || *(begin + 1) == '%' ||
        *(begin + 1) == '+')
        return (1);
    else
        return (0);
}

int my_printf(char *format,...)
{
    va_list arg;
    va_start(arg, format);
    char *begin = format;

    while (*begin != '\0') {
        if ((*begin == '%') && (judge(begin) == 1)) {
            begin++;
            situ_gene(begin,arg);
        } else {
            if ((*(begin - 1) == '#' || *(begin - 1) == '+')
                && *(begin + 1) != '%')
                *begin++;
            my_putchar(*begin);
        }
        *begin++;
    }
    va_end(arg);
    return (0);
}
int main()
{
    my_printf("hello world"); //edit your cmd here
    return (0);
}
