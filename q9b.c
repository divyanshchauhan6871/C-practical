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
    printf("Numbers before swapping are a=%d b=%d.\n",a,b);
    int c=*ptra;
    *ptra=*ptrb;
    *ptrb=c;
    printf("Numbers after swapping are a=%d b=%d.",a,b);
    return 0;
}