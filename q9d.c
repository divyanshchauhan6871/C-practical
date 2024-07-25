#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of first array : ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    int *ptrarr1=arr1,*ptrarr2=arr2;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of first array : ");
        scanf("%d",ptrarr1+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of second array : ");
        scanf("%d",ptrarr2+i);
    }
    printf("printing first array\n");
    for (int i = 0; i < n; i++)
    {
        printf("First array element is %d.\n",*(ptrarr1+i));
    }
    printf("printing second array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Second array element is %d.\n",*(ptrarr2+i));
    }
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        temp=*(ptrarr1+i);
        *(ptrarr1+i)=*(ptrarr2+i);
        *(ptrarr2+i)=temp;
    }
    
    printf("After swapping printing first array\n");
    for (int i = 0; i < n; i++)
    {
        printf("First array element is %d.\n",*(ptrarr1+i));
    }
    printf("After swapping printing second array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Second array element is %d.\n",*(ptrarr2+i));
    }

    
    return 0;
}