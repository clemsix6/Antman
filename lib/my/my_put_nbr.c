/*
** EPITECH PROJECT, 2021
** MY PUTNBR
** File description:
** ...
*/

#include <unistd.h>

void my_putchar(char c);

void my_putnbr(int nb)
{
    int tmp;
    tmp = nb;

    if (tmp < 0) {
        my_putchar('-');
        nb = -tmp;
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
    else {
        my_putchar(nb + '0');
    }
}