#ifndef QUEUE
#define QUEUE

typedef struct Node
{
	double val;
	struct Node* next;
}Node;

typedef struct Queue
{
	Node* front, * rear;
}Queue;

Node *newNode(double val);
Queue *createQueue();

int enqueue(Queue *q, double val);

double dequeue(Queue* q);
int length(Queue q);
int print_queue(Queue q);


#endif // !LIST
