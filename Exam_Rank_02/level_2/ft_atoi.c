// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

#include <stdio.h>
#include <unistd.h>

int ft_atoi(const char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str)
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (sign * result);
}

int	main(void)
{
	int	result;

	result = ft_atoi("66665");
	printf("%d\n", result);
	return (0);
}
