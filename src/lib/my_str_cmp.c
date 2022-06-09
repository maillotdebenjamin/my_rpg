/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_str_cmp.c
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (!s1 || !s2) {
        return (1);
    }
    for (; s1[i] && s2[i]; i++) {
        if (s1[i] != s2[i]) {
            return (1);
        }
    }
    return (s1[i] != s2[i]) ? (1) : (0);
}