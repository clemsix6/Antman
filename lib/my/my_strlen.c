/*
** EPITECH PROJECT, 2021
** MY STRLEN
** File description:
** ...
*/

int my_strlen(char const *str)
{
    int i = 0;
    int a = 0;

    while (str[i] != 0) {
        a += 1;
        i += 1;
    }
    return a;
}