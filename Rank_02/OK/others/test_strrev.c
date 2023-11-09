#include <unistd.h>
#include <stdio.h>

int    strln(char *str)
{
    int    i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strrev(char *str)
{
    int    left;
    int    right;
    char    temp;

    left = 0;
    right = strln(str) - 1;

    if (!str)
        return (NULL);
    while (left < right)
    {
        temp = str[right];
        str[right] = str[left];
        str[left] = temp;
        left++;
        right--;
    }
    return (str);
}

int    main()
{
    char    str[] = "Hello World";
    printf("%s\n",ft_strrev(str));
    return (0);
}