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
    printf("Printing the array before reversing : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(ptrarr+i));
    }
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=*(ptrarr+i);
        *(ptrarr+i)=*(ptrarr+n-1-i);
        *(ptrarr+n-i-1)=temp;
    }
    printf("Printing the array after reversing : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(ptrarr+i));
    }
    

    
    return 0;
}