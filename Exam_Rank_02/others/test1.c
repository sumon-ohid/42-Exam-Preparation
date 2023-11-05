#include <unistd.h>

char    *rev_print(char *str)
{
        int i = 0 ;

        char *temp;
        temp = str;
        while(temp[i])
        {
                i++;
        }
        while(i)
        {
                write(1, &temp[i-1], 1);
                i--;
        }
        return (str);
}

int     main()
{
        rev_print("rainbow dash");
        write(1, "\n", 1);
        rev_print("Ponies are awesome");
        write(1, "\n", 1);
        rev_print("");
        write(1, "\n", 1);
        return (0);
}
