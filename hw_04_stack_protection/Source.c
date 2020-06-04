#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"

int skobo4ki()
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
	if (is_empty(header) && n == 1)
		printf("correct");
	else printf("error");
	return 0;
}


int main()
{
	int a, b, c;
	Node* header = NULL;
	char buf = NULL;
	do
	{
		buf = getchar();
		if (buf == '1' ||buf == '0')
		{
			
			push(&header, buf-48);
			continue;
		}
		if(buf == '&')
		{
			a = pop(&header);
			b = pop(&header);
			push(&header, a * b);
		}
		if(buf == '|')
		{ 
			a = pop(&header);
			b = pop(&header);
			if (a + b)
				push(&header, 1);
			else
				push(&header, 0);

		}
		if (buf == '^')
		{ 
			a = pop(&header);
			b = pop(&header);
			push(&header, ((a + b)%2));
		}
		if(buf == '!')
		{ 
			a = pop(&header);
			if (a == 1) push(&header, 0);
			else push(&header, 1);
		}
		
	} while (buf != '\n');
	if (peek(header))
		printf("1");
	else
		printf("0");

}