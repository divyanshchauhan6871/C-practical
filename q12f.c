#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int roll;
    float marks;
};

int main()
{
    int n;
    printf("Enter the numbers of students : ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll number of students : ");
        scanf("%d", &s[i].roll);
        printf("Enter the marks of students : ");
        scanf("%f", &s[i].marks);
    }
    printf("printing details : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll number of students %d is : %d and ",i,s[i].roll);
        printf("Marks of students %d is : %f.\n",i,s[i].marks);
    }

    return 0;
}