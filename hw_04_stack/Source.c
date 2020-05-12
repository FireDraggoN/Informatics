#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"

int main()
{
	int n = 1;
	Node* header = NULL;
	char buf = NULL;
	do
	{
		buf = getchar();
		if (
			buf == '(' ||
			buf == '[' ||
			buf == '{'
			) 
		{
			push(&header, buf);
			continue;
		}
		if (buf == ')' && peek(header) == '(')
		{
			pop(&header);
			continue;
		} 
		if (buf == ']' && peek(header) == '[')
		{
			pop(&header);
			continue;
		}
		if (buf == '}' && peek(header) == '{')
		{
			pop(&header);
			continue;
		}
		if (buf != '\n') n = 0;
		
	} while (buf != '\n');
	if (is_empty(header) && n ==1)
		printf("correct");
	else printf("error");
	return 0;
}