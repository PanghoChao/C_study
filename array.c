#include<stdio.h>

int main_array(void)
{
	//�迭
/*	int subway_1 = 30; //
	int subway_2 = 40;
	int subway_3 = 50;


	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�. \n", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�. \n", subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�. \n", subway_3);

	//3���� ������������ �Բ� ���� ����
	int subway_array[3]; // [0] [1] [2]
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�. \n", i+1, subway_array[i]);

	}
	return 0;*/

	//�� ���� ���
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //���� �ʱ�ȭ�� �ݵ�� �ؾ���
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//�迭ũ��� �׻� ����� ����
	/*int size = 10;
	int arr[size];*/
	/*
	int arr[10] = { 1, 2 }; // ������ �ϳ��� �س����� ������ ���� �ڵ����� '0'���� �ʱ�ȭ ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/
	int arr2[] = { 1, 2 }; // arr2[2]


	//���� vs ���ڿ�
	char c = 'A';

	char str[6] = "coding"; //[c][o][d][i][n][g]
	printf("%s\n", str);
	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL���� '\0'�� ���ԵǾ����
	char str2[7] = "coding"; //[c][o][d][i][n][g][\0]
	printf("%s\n", str2);


	char str3[] = "coding"; //[c][o][d][i][n][g][\0]
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));


	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//���� 1���� : 1byte
	//�ѱ� 1���� : 2byte
	//char ũ�� : 1byte


	char c_array[7] = { 'c','o','d','i','n','g', '\0' };
	printf("%s\n", c_array);

	char c_array2[10] = { 'c','o','d','i','n','g', }; //�迭�� ���� �κ��� ������ �� ǥ�⸦ ������ ���ص� �ȴ�.
	printf("##%s\n", c_array2);
	for (int i = 0; i < sizeof(c_array2); i++)
	{
		printf("%c\n", c_array2[i]);
		printf("%d\n", c_array2[i]); // ASCII �ڵ� �� ���(null���� 0���� �Էµ�)
	}

	/*
	//���ڿ� �Է¹ޱ� : ������ ���� ���� ����
	char name[256];
	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, sizeof(name));
	*/

	//���� : ASCII �ڵ�  7bit �� 128�� �ڵ�
	//a : 97
	//A : 65
	//0 : 48 //���� '0'��

	return 0;


}