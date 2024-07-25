#include <stdio.h>
#include <math.h>
void prime(int n)
{
    int i, j = 0;
    if (n == 0 || n == 1)
        j = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            j = 1;
            break;
        }
    }
    if (j == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
void armstrong(int n)
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
int main()
{
    int i, n;
    do
    {
        printf("Enter\n1 for prime numbver\n2 for Armstrong number\nOther to exit\n");
        scanf("%d", &i);
        if (i >= 3 || i < 1)
            return 0;
        switch (i)
        {
        case 1:
            printf("Enter number : ");
            scanf("%d", &n);
            prime(n);
            break;
        default:
            printf("Enter number : ");
            scanf("%d", &n);
            armstrong(n);
        }
    } while (1);
    return 0;
}