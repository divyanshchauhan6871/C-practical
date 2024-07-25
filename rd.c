#include <stdio.h>
void main()
{
    int a[2][2] = {1, 2, 3, 4}, b[2][2] = {5, 6, 7, 8}, s[2][2];
    for (int i= 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(*(s + i) + j)=0;
            for (int k = 0; k < 2; k++)
            {
                *(*(s + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
            printf("%d\t", *(*(s + i) + j));
        }
        printf("\n");
    }}