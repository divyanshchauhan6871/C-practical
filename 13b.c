#include<stdio.h>
#define areaofsphere(x) (4*3.1415939*x*x*x)/3
int main()
{
    printf("Area of sphere with radius 7 is %f.\n",areaofsphere(5));
    printf("Area of sphere with radius 10 is %f.\n",areaofsphere(10));
    printf("Area of sphere with radius 15 is %f.",areaofsphere(15));
    return 0;
}