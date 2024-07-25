#include<stdio.h>
#include<string.h>
typedef struct student{
    // char name[20];
    short r;
    int rollno;
    float f;
}s;
int main()
{
    s s1;
    // printf("%d",sizeof(s1));
    s * ptr=&s1;
    printf("enter yor name : ");
    gets(ptr->name);
    printf("Enter your roll number : ");
    scanf("%d",&ptr->rollno);
    printf("Your name is %s and your roll number is %d.",ptr->name,ptr->rollno);
    return 0;
}