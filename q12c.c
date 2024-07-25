#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct percentage
{
    float marks;
};
typedef struct student
{
    char name[20];
    struct percentage percent;
}st;
int main()
{
    st s1;
    printf("enter yor name : ");
    gets(s1.name);
    printf("Enter your marks : ");
    scanf("%f", &s1.percent.marks);
    printf("Your name is %s with percentage = %f%%.", s1.name, s1.percent.marks);

    return 0;
}