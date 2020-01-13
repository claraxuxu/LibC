/*
** EPITECH PROJECT, 2019
** unit_test
** File description:
** for my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include/my.h"

int my_printf(char *str, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, all, .init = redirect_all_std)
{
    int i = 2;
    int j = -88888;
    float f = 1.12;

    my_printf("%d%o%x%X%c%f%s%%%u%p%#x %#X %#o %+d\n",i,i,i,i,'c',
              f,"okok",j,i,i,i,i,i);
    cr_assert_stdout_eq_str("2222c1.120000okok%42948784080x20x2 0X2 02 +2");
}
