#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void is_prime(int n)
{
    if (n == 1)
    {
        printf("1 is niethe prine nor composite");
    }
    else
    {
        int i = 2, flag;
        for (i; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("number is not prime");
        else
            printf("number is prime");
    }
}

void is_armstrong(int n)
{
    int p = n, i = 0;
    while (p != 0)
    {
        i++;
        p = p / 10;
    }
    int sum = 0;
    p = n;
    while (n != 0)
    {
        int rem = n % 10;
        sum += pow(rem, i);
        n = n / 10;
    }
    if (p == sum)
    {
        printf("%d is an Armstrong numebr.\n", p);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", p);
    }
}

void NCR(int n, int r)
{
    int a = 1, b = 1, c = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    for (int i = 1; i <= r; i++)
    {
        b = b * i;
    }
    for (int i = 1; i <= n - r; i++)
    {
        c = c * i;
    }
    printf("%dC%d is : %d", n, r, a / (b * c));
}

void NPR(int n, int r)
{
    int a = 1, c = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    for (int i = 1; i <= n - r; i++)
    {
        c = c * i;
    }
    printf("%dP%d is : %d", n, r, a / c);
}

void to_upper(char c)
{
    int i = c;
    if (i > 96 && i < 123)
    {
        printf("%c", i - 32);
    }
    else
    printf("You have entered wrong input");
}

void to_lower(char c)
{
    int i = c;
    if (i > 64 && i < 91)
    {
        printf("%c", i + 32);
    }
    else
    printf("You have entered wrong input");
}

void is_lower(char c){
    int i=c;
    // printf("%d",i);    
    if (i > 96 && i < 123)
    {
        printf("Lower case");
    }
    else
        printf("False");
}

void is_upper(char c){
    int i=c;
    // printf("%d",i);    
    if (i > 65 && i < 91)
    {
        printf("Upper case");
    }
    else
        printf("False");
}

void is_digit(char c){
    int i=c;
    if (i>47&&i<58)
    {
        printf("It is digit.");
    }
    else
        printf("It is not a digit");
}

void is_alphabet(char c){
    int i=c;
    if ((i>65&&i<91)||(i>96&&i<123))
    {
        printf("It is aplhabet.");
    }
    else
        printf("It is not a aplhabet");
}

void power(int a,int b){
    int pr=1;
    for (int i=1;i<=b;i++)
    {
        pr=pr*a;
    }
    printf("%d to the power %d is %d.",a,b,pr);
}
void factorial(int n){
    int pr=1;
    if (n==0||n==1)
    {
        pr=1;
    }
    else{
        for (int i=1;i<=n;i++)
        {
            pr=pr*i;
        }
    }
    printf("factorial of %d is %d.",n,pr);
    
}
int main()
{
    is_prime(3);
    printf("\n");
    is_armstrong(370);
    printf("\n");
    NCR(5, 2);
    printf("\n");
    NPR(5, 2);
    printf("\n");
    to_upper('g');
    printf("\n");
    to_lower('F');
    printf("\n");
    is_lower('p');
    printf("\n");
    is_upper('F');
    printf("\n");
    is_digit('7');
    printf("\n");
    is_alphabet('E');
    printf("\n");
    power(3,4);
    printf("\n");
    factorial(5);
    return 0;
}