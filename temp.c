#include <stdio.h>
#define print(x) printf("%d",x)
#define MUL(x,y) x*y
#define MAX(a,b) (a>b)?printf("%d",a):print(b)
void main()
{ 
    MAX(2,5);
}