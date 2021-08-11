#include<stdio.h>
#include<time.h>

//�����Ⱑ 6���� �־��
//�̵��� ���׿� ����ִµ�, �縷�̿���
//�縷�� �ʹ� ������, �ʹ� �����ؼ� ���� ���� ���� ������ �ؿ�
//���� �� �����ϱ� ���� �������� ���׿� ���� �༭ �����⸦ ����ּ���
//������� �ð��� �������� ���� Ŀ���� ���߿���...�ȳ�..

int level;
int arrayFish[6];
int *cursor;
void initDate();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main_pointer_project(void) 
{
	long startTime = 0; // ���� ���۽ð�
	long totalElapsedTime = 0; // �� ����ð�
	long prevElapsedTime = 0; // ���� ��� �ð� (�ֱٿ� ���� �� �ð� ����)

	int num; // �� �� ���׿� ���� �� ������, ����� �Է�

	initDate();
	
	cursor = arrayFish; // cursor[0].. cursor[1]

	startTime = clock(); //���� �ð��� millisecond(1000���� 1��) ������ ��ȯ
	while (1) // ���� �ݺ�
	{
		printFishes();
		printf("��� ���׿� ���� �ֽðھ��?");
		scanf_s("%d", &num);
		//�Է°� üũ

		if (num <1 || num>6)
		{
			printf("�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;

		}
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 1000������ ������
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);
		// ���� �� �� �ð� (���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld��",prevElapsedTime); // %ld -> ��ȣ�ִ� 10���� �����̸� �ڷ����� long�̴�. -time�� ����

		//������ ���� ����(����)
		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� ���� �ش�.
		//1. ������ ���� 0 �̸�? ���� ���� �ʴ´�. �̹̰��Ⱑ �׾��� ����
		if (cursor[num - 1] <= 0)
		{
			printf("%d �� ������� �̹� �׾����ϴ�.. ���� ���� �ʽ��ϴ�.\n", num);
		}

		// 2. ������ ����  0�� �ƴ� ��� ? ���� �ش�. 100�� ���� �ʴ��� üũ
		// ���� ������ �� + 1 <= 100�� �����ؾߵ�

		else if (cursor[num - 1] <= 100)
		{
			//���� �ش�.
			printf("%d �� ���׿� ���� �ݴϴ�. \n\n", num);
			cursor[num - 1] += 1;
		}

		//�������� �� ���� Ȯ�� (�������� 20�ʸ��� �ѹ��� ����)

		if (totalElapsedTime / 20 > level - 1)
		{

			level++; //level : 1 -> level : 2 ->

			printf("**** �� ������ ! ���� %d �������� %d ������ ���׷��̵� *** \n\n", level - 1, level);

			//�������� : 5
			if (level == 5)
			{
				printf("\n\n �����մϴ�, �ְ������� �޼��Ͽ����ϴ�. ������ �����մϴ�. \n\n");
				exit(0);
			}
		}
		// ��� �����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			//������ ��� �׾���.
			printf("��� �����Ⱑ �׾����..\n");
		}
		else
		{
			//�ּ� �Ѹ��� �̻��� �����Ⱑ �������
			printf("�����Ⱑ ���� ����־��! \n");

		}
		prevElapsedTime = totalElapsedTime;

		// 10�� ->15�� (5��: prevElapsedTime), 15�� ->25��(10��...?)

	}


	return 0; 

}

void initDate()
{
	level = 1; // ���ӷ���(1-5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;// ������ �� ����(0~100)
	}
}
void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1,2,3,4,5,6); //%3 =3ĭ ����, '1' 1ĭ , '��' 2ĭ ����
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");

}

void decreaseWater(long elapsedTime) 
{
	for (int i = 0; i < 6; i++) 
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); 
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}

	}

}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1;
		}
	}
	return 0;
}