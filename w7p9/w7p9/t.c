#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n, k = 10, sum = 0;
	scanf("%d", &n);
	while (n % k != 0)
	{
		sum =sum+ (n % k)*(n%k);
		
		n = n / k;
	}
	printf("%d", sum);
	return 0;
}