#include <unistd.h>

void    inter(char *s1, char *s2)
{
    int i = 0;
    int j =;

    while (s1[i])
    {
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                int k = i - 1;
                while (k >= 0 && s1[k] != s1[i])
                {
                    k--;
                    if (k < 0)
                        write(1, &s1[i], 1);
                }
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}
