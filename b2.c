#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int m1, n1, m2, n2;
    printf("Enter the number of rows in matrix 1 : ");
    scanf("%d", &m1);
    printf("Enter the number of columns in matrix 1 : ");
    scanf("%d", &n1);
    printf("Enter the number of rows in matrix 2 : ");
    scanf("%d", &m2);
    printf("Enter the number of columns in matrix 2 : ");
    scanf("%d", &n2);
    if (n1 == m2)
    {
        int arr1[m1][n1], arr2[m2][n2], result[m1][n2];
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("array 1 element at %d row and %d colums : ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("array 2 element at %d row and %d colums : ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < n1; k++)
                {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("Array 1\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
        printf("Array 2\n");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }
        printf("Product array : \n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}