#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[20];
    int rollno;
};

// struct student make(){
//     struct student s;
//     printf("Enter the name :");
//     scanf("%[^\n]s",s.name);
//     printf("Enter the roll number : ");
//     scanf("%d",&s.rollno);
//     return s;
// }
int main()
{
    struct student s1;
    printf("enter yor name : ");
    scanf("%[^\n]s",s1.name);
    printf("Enter your roll number : ");
    scanf("%d",&s1.rollno);
    printf("Your name is %s and your roll number is %d.",s1.name,s1.rollno);

    // struct student s;
    // s=make();
    // printf("%s",s.name);
    return 0;
}