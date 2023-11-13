#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void rev_wstr(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int len = ft_strlen(str);
    char **rev = (char **)malloc(sizeof(char *) * len + 1);
    if (!rev)
        return ;
    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            rev[j] = (char *)malloc(sizeof(char) * len + 1);
            if (!rev[j])
                return ;
            k = 0;
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                rev[j][k++] = str[i++];
            rev[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    j--;
    while ( j>= 0)
    {
        ft_putstr(rev[j]);
        if (j > 0)
            write (1, " ", 1);
        j--;
    }
    write (1, "\n", 1);
    free(rev);}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        rev_wstr(av[1]);
    }
    else
        write(1, "\n", 1);
    return (0);
}