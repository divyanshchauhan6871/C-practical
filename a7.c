#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int findminimum(int arr[],int n){
    int a=arr[0];
    for (int i=1;i<n;i++)
    {
        if (a>arr[i])
        {
            a=arr[i];
        }
    }
    return a;    
}
int findmaximum(int arr[],int n){
    int a=arr[0];
    for (int i=1;i<n;i++)
    {
        if (a<arr[i])
        {
            a=arr[i];
        }
    }
    return a;    
}
int findsumofarray(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the size of array : ");
    scanf("%d",&num);
    int arr[num];
    for (int i=0;i<num;i++)
    {
        printf("Enter the array element : ");
        scanf("%d",&arr[i]);
    }
    
    printf("The smallest element in the array is %d.\n",findminimum(arr,num));
    printf("The greatest element in the array is %d.\n",findmaximum(arr,num));
    printf("The sum of elements in the array is %d.\n",findsumofarray(arr,num));
    
    return 0;
}