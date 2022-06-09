/*
** EPITECH PROJECT, 2021
** MY STRUPCASE
** File description:
** ...
*/

int my_strlen(char const *str);

char *my_strupcase(char *str)
{
    for (int a = 0; a < my_strlen(str); a++) {
        if ((96 < str[a]) && (str[a] < 123)) {
            str[a] = str[a] -= 32;
        }
    }
    return str;
}