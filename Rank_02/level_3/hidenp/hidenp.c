#include <unistd.h>
char hideup(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char c = '0';

    while (s1[i] && s2[j])
    {
        if (s1[i] == s2[j])
        {
            i++;
        }
        j++;
    }
    if (!s1[i])
        c = '1';
    return (c);
}

int main(int ac, char **av)
{
    char c;
    if (ac == 3)
    {
        c = hideup(av[1], av[2]);
        write (1, &c, 1);
    }
    write (1, "\n", 1);
    return (0);
}