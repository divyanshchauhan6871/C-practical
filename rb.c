#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int *arrpointer[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array element : ");
        scanf("%d",arr+i);
    }
    for (int i = 0; i < n; i++)
    {
        (arrpointer[i])=arr+i;
    }    
    printf("Printing the array elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",**(arrpointer+i));
    }    
    return 0;
}