#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(double val)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->val = val;
	temp->next = NULL;
	return temp;
}

Queue *createQueue()
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->front = q->rear = NULL;
	return q;
}



int enqueue(Queue* q, double val)
{
	Node* temp = newNode(val);
	
	if (q->rear == NULL)
	{
		q->front = q->rear = temp;
		return;
	}
	q->rear->next = temp;
	q->rear = temp;
	
}


double dequeue(Queue* q)
{
	if (q->front == NULL)
		return;

	Node *temp = q->front;
	double val = temp->val;
	q->front = q->front->next;

	if (q->front == NULL)
		q->rear = NULL;
	free(temp);
	return val;
	

}
int length(Queue q)
{
	int cnt = 1;
	if (q.front == NULL)
		return 0;
	while (q.front != q.rear)
	{
		cnt++;
		q.front = q.front->next;
	} 
	return cnt;
}

int print_queue(Queue q)
{
	int n = length(q);
	if (q.front == NULL)
		return;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", (int)q.front->val);
		q.front = q.front->next;
	}
	printf("\n");
}
