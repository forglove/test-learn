#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (abs(a - b) < c&&a+b>c)
	{
		printf("YES");
	}
	else
	{
		printf("ERROR DATA");
	}
	return 0;
}