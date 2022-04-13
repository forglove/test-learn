#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m, n, i, j, k,s=0;
	scanf("%d%d", &m, &n);
	for (i = m; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			for (k = i + 2; k <= n; k++)
			{
				if (i * i + j * j == (k * k))
					s += 1;
			}
		}
	}
	printf("%d", s);
	return 0;
}