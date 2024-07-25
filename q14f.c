#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n=3;
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the 3 array elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
    }
    printf("printing the array elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    ptr=realloc(ptr,n*sizeof(int));
    n=5;
    printf("\nEnter the 5 array elements again :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
    }
    printf("printing the array elements after reallocating :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}