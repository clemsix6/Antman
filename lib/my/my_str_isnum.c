/*
** EPITECH PROJECT, 2021
** MY STR IS NUM
** File description:
** ...
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    for (int a = 0; a < my_strlen(str); a++) {
        if (str[a] < 48 || str[a] > 57) {
            return 0;
        }
    }
    return 1;
}