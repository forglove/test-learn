#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n, k = 1,sum=0;
	scanf("%d",&n);
	while (n / k != 0)
	{
		sum += n / k;
		k *= 10;
	}
	if (sum % 2 == 1)
		printf("1");
	else
		printf("0");
	return 0;
}