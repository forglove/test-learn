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
				printf("\n%d��7�ı���", m);
			if ((m - 7) % 10 == 0 && m > 0)
				printf("\n%d�Ǵ�7����", m);
		}
		else
		{
			if (m % 7 == 0 && m > 0)
			{
				flag = 1;
				printf("%d��7�ı���", m);
				if ((m - 7) % 10 == 0)
					printf("\n%d�Ǵ�7����", m);
			}
			else if ((m - 7) % 10 == 0 && m > 0)
			{
				flag = 1;
				printf("%d�Ǵ�7����", m);
			}
			else;


		}

	}
	return 0;
}
