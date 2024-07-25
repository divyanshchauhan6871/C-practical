#include<stdio.h>
int ackermann(int,int);
int main()
{
    int a,b;
    printf("Enter the arguments of function : ");
    scanf("%d %d",&a,&b);
    printf("Ackermann(%d,%d)=%d",a,b,ackermann(a,b));   
    return 0;
}
int ackermann(int a,int b){
    if (a==0)
    {
        return b+1;
    }
    else if (a>0 && b==0)
    {
        return ackermann(a-1,1);
    }
    else{
        return ackermann(a-1,ackermann(a,b-1));
    }
}