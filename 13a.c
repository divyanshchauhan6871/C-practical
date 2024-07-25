#include<stdio.h>
#define '-' MINUS
// #define SUM(x,y) x+y
// #define MINUS(x,y) x-y
// #define MULT(x,y) x*y
// #define DIVIDE(x,y) x/y
int main()
{
    printf("Sum of 5, 8.4 is %f.\n",SUM(5,8.4));
    printf("Difference of 5, 8.4 is %f.\n",MINUS(5,8.4));
    printf("Product of 5, 8.4 is %f.\n",MULT(5,8.4));
    printf("Quotient of 8, 3 is %d.\n",DIVIDE(8,3));
    return 0;
}