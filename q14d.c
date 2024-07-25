#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n=5;
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    printf("Enter the array elements : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",ptr+i);
    }
    printf("printing the array elements :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(ptr+i));
    }   
    return 0;
}