/*
** EPITECH PROJECT, 2019
** my_difnum
** File description:
** get number of different base
*/

int my_put_nbr(int nb);

void res_dif_int(int num, int base)
{
    if (num == 0)
        return;
    else {
        res_dif_int(num / base, base);
        my_put_nbr(num % base);
    }
}
