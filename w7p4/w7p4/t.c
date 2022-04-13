#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m, n, i, j,k=10, flag = 0;
	scanf("%d%d", &m, & n);
	for (m; m <= n;m++)
	{
		while (m / k != 0)
		{
			k *= 10;
		}
		if (flag)
		{
			if((m*m)%k==m)
			printf(" %d", m);
		}
		else
		{
			
			if (m * m % k == m)
			{
				flag = 1;
				printf("%d", m);
			}
			
		}
	}
	return 0;
}