#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of first array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter first array element :");
        scanf("%d",&arr[i]);
    }
    int * arrpointer1=arr;
    int arr2[n];
    int * arrpointer2=arr2;
    for (int i = 0; i < n; i++)
    {
        *(arrpointer2+i)=*(arrpointer1+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Second array element is %d.\n",*(arrpointer2+i));
    }
    
    
    return 0;
}