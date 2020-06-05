#include "tree.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int val)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->left = NULL;
	temp->right = NULL;
	temp->val = val;
	return temp;
}

int is_empty(Node* root)
{
	if (root == NULL) return 1;
	else return 0;
}

int add(Node** root, int val)
{
	
	if (is_empty(*root))
	{	
		Node* temp = newNode(val);
		*root = temp;
		return 0;
	}
		
	if ((*root)->val > val)
		add(&(*root)->left, val);
	else
		add(&(*root)->right, val);
}

int bfs(Node* root)
{
	Queue* q = createQueue();
	enqueue(q, root);
	while (q->front != NULL)
	{
		Queue *newQ = createQueue();
		while (q->front != NULL)
		{
			Node* val = dequeue(q);
			if (val == NULL)
			{
				printf("Tree is empty\n");
				return 0;
			}
			if (val->left)
				enqueue(newQ, val->left);
			
			if (val->right)
				enqueue(newQ, val->right);

			printf("%d ", val->val);
		}
		printf("\n");
		q->front = newQ->front;
		q->rear = newQ->rear;

	}
}


int dfs(Node* root)
{
	printf("%d\n", root->val);
	if (root->left != NULL)
		dfs(root->left);
	if (root->right != NULL)
		dfs(root->right);
	
}

int search(Node* root,int val,int *cnt)
{
	(*cnt)++;
	if (root->val == val)
		return val;
	if (root->val < val)
		search(root->right, val, cnt);
	if (root->val > val)
		search(root->left, val, cnt);
}

