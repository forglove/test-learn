#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,n,sum;
	char st[10];
	n = 0;
	sum = 0;
	printf("����������n=\n");
	scanf("%s", &st);
	n= strlen(st);
	printf("λ��Ϊ%d\n", n);
	printf("��λ���ֺ�Ϊ%d",sum);
	return 0;
}