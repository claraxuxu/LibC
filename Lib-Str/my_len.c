/*
** claraxuxu, 2019
** my_strlen
** File description:
** count number of string
*/

#include "lib_str.h"

int my_strlen(char const *str)
{
    int a;

    for (a = 0; str[a]; a++);
    return (a);
}

int my_nblen(int nbr)
{
    int res = 0;

    nbr = nbr < 0 ? nbr * (-1) : nbr;
    if (nbr == 0) return (0);
    for (; nbr > 0; nbr /= 10) res++;
    return (res);
}

int my_tablen(char **tab)
{
    int res = 0;

    if (tab[0] == NULL) return (0);
    for (; tab[res] && tab[res] != NULL; res++);
    return (res);
}