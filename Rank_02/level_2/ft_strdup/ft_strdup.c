#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src)
{
    char *str;
    int i = 0;

    while (src[i])
        i++;
    str = (char *)malloc(sizeof(char) * i + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

// int main (void)
// {
//     char *s1 = "Hello";
//     char *s2 = ft_strdup(s1);
//     printf("ft_strdup : %s\n", s2);
//     free(s2);
//     s2 = strdup(s1);
//     printf("strdup : %s\n", s2);
//     free(s2);
//     return (0);
// }