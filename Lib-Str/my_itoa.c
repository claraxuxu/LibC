/*
**  claraxuxu, 2020
** my_itoa
** File description:
** change int to str mode
*/

#include "lib_str.h"

char *my_itoa(int nb)
{
    int nb_len = my_nblen(nb);
    char *result = (void *)0;
    bool is_negative = nb < 0 ? true : false;

    if (nb == 0)
        return (my_strdup("0"));
    result = malloc(sizeof(char) * (nb_len + 1));
    nb = is_negative == true ? nb * -1 : nb;
    result[nb_len] = '\0';
    for (int i = nb_len - 1; i > -1; i--) {
        result[i] = (nb % 10) + 48;
        nb = nb / 10;
    }
    return (is_negative == true ? my_strcat("-", result) : result);
}