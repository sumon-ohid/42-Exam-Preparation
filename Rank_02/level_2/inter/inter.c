#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (s1[i])
	{
        j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				k = 0;
				while (k < i)
				{
					if (s1[k] == s1[i])
						break ;
					k++;
				}
				if (k == i)
					write(1, &s1[i], 1);
                break;
			}
            j++;
		}
		i++;
	}
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		inter(av[1], av[2]);
// 	write(1, "\n", 1);
// 	return (0);
// }
