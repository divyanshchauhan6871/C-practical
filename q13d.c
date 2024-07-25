#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void f1(){
    static int i=1;
    printf("%d ",i);
    i++;
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        f1();
    }
    return 0;
}