#include <unistd.h>

void last_word(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            j = i + 1;
        i++;
    }
    while (str[j] && str[j] != ' ')
    {
        write (1, &str[j], 1);
        j++;
    }
}
// hardcode
// void last_word(char *str)
// {
//     int i = 0;

//     while(str[i])
//         i++;
//     i = i - 1;
//     while(str[i] == ' ' || str[i] == '\t')
//         i--;
//     if (i < 0)
//         return ;
//     while (str[i] != ' ' && str[i] != '\t')
//         i--;
//     i = i + 1;
//     while (str[i] && str[i] != ' ' && str[i] != '\t')
//     {
//         write (1, &str[i], 1);
//         i++;
//     }
// }

// int main(int ac, char **av)
// {
//     if (ac == 2)
//         last_word(av[1]);
//     write (1, "\n", 1);
//     return (0);
// }