#include <stdio.h>
#include<math.h>
void factorial(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int prod = 1;
    for (int i = 1; i <= n; i++)    {
        prod *= i;    }
    printf("The factorial of number %d is %d.\n", n, prod);}
void exponent(){
    int a,b;
    printf("Enter the number whose power is to be calculated : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    printf("%d raised to the powers %d is %f.\n",a,b,pow(a,b));}
void add_digit(){
    int n,p;
    printf("Enter the number : ");
    scanf("%d",&n);
    p=n;
    int sum=0;
    while (n!=0)    {
        int rem;
        rem=n%10;
        sum+=rem;
        n/=10;}
    printf("Sum of digits of %d is %d.\n",p,sum);}
int main(){
    int i;
    do{
        printf("\nEnter\n1 for factorial\n2 for exponent\n3 for sum of digits\nOther to exit\n");
        scanf("%d", &i);
        if (i >= 4 || i < 1)
            return 0;
        switch (i){
        case 1:
            factorial();
            break;
        case 2:
            exponent();
            break;
        default:
            add_digit();}
    } while (1);
    return 0;}