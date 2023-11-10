#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break ;
			j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	const char	*s1 = "Hello";
// 	const char	*s2 = "Ho";
// 	size_t		res;

// 	res = strspn(s1, s2);
// 	printf("Original: %zu\n", res);
// 	res = ft_strspn(s1, s2);
// 	printf("ft: %zu\n", res);
// 	return (0);
// }
