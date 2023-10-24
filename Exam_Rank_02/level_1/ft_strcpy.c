// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(void)
{
    char s1[] = "Hello";
    char *s2 = "World";
    ft_strcpy(s1, s2);
    printf("My ft_strcpy : %s\n", s1);
    strcpy(s1, s2);
    printf("Original strcpy : %s\n", s1);
    return (0);
}