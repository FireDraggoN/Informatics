#include "list.h"
#include <stdlib.h>

int push(Node** header, int val)
{
	Node* temp = malloc(sizeof(Node));
	temp->val = val;
	temp->next = *header;
	*header = temp;
}

int push_end(Node* header, int val)
{
	while (header->next != NULL)
		header = header->next;
	Node* temp = malloc(sizeof(Node));
	temp->val = val;
	temp->next = NULL;
	header->next = temp;
}

int insert(Node* header, int pos, int val)
{
	for (int i = 0; i < pos - 2; i++)
		header = header->next;
	Node* temp = malloc(sizeof(Node));
	temp->val = val;
	temp->next = header->next;
	header->next = temp;
}

int delete_first(Node** header)
{
	Node* temp = malloc(sizeof(Node));
	temp = *header;
	*header = (*header)->next;
	free(temp);
}

int delete_end(Node* header)
{
	while (header->next->next != NULL)
		header = header->next;
	Node* temp = malloc(sizeof(Node));
	temp = header->next;
	header->next = NULL;
	free(temp);

}

int print_list(Node* header)
{
	if (header == NULL)
	{
		printf("List is empty\n");
		return 0;
	}
		
	while (header != NULL)
	{
		printf("%d ", header->val);
		header = header->next;
	}
		
	printf("\n");
}