#include <stdio.h>
const int M = 3;
const int N = 3;
void takein(int arr[],int n){
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
}
void print1d(int arr[],int n){
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

void takein2d(int arr[3][3],int m,int n){
	int i, j;
	for (i = 0; i < M; i++)
	for (j = 0; j < N; j++)
		scanf("%d ", &arr[i][j]);
}
void print(int arr[M][N])
{
	int i, j;
	for (i = 0; i < M; i++)
	for (j = 0; j < N; j++)
		printf("%d ", arr[i][j]);
}

int main()
{
	int arr[3];// = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// print(arr);
    takein(arr,3);
    print1d(arr,3);
    int arr2[3][3];
    takein2d(arr2,3,3);
    print(arr2);
	return 0;
}
