#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /
int main()
{
    printf("6 + 5 = %d\n",6 PLUS 5);
    printf("6 - 5 = %d\n",6 MINUS 5);
    printf("6 * 5 = %d\n",6 MULT 5);
    printf("6 / 5 = %d\n",6 DIVIDE 5);
    return 0;
}