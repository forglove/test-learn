#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	printf("�����������꣬�����������\n");
	int i, j ;
float det,s, a[3][3], b[2][3];
	for (i = 0; i < 3; i++)
	{
		printf("�������%d������\n", i+1);
		for (j = 0;j < 3; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
	/*for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%f\t", a[i][j]);
			if (j ==2) printf("\n");
		}
	}*/
	for (i = 0; i < 3; i++)
	{
		b[0][i] = a[1][i] - a[0][i];
		b[1][i] = a[2][i] - a[0][i];
	}
	/*for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%f\t", b[i][j]);
			if (j == 2) printf("\n");
		}
	}*/
	det = b[0][1] * b[1][2] - b[1][1] * b[0][2] - b[0][0] * b[1][2] + b[1][0] * b[0][2] + b[0][0] * b[1][1] - b[1][0] * b[0][1];
	det /= 2;
	s = fabs(det);
	if (s)
	{
		printf("det=%f\n", det);
		printf("���Ϊ%f", s);

	}
	else
	{
		printf("�޷����������Σ�����\a");
	}
	
	return 0;
}