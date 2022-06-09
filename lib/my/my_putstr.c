/*
** EPITECH PROJECT, 2021
** MY PUTSTR
** File description:
** ...
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char *str)
{
    int i = 0;
    while (str[i] != 0 ) {
        my_putchar(str[i]);
        i += 1;
    }
    return 0;
}