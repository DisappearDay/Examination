#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	printf("请输入三个数");
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d\n", a);
//		}
//		else
//		{
//			printf("%d\n", c);
//		}
//	}
//	else
//	{
//		if (b > c) 
//		{
//			printf("%d\n", b);
//		}
//	    else
//	    {
//			printf("%d\n", c);
//	    }
//	}
//	
//	return 0;
//}

int avg(int* str,int len)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < len; i++)
	{
		
		count += *(str++);
	}
	return count / len;
}

int main()
{
	int arr[10] = { 1,4,7,23,78,123,98,39,24,50 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sum=avg(arr,sz);
	printf("%d\n", sum);
	return 0;
}
//编程计算下列表达式：s=1!+2!+3!+4!+……+10!
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	int sum = 0;
//	for (i=1;i<=10;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			count *= j;
//		}
//		sum += count;
//		count = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//从键盘上输入a与n的值，计算sum=a+aa+aaa+aaaa+……(共n项)的和。例a=2, n=4, 则sum=2+22+222+2222。
//int main()
//{
//	printf("请输入a和n的值");
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	while (n--)
//	{
//		i = i + a;
//		j = j + i;
//		a *= 10;
//
//	}
//	printf("%d\n", j);
//
//	return 0;
//}



//从键盘上输入若干个字符存入文件write.txt中，遇到回车键输入结束。(用“\n”表示回车键)

int main()
{
	FILE* fp = fopen("write.txt","w");
	int c;
	c = getchar();
	while (c != '\n')
	{
		fputc(c, fp);
		c = getchar();
	}
	return 0;

}
