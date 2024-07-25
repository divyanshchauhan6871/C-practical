#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct teacher{
    char gender;
    int roll;
};
union student
{
    char gender;
    int roll;
};
int main()
{
    struct teacher teach1,teach2;
    teach1.roll=7887;
    teach1.gender='M';
    teach2.roll=4215;
    teach2.gender='F';
    union student st1,st2;
    st1.gender='F';
    st2.roll=87731;
    printf("%d\n",sizeof(char));
    printf("Size of teacher structure is %d.\n",sizeof(teach1));
    printf("Size of teacher structure is %d.\n",sizeof(teach2));
    printf("Size of student union is %d.\n",sizeof(st1));
    printf("Size of student union is %d.\n",sizeof(st2));

    return 0;
}