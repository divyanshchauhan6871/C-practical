#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee{
    char name[20];
    float salary;
    char joindate[20];
};
int main()
{
    struct employee s1;
    printf("enter yor name : ");
    gets(s1.name);
    printf("Enter your salary : ");
    scanf("%d",&s1.salary);    
    printf("Enter your joining date : ");
    scanf("%s",s1.joindate);
    printf("Your name is %s with joining date : \" %s \" and your salary: %d.",s1.name,s1.joindate,s1.salary);
    return 0;
}