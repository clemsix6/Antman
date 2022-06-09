/*
** EPITECH PROJECT, 2021
** MY STR IS PRINTABLE
** File description:
** ...
*/

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    for (int a = 0; a < my_strlen(str); a++) {
        if (str[a] <= 31) {
            return 0;
        }
    }
    return 1;
}