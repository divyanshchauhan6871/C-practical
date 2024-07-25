#include <stdio.h>
void sum(int n1,int n2){
    printf("The sum of numbers is %d.\n",n1+n2);}
void subtract(int n1,int n2){
    printf("The difference of numbers is %d.\n",n1-n2);}
void multiply(int n1,int n2){
    printf("The product of numbers is %d.\n",n1*n2);}
void divide(int n1,int n2){
    printf("The quotient on dividing the numbers is %d.\n",n1/n2);}
int main()
{
    int i, n1, n2;
    do
    {
        printf("ENter\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\nOther to exit\n");
        scanf("%d", &i);
        if(i>=5||i<1)
        return 0;
        printf("Enter number 1 : ");
        scanf("%d", &n1);
        printf("Enter number 2 : ");
        scanf("%d", &n2);
        switch (i)
        {
        case 1:
            sum(n1,n2);
            break;
        case 2:
            subtract(n1,n2);
            break;
        case 3:
            multiply(n1,n2);
            break;      
        default:
            divide(n1,n2);
        }
    } while (1);
    return 0;
}