#ifndef STACK
#define STACK

typedef struct Node
{
	char val;
	struct Node* next;
}Node;

int push(Node** header, char val);
char pop(Node** header);
int is_empty(Node* header);
char peek(Node* header);
int print_stack(Node* header);



#endif // !LIST
