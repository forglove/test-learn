#define  _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	printf("��������������Сֵ\n");
	int i, j, m, a[100] = { 0 };
	int b[100];
	int n = 0;
	printf("���������ָ���\n");
	scanf("%d", &n);
	printf("����������\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("former\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				m = a[j + 1];
				a[j + 1] = a[j];
				a[j] = m;
			}
		}
	}
	printf("\nafter\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	for (i = 1; i < n; i++)
	{
		b[i-1] = a[i] - a[i - 1];
	}
	m = b[0];
	for (i = 0; i < n - 1; i++)
	{
		if (m > b[i])
		{
			m = b[i];
		}
	}
	printf("\n");
	printf("��С��ֵΪ%d\n",m);
	return 0;
}
