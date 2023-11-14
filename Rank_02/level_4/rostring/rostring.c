#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

void rostring(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int len = ft_strlen(str);
    char **s = (char **)malloc(sizeof(char *) * len + 1);
    if (!s)
        return;
    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            k = 0;
            s[j] = (char *)malloc(sizeof(char) * 1);
            if (!s)
                return ;
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                s[j][k++] = str[i++];
            s[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    j = 1;
    while (s[j])
    {
        ft_putstr(s[j]);
        write (1, " ", 1);
        j++;
    }
    ft_putstr(s[0]);
}

int main(int ac, char **av)
{
    if (ac > 1)
        rostring(av[1]);
    write (1, "\n", 1);
    return (0);
}
