#ifndef STACK
#define STACK

typedef struct Node
{
	int val;
	struct Node* next;
}Node;

int push(Node** header, int val);
int pop(Node** header);
int is_empty(Node* header);
int peek(Node* header);
int print_stack(Node* header);



#endif // !LIST
