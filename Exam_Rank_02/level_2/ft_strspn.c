// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;
    int res;

    res = 0;
    i = 0;
    j = 0`;
    while (s[i] != '\0' && *accept)
    {
        if (s[i] == *accept)
        {
            accept++;
            j++;
        }
        i++;
    }
    return (j);
}

int main()
{
    char *s1 = "HelloWorld";
    char *s2 = "HeW";
    int i = strspn(s1, s2);
    printf("%d\n", i);
    i = ft_strspn(s1, s2);
    printf("%d\n", i);
    return (0);
}