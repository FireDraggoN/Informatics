
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

QNode *newQNode(Node* tree)
{
	QNode* temp = (QNode*)malloc(sizeof(QNode));
	temp->tree = tree;
	temp->next = NULL;
	return temp;
}

Queue *createQueue()
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->front = q->rear = NULL;
	return q;
}



int enqueue(Queue* q, Node* tree)
{
	QNode* temp = newQNode(tree);
	
	if (q->rear == NULL)
	{
		q->front = q->rear = temp;
		return;
	}
	q->rear->next = temp;
	q->rear = temp;
	
}


Node* dequeue(Queue* q)
{
	if (q->front == NULL)
		return;

	QNode *temp = q->front;
	Node* val = temp->tree;
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


