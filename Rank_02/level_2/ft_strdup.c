// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src)
{
    int i;
    char *temp;

    i = 0;
    while (src[i] != '\0')
        i++;
    temp = (char *)(malloc(sizeof(char) * i + 1));
    if (!src)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        temp[i] = src[i];
        i++;
    }
    temp[i] = '\0';
    return (temp);
}

int main()
{
    char *s1 = "Hello World";
    char *s2 = ft_strdup(s1);
    char *s3 = strdup(s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    return (0);
}