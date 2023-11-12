#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

void ft_union(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    i = ft_strlen(s1);
    while (s2[j])
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    i = 0;
    while (s1[i])
    {
        j = 0;
        while (j < i)
        {
            if (s1[i] == s1[j])
                break;
            j++;
        }
        if (j == i)
			write(1, &s1[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);   
    write (1, "\n", 1);
    return (0);
}