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

	printf("%d\n", 100);
	printf("%c\n", 't');
	printf("%s\n", "�����ַ���");

	// �򵥵�if��� :)
	printf("����1 ��Ҫ����0 : ");
	int input = 0;
	scanf("%d", &input);
	if (input == 1)
	{
		printf("̫����û����0");
	}
	else
	{
		printf("Ϊʲô������1��������");
	}
	/*
	* ����ע��
	* yeeeeee
	*/

	// ����ע��
	return 0;
}