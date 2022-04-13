#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,n,sum;
	char st[10];
	n = 0;
	sum = 0;
	printf("请输入数字n=\n");
	scanf("%s", &st);
	n= strlen(st);
	printf("位数为%d\n", n);
	printf("各位数字和为%d",sum);
	return 0;
}