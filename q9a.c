#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int *ptra=&a,*ptrb=&b;
    printf("Enter first value : ");
    scanf("%d",ptra);
    printf("Enter second value : ");
    scanf("%d",ptrb);
    printf("sum of numbers you added is %d",*ptra+*ptrb);
    return 0;
}