#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int	main(void)
// {
// 	char src[] = "Hello World.";
// 	char *dest;
// 	dest = (char *)malloc(sizeof(char) * strlen(src) + 1);
// 	if (!dest)
// 		return (0);
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	free(dest);
// 	return (0);
// }