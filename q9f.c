#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of first array : ");
    scanf("%d",&n);
    int arr[n];
    int *ptrarr=arr;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array element : ");
        scanf("%d",ptrarr+i);
    }
    int temp;
    printf("Enter element to be searched : ");
    scanf("%d",&temp);
    for (int i = 0; i < n; i++)
    {
        if (*(ptrarr+i)==temp)
        {
            printf("Element found at %d position.",i+1);
            break;
        }
        if (i!=n-1)
        {
            continue;
        }
        printf("Element not found.");
        
        
    }
    
    
    return 0;
}