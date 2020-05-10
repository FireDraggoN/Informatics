#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "list.h"

int main()
{
	int i,n,a,pos;
	Node* header = NULL;
	while (1)
	{
		system("cls");
		printf("1 Print List\n");
		printf("2 Push\n");
		printf("3 Push to end\n");
		printf("4 Insert\n");
		printf("5 Delete First\n");
		printf("6 Delete Last\n");
		printf("7 Quick fill\n");
		printf("0 Quit\n");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			print_list(header);
			
			while (getchar() != '\n');
			getchar();	
			break;
		case 2:
			printf("Value = ");
			scanf("%d", &a);
			push(&header, a);

			break;
		case 3:
			printf("Value = ");
			scanf("%d", &a);
			push_end(header, a);

			break;
		case 4:
			printf("Value = ");
			scanf("%d", &a);
			printf("Position = ");
			scanf("%d", &pos);
			insert(header, pos, a);

			break;
		case 5:
			delete_first(&header);

			break;
		case 6:
			delete_end(header);

			break;
		case 7:
			for (i = 0; i < 10; i++)
				push(&header, i);

			break;
		case 0:
			return 0;

		default:
			break;
		}
	}
}