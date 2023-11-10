#include <stdio.h>
#include <stdlib.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char temp;

    while(str[len])
        len++;
    while (i < len--)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
    }
    return (str);
}

// int main(void)
// {
//     char s1[] = "Hello World!";
//     char *s2 = ft_strrev(s1);
//     printf("%s\n", s2);
//     return (0);
// }