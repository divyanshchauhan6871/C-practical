#include <stdio.h>
int main()
{
    int m, n, temp;
    printf("Enter the number of rows : ");
    scanf("%d", &m);
    printf("Enter the number of columns : ");
    scanf("%d", &n);
    int arr1[m][n], arr2[m][n], sum[m][n], dif[m][n], transa[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array 1 element :", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array 2 element :", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            dif[i][j] = arr1[i][j] - arr2[i][j];
            transa[j][i] = arr1[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", dif[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", transa[i][j]);
        }
        printf("\n");
    }
    return 0;
}