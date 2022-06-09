/*
** EPITECH PROJECT, 2021
** MY IS PRIME
** File description:
** ...
*/

int my_is_prime (int nb)
{
    int i = 2;

    while ( i <= nb && nb % i != 0 ) {
        i++;
    }
    if (nb == i)
        return 1;
    else
        return 0;
}