// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    i = 0;
    j = 0;
    if (!str)
        return (NULL);
    while (str[i] != '\0')
        i++;
    i = i - 1;
    while (j < i)
    {   
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
    return (str);
}

int main()
{
    char s1[] = "Hello";
    char *s2 = ft_strrev(s1);
    printf("%s\n", s2);
    return (0);
}