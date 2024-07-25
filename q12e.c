#include <stdio.h>
#include <string.h>
union student
{
    short id;
    float marks;
    char name[15];
};
int main()
{
    union student s1,s2;
    s1.id = 45;
    s2.marks=65.42;
    printf("sizeof s1 is %d.\n",sizeof(s1));
    printf("sizeof s2 is %d.\n",sizeof(s2));
    return 0;
}