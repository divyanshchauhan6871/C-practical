#include<stdio.h>
#define DISPLAYARRAY(arr,n) for (int i=0;i<n;i++)\
{\
printf("%d ",arr[i]);\
}\

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    DISPLAYARRAY(arr,10);
    return 0;
}