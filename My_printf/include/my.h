/*
** EPITECH PROJECT, 2019
** header file
** File description:
** prototypes of all the functions in lib
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int my_strlen (char const *);
int my_putstr(char const *);
void my_put_usnbr(long nb);
void my_putchar(char);
unsigned long my_pow(int a, int b);
void get_octal(int num);
void get_float(double f);
void situ_x(va_list arg);
void situ_x_mas(va_list arg);
void res_dif_int(int num, int base);
void get_binary(int num);
void get_hex(int num);
void get_float(double f);

void situ_gene(char *begin, va_list arg);
void situ_special(char *begin, va_list arg);

