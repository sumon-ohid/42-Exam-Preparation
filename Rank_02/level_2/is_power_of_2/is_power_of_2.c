#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	return (n > 0) && ((n & (n - 1)) == 0);
}

// int	main(void)
// {
// 	int	num;

// 	printf("Enter a number: ");
// 	scanf("%d", &num);
// 	if (is_power_of_2(num))
// 	{
// 		printf("%d is a power of 2.\n", num);
// 	}
// 	else
// 	{
// 		printf("%d is not a power of 2.\n", num);
// 	}
// 	return (0);
// }
