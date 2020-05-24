#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int FillArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

int printArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

}


int main()
{
	int* array;
	int n;
	scanf("%d", &n);
	array = (int*)malloc(n * sizeof(int));
	FillArray(array, n);


	for (int i = 0; i <n; i++)
	{
		if (array[i] == 0)
		{
			array[i] = array[(n) - 1];
			n--;
			array = (int*)realloc(array, (n) * sizeof(int));
			i--;
		}
	}

	printArray(array, n);
	

	return 0;
}
