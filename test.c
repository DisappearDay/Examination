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
int main()
{
	FILE* fp = fopen("write.txt", "w");
	int ch = 0;
	ch = getchar();
	fputc(ch, fp);
	while (ch != '\n')
	{
		putchar(ch);
		ch = getchar();
		fputc(ch, fp);
	}


	return 0;
}
//从键盘上输入10个评委的评分，去掉一个最高的去掉一个最低的
//求出其余8人的平均分，输出平均分，最高分，最低分

#include <stdio.h>
#include <stdlib.h>


int is_cmp(const void* str1,const void* str2)
{
	return *((int*)str1) - *((int*)str2);
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), is_cmp);

	int count = 0;
	
	for (i = 1; i < 9; i++)
	{
		count += arr[i];
	}
	printf("avg=%d max=%d min=%d", count / 10, arr[9], arr[0]);

	return 0;
}
//int main()
//{
//	int x = 3;
//	do
//	{
//		printf("%3d", x -= 2);
//	} while (!(--x));
//	return 0;
//}

//void main()
//{
//	int i, j, n = 5;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		for (j = 1; j <= i; j++)
//			printf("%d", i);
//		printf("\n");
//	}
//}

//int main()
//{
//	int a[10], * p, * q ,r;
//	p = &a[3];
//	q = &a[6];
//	r = q - p;
//	printf("%d\n", r);
//
//	return 0;
//}

//void main()
//{
//	int a[10], i, k = 0;
//	for (i = 0; i < 10; i++)
//		a[i] = i;
//	for (i = 1; i < 4; i++)
//		k += a[i] + i;
//	printf("%d\n", k);
//	return 0;
//}
//
//void main(void)
//{
//	int i, m, k;
//	for (m = 2; m <= 100; m++)
//	{
//		k = m-1;
//		for (i = 2; i <= k; i++)
//			if (m % i == 0)
//				break;
//		if (i >= k + 1)
//			printf("%d", m);
//	}
//}

//任意读取一个整数，依次输出其符号位及从低位到高位上的数字

//int main()
//{
//	printf("请输入一个整数：");
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0)
//	{
//		while (x)
//		{
//			printf("%d", x % 10);
//			x /= 10;
//		}
//	}
//	else  if (x == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		int y=abs(x);
//		printf("-");
//		while (y)
//		{
//			printf("%d", y % 10);
//			y /= 10;
//		}
//	}
//
//	return 0;
//}

//sin x=x- x3/3!+x5/5!-x7/7!+……+(-1)^(n+l)x(2n-1)/(2n-1)!+……  n=10;
//int main()
//{
//	printf("请输入一个值：");
//	int x = 0;
//	scanf("%d", &x);
//	int i = 0;
//	int k=1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int sign=pow(-1, i + 1);
//		int res = pow(x, 2 * i - 1);
//		int j = 0;
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			k = k * j;
//		}
//		sum+=(sign * res) / k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// 
// 
// 
//float Sin(float x)
//{
//    int n;                //项数n。    
//    n = 10;
//    float sum = 0;               //前n项和sum。
//    float t;
//    int i;
//    t = x;
//    sum = t;
//    for (i = 2; i <= n; i++)
//    {
////sin x = x - x3 / 3!+ x5 / 5!- x7 / 7!+ …… + (-1) ^ (n + l)x(2n - 1) / (2n - 1)!+ ……  n = 10;
//        t = -1 * t * x * x / ((2 * i - 2) * (2 * i - 1));           //t赋值第i项。
//        sum += t;
//    }
//    return sum;
//}
//void main() {
//    float x;
//    scanf("%f", &x);
//    printf("%0.3f\n", Sin(x));
//}


//设有三个候选人，每次输入一个得票的候选人的名字，要求最后输出各人得票结果。30个人进行投票。
struct person
{
	char name[20];
	int count;
}candidates[3]={"Li",0,"Zhang",0,"Liu",0};


