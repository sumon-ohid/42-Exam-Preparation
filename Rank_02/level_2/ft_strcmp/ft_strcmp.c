#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            break;
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char *s1 = "Hello";
    char *s2 = "Hello";
    int res = ft_strcmp(s1, s2);

    printf("ft_strcmp : %d\n", res);

    res = strcmp(s1, s2);
    printf("strcmp : %d\n", res);
    return (0);
}