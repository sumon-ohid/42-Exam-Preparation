// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **temp;
    int len = ft_strlen(str);

    temp = (char **)malloc(sizeof(char *) * len);
    if (!temp)
        return (NULL);
    while(str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            temp[j] = (char *)malloc(sizeof(char));
            k = 0;
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
                temp[j][k++] = str[i++];
            temp[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    return (temp);
}

int main()
{
    int i = 0;
    char *str = "Hello This is a sentence.";
    char **split = ft_split(str);

    if (split)
    {
        while (split[i])
        {
            printf("%s\n", split[i]);
            i++;
        }
        free(split);
    }
    return (0);
}