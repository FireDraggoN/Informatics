#include "stack.h"
#include <stdlib.h>

int push(Node** header, char val)
{
	Node* temp = malloc(sizeof(Node));
	temp->val = val;
	temp->next = *header;
	*header = temp;
}

char peek(Node* header)
{
	
	if (is_empty(header))
	{
		printf("List is empty\n");
		return 0;
	}
	
	return header->val;
}
char pop(Node** header)
{
	if (is_empty(header))
	{
		printf("List is empty\n");
		return 0;
	}
	Node* temp = malloc(sizeof(Node));
	temp = *header;
	*header = (*header)->next;
	char t = temp->val;
	free(temp);
	return t;
}

int is_empty(Node* header)
{
	int n = 0;
	if (header == NULL)
	{
		n = 1;
	}
	return n;
}

int print_stack(Node* header)
{
	if (is_empty(header));
	{
		printf("List is empty\n");
		return 0;
	}
	
	while (header != NULL)
	{
		printf("%c ", header->val);
		header = header->next;
	}
		
	printf("\n");
}