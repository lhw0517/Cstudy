#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("��ð�\n");
	//   �ӷ�����
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("С�ӷ�\n");
	printf("����������:  ");
	scanf("%d %d", &a, &b);   //scanf���뺯��
	sum = a + b; //��a+b�ĺ�
	printf("�� = %d\n", sum);
	return 0;
}