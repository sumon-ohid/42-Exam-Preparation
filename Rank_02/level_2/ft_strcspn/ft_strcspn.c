#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j = 0;

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
            {
                return (i);
            }
            j++;
        }
        i++;
    }
    return (i);
}

// int main(void)
// {
//     char *s1 = "Hhhhlllello";
//     char *s2 = "ell";
//     int res = ft_strcspn(s1, s2);

//     printf("ft_strcspn : %d\n", res);

//     res = strcspn(s1, s2);
//     printf("strcspn : %d\n", res);
//     return (0);
// }