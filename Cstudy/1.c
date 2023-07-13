#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("你好啊\n");
	//   加法计算
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("小加法\n");
	printf("输入两个数:  ");
	scanf("%d %d", &a, &b);   //scanf输入函数
	sum = a + b; //求a+b的和
	printf("和 = %d\n", sum);
	return 0;
}