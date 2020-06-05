
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "tree.h"
#include "queue.h"

int main()
{
	int n;
	Node* root = NULL;
	while (1)
	{
		system("cls");
		printf("1. Add value\n");
		printf("2. DFS\n");
		printf("3. BFS\n");
		printf("4. Search\n");
		printf("5. Quick fill\n");
		printf("0. Quit\n");

		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("Value =");
			int temp;
			scanf("%d", &temp);
			add(&root, temp);
				break; 

		case 2:
			dfs(root);
			while (getchar() != '\n');
			getchar();
			break;
		
		case 3:
			bfs(root);
			while (getchar() != '\n');
			getchar();
			break;
		
		case 4:
			int cnt = 0;
			int val;
			printf("Find value = ");
			scanf("%d", &val);
			search(root, val, &cnt);
			printf("%d\n", cnt);
			while (getchar() != '\n');
			getchar();
			break;
		case 5:
			for (int i =0; i < 20; i+=3)
				add(&root, i);

			
			break;

		case 0:
			return 0;

		default:
			break;
		}

	}
}

