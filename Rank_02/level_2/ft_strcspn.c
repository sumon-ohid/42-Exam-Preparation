// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

#include <stdio.h>
#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while(s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            j++;   
        }
        i++;
    }
    return (i);
}

int main()
{
    const char *s1 = "Hello World";
    const char *s2 = "World";
    size_t i = ft_strcspn(s1, s2);
    size_t j = strcspn(s1, s2);
    printf("%zu\n", i);
    printf("%zu\n", j);
    return (0);
}