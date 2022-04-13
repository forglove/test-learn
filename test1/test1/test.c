#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    char sex; //性别
//    float faHeight, moHeight;
//    char sports;  //是否喜欢体育
//    char diet;  //饮食习惯
//    float Height;  //自己的身高
//    printf("Are you a boy(M) or a girl(F)?");
//    scanf("%c", &sex);
//    fflush(stdin);
//    printf("Please input your father's height(cm):");
//    scanf("%f", &faHeight);
//    fflush(stdin);
//    printf("Please input your mother's height(cm):");
//    scanf("%f", &moHeight);
//    fflush(stdin);//清空缓冲区
//    if (sex == 'F')
//    {
//        Height = (faHeight * 0.923 + moHeight) / 2;
//    }
//    else
//    {
//        Height = (faHeight + moHeight) * 0.54;
//    }
//    printf("Do you like sports(Y/N)?");
//    scanf("%c", &sports);
//
//    if (sports == 'Y')
//    {
//        Height *= (1 + 0.02);
//    }
//    printf("Do you have a good habit of diet(Y/N)?");
//    scanf("%c", &diet);
//    fflush(stdin);
//    if (diet == 'Y')
//    {
//        Height *= (1 + 0.015);
//    }
//    printf("Your future height will be %f (cm)", Height);
//    return 0;
//}
//if (fabs(y) <= 1e-7)
//{
//    printf("除数不能为0");
//    break;
//}
//else
//{
//    z = x / y;
//    printf("%.2f", z); break;
//}
//		default:printf("运算符有误"); break;
//    }
//
//    printf("%.6f%c%.6f", x, c, y)；
//        return 0;
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	float x, y, z;
//	char c;
//	printf("请输入计算的式子");
//	scanf("%f%c%f", &x, &c, &y);
//	switch (c)
//	{
//	case'+':z = x + y; break;
//	case'-':z = x - y; break;
//	case'*':z = x * y; break;
//	case'/':z = x / y; break;
//	}
//	printf("%.6f%c%.6f=%.6f", x, c, y, z);
//		return 0;
//}
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	float x, y, z;
//	char c, k = 'y';
//	printf("Please enter the expression:\n");
//	scanf("%f", &x);
//	getchar();
//	scanf("%c", &c);
//	fflush(stdin);
//	scanf("%f", &y);
//	while(k == 'y'))
//	{
//		if (y == 0)
//		{
//			printf("Division by zero!");
//		}
//
//		else
//		{
//			switch (c)
//			{
//			case'+':z = x + y; printf("%.6f %c %.6f = %.6f ", x, c, y, z); break;
//			case'-':z = x - y; printf("%.6f %c %.6f = %.6f ",x,c,y, z); break;
//			case'*':z = x * y; printf("%.6f %c %.6f = %.6f ", x, c, y, z); break;
//			case'/':z = x / y; printf("%.6f %c %.6f = %.6f ", x, c, y, z); break;
//			default:printf("Unknown operator!"); break;
//			}
//			printf("Do you want to continue(Y/N or y/n)?");
//			getchar();
//			scanf("%c", &k);
//		}
//		
//	}
//	if (k == ('n' || 'N'))
//	{
//		printf("Program is over!");
//	}
//
//	return 0;
//}
#include<stdio.h>
int main()
{
	int score[30], num[30], count[30], stu[30];
	int i,n,sum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &score[i], num[i]);
		if(score[i]<0)
		{
			break;
		}
	}
	for (i = 0; i < n; i++)
	{
		sum += score[i];
	}
	float aver = sum / n;

	return 0;
}