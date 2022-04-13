#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m, n, flag = 0;
	scanf("%d%d", &m, &n);
	for (m; m <= n; m++)
	{
		if (flag)
		{
			if (m % 7 == 0&&m>0)
				printf("\n%d是7的倍数", m);
			if ((m - 7) % 10 == 0 && m > 0)
				printf("\n%d是带7的数", m);
		}
		else
		{
			if (m % 7 == 0 && m > 0)
			{
				flag = 1;
				printf("%d是7的倍数", m);
				if ((m - 7) % 10 == 0)
					printf("\n%d是带7的数", m);
			}
			else if ((m - 7) % 10 == 0 && m > 0)
			{
				flag = 1;
				printf("%d是带7的数", m);
			}
			else;


		}

	}
	return 0;
}
