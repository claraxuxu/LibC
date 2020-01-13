/*
** EPITECH PROJECT, 2019
** my_pow
** File description:
** pow(x,y) = x ^ y
*/

unsigned long my_pow(int a, int b)
{
    unsigned long res = 1;

    while (b--)
        res *= a;
    return (res);
}
