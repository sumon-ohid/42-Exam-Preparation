#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *temp, char *str)
{
    int i = 0;
    int j = 0;
    while (str[i])
    {
        temp[j] = str[i];
        i++;
        j++;
    }
    temp[j] = '\0';
    return (temp);
}

typedef struct
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
} student;

struct abc 
{
    int x;
    int y;
};

int main(void)
{
    student sumon;

    sumon.age = 26;
    ft_strcpy (sumon.name , "Sumon");
    ft_strcpy (sumon.id , "06612543");
    sumon.grades[0] = 4;
    sumon.grades[1] = 5;
    sumon.grades[2] = 4;
    sumon.grades[3] = 5;
    sumon.grades[4] = 5;

    printf("Age : %d\n", sumon.age);
    printf("Name : %s\n", sumon.name);
    printf("Id : %s\n", sumon.id);
    printf("Grades : ");
    int i = 0;
    while (i < 5)
    {
        printf("%d ", sumon.grades[i]);
        i++;
    }
    printf("\n");

    printf("This is another example\n");

    struct abc a = {10, 5};
    struct abc *ptr = &a;

    printf("%d %d\n", ptr->x , ptr-> y);  // same as ( *ptr).x or a.x , a.y
    return (0);
}