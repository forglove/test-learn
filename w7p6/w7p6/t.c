#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	float s = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s += pow(-1, i + 1) / (2 *(float) i - 1);

	}
	printf("%f", s);
	return 0;
}