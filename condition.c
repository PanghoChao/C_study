#include<stdio.h>
#include<time.h>

int main_if(void) {
	//������ ź�ٰ� ����. �л�/ �Ϲ������� ����(�Ϲ��� :20��)

	/*int age = 25;
	if (age >= 20)
		printf("�Ϲ����Դϴ�.");
	else
		printf("�л��Դϴ�.");
	return 0;
	*/

	// break .

	//1������ 30������ �ִ� �ݿ��� 1������ 5������ ������ǥ�� �մϴ�. 
	/*
	for (int i = 1; i <= 30; i++) {
		printf("%d �� �л��� ���� ��ǥ�� �մϴ�\n", i);

		if (i == 5) {
			printf("���� �л����� ����������");
			break;
		}
	}
	*/
	// continue
	//1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� ������ 6������ 10������ ���� ��ǥ�� �ϼ���.
	/*
	for (int f = 1; f <= 30; f++) {

		if (f >= 6 && f <= 10)
		{
			if(f == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", f);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ�� �մϴ�\n", f);


		}
	}
	*/

	// && ||
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a�� b, Ȥ�� c�� d�� ���� �����ϴ�\n");

	}
	else
	{
		printf("���� ���� �ٸ��׿�\n");
	}*/

	//srand()��?
	/*srand(2);
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d ", (rand() % 100) + 1);

		printf("\n");
	}*/

	// ����0 ����1 ��2
	
	
	//srand(time(NULL));
	//int i = rand() % 3; //0-2��ȯ

	// if else ����
	/*if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
		printf("�����\n");*/
	
	// switch case �� �߰��� 'break'��0 ������ �ش�Ǵ� case���Ŀ� case���� ���� ����ȴ�.
	/*switch (i)
	{
	case 0 : printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	default:printf("�����\n");
		break;
	}*/

	// UP and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 ���� ����
	printf("���� : %d\n", num);
	int answer = 0; //����
	int chance = 5; //��ȸ

	while (chance > 0)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���纸����(1~100)");
		scanf_s("%d", & answer);

		if (answer > num)
		{
			printf("DOWN ��\n\n");
		}
		else if (answer < num)
		{
			printf("UP �� \n\n");
		}
		else if(answer == num){
			printf("answer!\n");
			break;
		}
		else
		{
		printf("�˼����� ������ �߻��߾��.");
		}
	}

	return 0;


}

