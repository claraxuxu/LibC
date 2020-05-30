/*
** claraxuxu, 2019
** my_lib_str
** File description:
** header file
*/

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int my_getnbr(char *str);

//str_output
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);

//str_mix
char *my_strcat(char *dest, const char *src);

//transfer str and int
int my_atoi_char(char src);
int my_atoi(char *src);
char *my_itoa(int nb);

//str_compare
int my_strcmp(char *str1, char *str2);

//str_copy
char *my_strncpy(char *res, char *line, int len);
char *my_strcpy(char *res, char *line);
char *my_strdup(char *src);

//alloc
char *my_realloc(char *str, int size);
char *my_memset(int size, char with_what);

//my_len
int my_strlen(char const *str);
int my_nblen(int nbr);
int my_tablen(char **tab);

//str_is...
int my_isspace(char c);
int my_str_isnum(char *str);
int my_str_isalpha(char *str);

//split
char **my_strsplit(char *str, char c);