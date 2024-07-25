#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
    int roll;
    float marks;
}st;
typedef union teacher
{
    int roll;
    char joindate[10];
}teach;

int main()
{
    st s1;
    s1.roll=2336548;
    s1.marks=68.7;
    teach t1;
    t1.roll=521;
    printf("student 1 roll numbers is %d.\n",s1.roll);
    printf("student 1 marks is %f.\n",s1.marks);
    printf("teacher 1 join numbers is %d.\n",t1.joindate);    
    printf("Size of student structure is %d.\n",sizeof(s1));
    printf("Size of teacher union is %d.\n",sizeof(t1));
    return 0;
}