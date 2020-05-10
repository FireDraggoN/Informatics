#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int FillArray(int** a, int n, int m)
{
	int max = n * m;
	int cnt =1;
	int n0 = 0, m0 = 0;
	while (cnt <= max)
	{
		
		for (int i = n0; i <= n-1; i++)
		{
			a[i][m0] = cnt++;
			
		}
		m0++;
		
		for (int j = m0; j <= m-1; j++)
		{
			a[n-1][j] = cnt++;
			
		}
		n--;
		
		for (int i = n-1; i >= n0; i--)
		{
			a[i][m-1] = cnt++;
			
		}
		m--;
		
		for (int j = m-1; j >= m0; j--)
		{
			a[n0][j] = cnt++;
			
		}
		n0++;
		
	}
	
}

int printArray(int** a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}


int main()
{
	int **array;
	int n, m;
	scanf("%d %d", &n, &m);
	array = (int**)malloc(m * sizeof(int*));

	for (int i = 0; i < n; i++)
		array[i] = (int*)malloc(m * sizeof(int));
	
	FillArray(array, n, m);
	printArray(array, n, m);

	return 0;
}
