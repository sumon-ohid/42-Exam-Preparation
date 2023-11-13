#include <unistd.h>

void epur_str(char *str)
{
    int i = 0;

    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i])
    {
        while (str[i] && (str[i] != ' ' || str[i] == '\t'))
        {
            write(1, &str[i], 1);
            i++;
        }
        if (str[i] == ' ' || str[i] == '\t')
        {
            while (str[i] == ' ' || str[i] == '\t')
                i++;
            if (str[i])
            write(1, " ", 1);
        }
    } 
}

int main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    write (1, "\n", 1);
    return (0);
}