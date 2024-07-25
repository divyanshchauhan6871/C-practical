#include<stdio.h>
#define volume(x) (4*3.141592653*x*x*x)/3
int main()
{
    printf("Volume of sphere with radius 5cm is %fcubic cm.\n",volume(5));
    printf("Volume of sphere with radius 10cm is %fcubic cm.\n",volume(10));
    printf("Volume of sphere with radius 15cm is %fcubic cm.\n",volume(15));
    return 0;
}