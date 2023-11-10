#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] + 32);
		else if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 32);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ulstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