int main()
{
	int n = 30;
	char* arr[20]={0};
	while (n)
	{
		printf("请在Li Zhang Liu三人中选择一人投票：");
		scanf("%s", arr);
		if (strcmp(arr, candidates[0].name) == 0)
		{
			candidates[0].count++;
			n--;
		}else if (strcmp(arr, candidates[1].name) == 0)
		{
			candidates[1].count++;
			n--;
		}else if (strcmp(arr, candidates[2].name) == 0)
		{
			candidates[2].count++;
			n--;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
		
	}
	printf("Li获得%d票 Zhang获得%d票 Liu获得%d票", candidates[0].count, candidates[1].count, candidates[2].count);
	return 0;
}
//给定一个整数（正整数、负整数、零），请输出它的逆序数。
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0)
//	{
//		while (x)
//		{
//			if (x % 10)
//			{
//				printf("%d", x % 10);
//			}
//			x=x / 10;
//		}
//	}
//	else if (x < 0)
//	{
//		int y=abs(x);
//		printf("-");
//		while (y)
//		{
//			if (y % 10)
//			{
//				printf("%d", y % 10);
//			}
//			y=y / 10;
//		}
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}


//统计一个英文句子(长度不大于 80)中含有英文单词的个数，单词之间用空格隔开。
int Find_Space(char* str)
{
	int count=0;
	/*while (*str!='\0')
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}*/
	int i = 0;
	for (i = 0; i < 80; i++)
	{
		if (*(str + i) == ' ')
		{
			count++;
		}
	}
	return count + 1;
}

int main()
{
	char arr[80] = { 0 };
	gets(arr);
	int res=Find_Space(arr);
	printf("%d\n", res);
	return 0;
}
//1. 工厂检验时需要将不合格的小球挑出来。一般每 4 个球中就有一个小球
//的重量有异常。请编写程序，根据输入的 4 个小球的重量来输出有异常的小球编
//号（按照输入的顺序，4 个小球的编号分别用字母 A / B / C / D 来表示）和重量。
//例如：输入：2 2 3 2 输出：C 3

#include <stdio.h>
//int main()
//{
//	int A, B, C, D;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	scanf("%d", &C);
//	scanf("%d", &D);
//
//	if (A + B == 2 * A)
//	{
//		if (C == A)
//		{
//			printf("%d\n", D);
//		}
//		if (D == A)
//		{
//			printf("%d\n", C);
//		}
//	}
//	else
//	{
//		if (A == C)
//		{
//			printf("%d\n", B);
//
//		}
//		if (B == C)
//		{
//			printf("%d\n", A);
//		}
//	}
//
//
//
//
//	return 0;
//}

//2. 乌龟与兔子进行赛跑，跑道边可以随地进行休息。 乌龟每分钟可以前进
//3 米，兔子每分钟前进 9 米；兔子嫌乌龟跑得慢，觉得肯定能跑赢乌龟，于是每
//跑 10 分钟回头看一下乌龟，若发现自己超过乌龟，就在路边休息，每次休息 30
//分钟，否则继续跑 10 分钟；而乌龟非常努力，一直跑不休息。假定乌龟与兔子
//在同一起点同一时刻开始起跑，请问 T 分钟后乌龟和兔子谁跑得快？
//请编写程序解决上述问题，如果兔子快则输出 rabbit，如果乌龟快则输出
//tortoise，如果为平局，则输出 tie。

int main()
{
	int T;
	scanf("%d", &T);
	int i = 0;
	int rab = 0;
	int tor = 0;
	int rest = 1;
	int time = 0;
	for (i=1;i<=T;i++)
	{
		if (i<10||i % 10 == 0)
		{
			if (tor > rab)
			{
				;
			}
			else
			{
				rest = 0;
			}
			if (rest == 0)
			{

			}
		}
		if (i == time + 30)
		{
			rest = 1;
		}
		
		tor = i * 3;
		if (rest == 1)
		{
			rab = i * 9;
		}
	}

	if (tor > rab)
	{
		printf("tortoise");
	}
	else if (tor == rab)
	{
		printf("tie");
	}
	else
	{
		printf("rabbit");
	}
}

int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);
}

