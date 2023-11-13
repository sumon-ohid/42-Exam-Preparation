#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int	i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	**ft_split(char *str)
{
    char	**split;
    int		i;
    int		j;
    int		k;
    int		len;

    i = 0;
    j = 0;
    k = 0;
    len = ft_strlen(str);
    split = (char **)malloc(sizeof(char *) * (len + 1));
    if (!split)
        return (NULL);
    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            split[j] = (char *)malloc(sizeof(char) * (len + 1));
            if (!split[j])
                return (NULL);
            k = 0;
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                split[j][k++] = str[i++];
            split[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    split[j] = NULL;
    return (split);
}

// int main(void)
// {
//     char input_string[] = "Hello World This is a\ttest";
//     char **result = ft_split(input_string);

//     if (!result)
//     {
//         printf("Memory allocation error\n");
//         return 1;
//     }
//     printf("Original string: %s\n", input_string);
//     printf("Result:\n");
//     int i = 0;
//     while (result[i] != NULL)
//     {
//         printf("%s\n", result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return 0;
// }
