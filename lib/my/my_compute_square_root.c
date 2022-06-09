/*
** EPITECH PROJECT, 2021
** MY COMPUTE SQUARE ROOT
** File description:
** ...
*/

int my_compute_square_root(int nb)
{
    int tour = 0;
    int b = -1;
    int result = nb;
    int a;

    while ( nb > 0) {
        b += 2;
        nb -= b;
        tour += 1;
    }

    a = tour*tour;

    if (result != a)
        return 0;
    else
        return tour;
}
