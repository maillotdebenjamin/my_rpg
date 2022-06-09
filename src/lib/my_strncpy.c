/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *scr, char *dest, char limite)
{
    int i = 0;

    if (!dest || !scr) {
        return ("");
    }
    while (scr[i] != '\0' && scr[i] != limite) {
        dest[i] = scr[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}