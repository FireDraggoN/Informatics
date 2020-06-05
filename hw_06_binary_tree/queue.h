#ifndef QUEUE
#define QUEUE
#include "tree.h"

typedef struct QNode
{
	Node* tree;
	struct QNode* next;
}QNode;

typedef struct Queue
{
	QNode* front, * rear;
}Queue;

QNode *newQNode(Node *tree);
Queue *createQueue();

int enqueue(Queue *q, Node* tree);

Node* dequeue(Queue* q);
int length(Queue q);
int print_queue(Queue q);


#endif // !LIST
