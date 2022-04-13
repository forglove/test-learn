#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int code[4], c[4], i;
	for (i = 0; i < 4; i++)
	{
		scanf("%1d", &code[i]);
	}

	for (i = 0; i < 4; i++)
	{
		code[i] = (code[i] + 5) % 10;
		
	}
	for (i = 0; i < 4; i++)
	{
		c[i] = code[i];
	}
	for (i = 0; i < 4; i++)
	{
		code[i] = c[3-i];

	}
	for (i = 0; i < 4; i++)
	{
		printf("%d", code[i]);
	}
	return 0;
}