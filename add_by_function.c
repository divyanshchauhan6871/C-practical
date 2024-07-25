#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(int,int);
int main()
{
    int a = 10, b = 50;
    int c=sum(a,b);
    printf("%d",c);
    sum(10,50);
    sum(5,5);
    sum(5,65);
    sum(5,68);
    c++;
    printf("%d",c);
    return 0;
}
int sum(int a, int z)
{
    return a+z;
}