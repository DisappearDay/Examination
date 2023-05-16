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
//1. 编程计算下列表达式：s=n!（n从键盘上输入）
//int main()
//{
//	printf("请输入要算阶乘的数:>");
//	int n = 0;
//	scanf("%d", &n);
//	int i ;
//	int count=1;
//	for (i=1;i<=n;i++)
//	{
//		count *= i;
//	}
//	printf("%d\n",count);
//	return 0;
//}



//2．输出1—100之间不能被12整除的数。

//int main()
//{
//	int i = 0;
//	for (i=1;i<=100;i++)
//	{
//		if (i % 12 != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//3．从键盘上输出10个整数存入一维数组中，按由大到小的顺序输出。

int cmp(const void* str1,const void* str2) 
{
	return *(int*)str2 - *(int*)str1;
}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//
//	for (i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//4．从键盘上输入9个数，按3行3列的格式输出。
//int main()
//{
//
//	int i = 0;
//	int arr[3][3] = {0};
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j=0;j<3;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//		
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//
//
//	return 0;
//}


//5．编程将文件read.txt中的字符读出显示到屏幕上。

//int main()
//{
//	FILE* pf = fopen("read.txt", "r");
//
//	char ch;
//	ch = fgetc(pf);
//	while (ch!='\n')
//	{
//		putchar(ch);
//		//printf("%c ", ch);
//		ch = fgetc(pf);
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main()
{
	int x = 10;
	int y = 2;
	y = pow(x, y);
	printf("%d", y);


	return 0;
}