struct stu
{
	int a;
	float b;
}data,*p=&data;
//int main()
//{
//	/*char* arr = "\\TOP\t\65\"";
//	printf("%ld\n", sizeof(arr));
//	return 0;*/
//
//	//int x = -1;
//	//do
//	//{
//	//	x = x * x;
//	//	// 10000001
//	//	// 11111110
//	//	// 11111111
//	//	//
//	//} while (!x);
//	//
//	//printf("%d\n", x);
//	//
//	/*int a[] = { 1,2,4 };
//	char arr[3] = "abc";
//	int sz=sizeof(arr);
//	printf("%d", sz);*/
//	//char str1[] = "string";
//	//char str2[5];
//	//strcpy(str1, "HELLO");
//	////strcpy(str2, "HELLO");
//	//printf("%s\n", str1);
//	////printf("%s\n",str2);
//
//
//
//
//
//	//char ch = 'w';
//	////如果是小写字母返回非零值，如果不是小写字符返回0；
//	//int ret = islower(ch);
//	////十进制数字0-9
//	//int ret1 = isdigit(ch);
//	////空白字符“空格” 换页"\f" 换行"\n"  回车"\r" 制表符"\t" 垂直制表符"\v"
//	//int ret1 = isspace(ch);
//	////十六进制包括a-f A-F
//	//int ret1 = isxdigit(ch);
//	////任何控制字符
//	//int ret1 = iscntrl(ch);
//	////大写字母A-Z
//	//int ret1 = isupper(ch);
//	////字母a-z，字母A-Z
//	//int ret1 = isalpha(ch);
//	////字母或者数字 a-z，字母A-Z  数字0-9
//	//int ret1 = isalnum(ch);
//	////标点符号，任何不属于数字或者字母的图形字符
//	//int ret1 = ispunct(ch);
//	////任何图形字符
//	//int ret1 = isgraph(ch);
//	////任何可打印字符包括图形字符和空白字符
//	//int ret1 = isprint(ch);
//	//int ret1 = printf("%d\n", ret);
//
//	////字符转换
//	////tolower--转小写字母
//	////toupper--转大写字母
//	//
//	////如果是小写不动，大写转化为小写
//	//char ch = tolower('Q');
//	////printf("%c\n",ch);
//	//putchar(ch);
//
//
//
//
//	return 0;
//
//
//}



//十进制转换为十六进制




//#include"stdio.h" 
//#include"stdlib.h" 
//	int main(void) {
//		int n, a1, count = 0, j;//count 用于角标的计数，j 控制 for 循环 
//		int a[100];
//		printf("请输入十进制数:");
//		scanf_s("%d", &n);
//		if (n == 0)
//			printf("%d", n);
//		while (n != 0) {
//			a1 = n;
//			n = n / 16;
//			a[count] = a1 % 16;
//			count++;
//		}
//		for (j = count - 1; j >= 0; j--) {
//			if (a[j] > 9 && a[j] < 16)
//				printf("%c", (a[j] - 10 + 'A'));
//			else
//				printf("%d", a[j]);
//		}
//		printf("\n");
//		return 0;
//	}

void fun(int n)
{
	if (n > 1)
	{
		fun(n - 1);
	}
	printf("n=%d ", n);
	return;
}

//int main(int argc, char* argv[])
//{
//	fun(100);
//	return 0;
//}

//int main()
//{
//	/*int a = 15;
//	int b = 6;
//	double c = 2.5;
//	printf("%lf\n",a?b:c);
//	printf("%lf\n", (a % b) / c);*/
//	int a[1024] = { 2,3,4,5 },*p=a;
//	printf("%d\n", *(a + 2));
//	printf("%d\n", *(p + 1));
//
//
//	return 0;
//}



//#include <stdio.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//
//int lcd_fd;
//char* shared_addr;
//
//void open_lcd()
//{
//	
//}
//
////申请共享内存
//char* shared_addr = mmap(NULL, );
//
//
//int show_bmp()
//{
//
//}
//
//void close_lcd()
//{
//	
//}
//
//int main()
//{
//	open_lcd();
//
//
//	show_bmp("1.bmp");//显示一张屏幕大小的图片
//
//	sleep(1);
//
//	show_bmp("2.bmp");
//
//
//
//	close_lcd();
//	return 0;
//}


char* dele(char* str)
{
	int n = 0, i;
	for (i = 0; str[i]; i++)
	{
		if (str[i]<'0'&&str[i]>'9')
		{
			str[n++] = str[i];
		}
		str[n] = '\0';
	}
	return str;
}


int main()
{
	
	
	printf("%s\n", dele("1abg2c4d8"));
	return 0;
}

