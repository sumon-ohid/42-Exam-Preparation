#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s, const char *reject)
{
	size_t	j;

	j = 0;
	if (!s || !reject)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (reject[j])
		{
			if (*s == reject[j])
				return ((char *)s);
			j++;
		}
		s++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *s1 = "Hhhhlllello";
//     char *s2 = "ell";
//     char *res;
//     res = ft_strpbrk(s1, s2);

//     printf("ft_strpbrk : %s\n", res);

//     res = strpbrk(s1, s2);
//     printf("strpbrk : %s\n", res);
//     return (0);
// }