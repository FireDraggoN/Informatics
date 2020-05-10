#ifndef LIST
#define LIST

typedef struct Node
{
	int val;
	struct Node* next;
}Node;

int push(Node** header, int val);
int push_end(Node* header, int val);
int insert(Node* header,int pos, int val);
int delete_first(Node** header);
int delete_end(Node* header);
int print_list(Node* header);


#endif // !LIST
