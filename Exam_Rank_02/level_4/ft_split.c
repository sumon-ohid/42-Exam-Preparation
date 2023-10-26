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
    int i;
    int j;
    int k;
    char **split; // **split = split[][]

    i = 0;
    j = 0;
    split = (char **)malloc(sizeof(char *) * ft_strlen(str));
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            split[j] = (char *)malloc(sizeof(char) * ft_strlen(&str[i]) + 1);
            k = 0;
            while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                split[j][k++] = str[i++];
            split[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    //split[j] = NULL;
    free(split[j]);
    return (split);
}

int main()
{
    int i = 0;
    char *str = "Hello This is a sentence.";
    char **split = ft_split(str);

    if (split)
    {
        while (split[i] != NULL)
        {
            printf("%s\n", split[i]);
            i++;
        }
        free(split);
    }
    return (0);
}