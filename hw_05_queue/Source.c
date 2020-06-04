
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "queue.h"

int main()
{
	Queue* q = createQueue();
	
	int n, k,l=0;
	double sum=0;
	scanf("%d %d", &n, &k);
	
	for (int i = 0; i < k; i++)
	{
		double temp;
		scanf("%lf", &temp);
		enqueue(q, temp);
		l++;
		sum += temp;
		printf("%.2lf ", sum / l);
		
	}
	for (int i = k; i < n; i++)
	{
		double temp;
		scanf("%lf", &temp);
		
		sum -= dequeue(q);
		sum += temp;
		enqueue(q, temp);
	
		printf("%.2lf ", sum / l);

	}
}

