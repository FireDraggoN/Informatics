#ifndef TREE
#define TREE

typedef struct Node
{
	int val;
	struct Node* right, *left;
}Node;



Node *newNode(int val);
int add(Node** root, int val);
int bfs(Node* root);
int dfs(Node* root);
int search(Node* root,int val,int*cnt);
int is_empty(Node* root);




#endif // !LIST
