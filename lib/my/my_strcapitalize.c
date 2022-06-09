/*
** EPITECH PROJECT, 2021
** MY STR CAPITALIZE
** File description:
** ...
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str);

int my_putstr(char const *str);

char *my_strcapitalize(char *str)
{
    for (int a = 0; a < my_strlen(str); a++) {
        if ((64 < str[a]) && (str[a] < 91)) {
            str[a] += 32;
        }
    }
    for (int a = 1; a < my_strlen(str) - 1; a++) {
        if (a == 1 && str[a] >= 'a' && str[a] <= 'z') {
            str[a - 1] = str[a - 1] - 32;
        }
        if (str[a - 1] == ' ' && str[a] <= 'z') {
            str[a] = str[a] - 32;
        }
    }
    my_putstr(str);
    return str;
}