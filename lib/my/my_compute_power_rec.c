/*
** EPITECH PROJECT, 2021
** MY COMPUTE POWER REC
** File description:
** ...
*/

int my_compute_power_rec(int nb,  int p)
{
    if (p < 0)
        return 0;
    else if (p == 0)
        return 1;
    return nb * my_compute_power_rec(nb, p = p -1);
}