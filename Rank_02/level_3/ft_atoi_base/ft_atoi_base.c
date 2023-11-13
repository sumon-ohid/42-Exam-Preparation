#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    int  base = str_base;

    if (str[0] == '-')
    {    
        sign = -1;
        i++;
    }

    while(str[i] != '\0')
    {
        
       if (base > 10 && (str[i] >= 'a' && str[i] <= 'f'))
        {
            result = result * base;
            result = result + str[i] - 'a' + 10;
        }
        else if(base > 10 && (str[i] >= 'A' && str[i] <= 'F'))
        {
            result = result * base;
            result = result + str[i] - 'A' + 10;
        }
        else if ((str[i] >= '0' && str[i] <= '9'))
        {
            result = result * base;
            result = result + str[i] - '0';
        }
        else
            break;
        i++;
    }
    return (result * sign);
}

int main(void)
{
    char *str = "10A";
    int base = 16;
    int res = ft_atoi_base(str, base);
    printf("%d\n", res);
    return (0);
}