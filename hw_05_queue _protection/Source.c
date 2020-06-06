
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "queue.h"

int main()
{
	Queue* q = createQueue();
	int temp = 0,sum=0;

	while (temp >= 0)
	{
		scanf("%d", &temp);
		enqueue(q, temp);
	}
	while (q->front->next != NULL)
	{
		printf("%d ", sum += dequeue(q));
	}
	
	
}

