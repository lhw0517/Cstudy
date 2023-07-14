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

	printf("%d\n", 100);
	printf("%c\n", 't');
	printf("%s\n", "我是字符串");

	// 简单的if语句 :)
	printf("输入1 不要输入0 : ");
	int input = 0;
	scanf("%d", &input);
	if (input == 1)
	{
		printf("太棒了没输入0");
	}
	else
	{
		printf("为什么不输入1啊！！！");
	}
	/*
	* 多行注释
	* yeeeeee
	*/

	// 单行注释
	return 0;
}