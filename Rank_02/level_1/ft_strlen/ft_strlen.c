#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char *str = "Hello World!";
// 	int len = ft_strlen(str);
// 	printf("Length of the string is : %d\n", len);
// 	return (0);
// }