#include<stdio.h>
#include<time.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //���� ��ü ����
};


typedef struct GameInfomation {// GameInfomation ��������
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //���� ��ü ����
}GAME_INFO;




int main_struct(void) 
{
	//[���� ���]
	// �̸� : ��ȣ����
	// �߸ų⵵ : 2021��
	// ���� : 50��
	//���ۻ� : ��ȣȸ��

	char* name = "��ȣ����";
	int year = 2021;
	int price = 50;
	char* company = "��ȣȸ��";

	//[�� �ٸ� ���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2021��
	// ���� : 100��
	//���ۻ� : ����ȸ��

	char* name2 = "��������";
	int year2 = 2021;
	int price2 = 100;
	char* company2 = "����ȸ��";
	

	// ����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��ȣ����";
	gameInfo1.year = 2021;
	gameInfo1.price = 50;
	gameInfo1.company = "��ȣȸ��";

	//����ü ���

	printf("-- ���� ��� ���� --\n");
	printf(" ���Ӹ�   :  %s\n", gameInfo1.name);
	printf(" �߸ų⵵ :  %d\n", gameInfo1.year);
	printf(" ����     :  %d\n", gameInfo1.price);
	printf(" ����ȸ�� :  %s\n", gameInfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ 
	struct GameInfo gameInfo2 = {"��������",2021, 100, "����ȸ��"};
	printf("\n-- �Ǵٸ� ���� ��� ���� --\n");
	printf(" ���Ӹ�   :  %s\n", gameInfo2.name);
	printf(" �߸ų⵵ :  %d\n", gameInfo2.year);
	printf(" ����     :  %d\n", gameInfo2.price);
	printf(" ����ȸ�� :  %s\n", gameInfo2.company);


	//����ü �迭
	struct GameInfo gameArray[2] = {
	{"��ȣ����",2021, 50, "��ȣȸ��"} , 
	{"��������",2021, 100, "����ȸ��"}
	};


	//����ü ������
	struct GameInfo* gamePtr; //�̼Ǹ�
	gamePtr = &gameInfo1;

	printf("\n\n--�̼Ǹ��� ���� ��� ���� --\n");
	/*
	printf(" ���Ӹ�   :  %s\n", (*gamePtr).name); // *gamePtr.name = *(gamePtr.name) ���� ��Ÿ��
	printf(" �߸ų⵵ :  %d\n", (*gamePtr).year);
	printf(" ����     :  %d\n", (*gamePtr).price);
	printf(" ����ȸ�� :  %s\n", (*gamePtr).company);
	*/ //�Ʒ��� ����
	printf(" ���Ӹ�   :  %s\n", gamePtr->name); 
	printf(" �߸ų⵵ :  %d\n", gamePtr->year);
	printf(" ����     :  %d\n", gamePtr->price);
	printf(" ����ȸ�� :  %s\n", gamePtr->company);

	//����ü ���� ����ü
	//���� ��ü ���� �Ұ�
	gameInfo1.friendGame = &gameInfo2;

	printf("\n\n--������ü�� ���� ��� ���� --\n");
	printf(" ���Ӹ�   :  %s\n", gameInfo1.friendGame->name);
	printf(" �߸ų⵵ :  %d\n", gameInfo1.friendGame->year);
	printf(" ����     :  %d\n", gameInfo1.friendGame->price);
	printf(" ����ȸ�� :  %s\n", gameInfo1.friendGame->company);


	//typedef
	//�ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; //int i = 3;
	�Ǽ� �Ǽ����� = 3.23f; //float f = 3.23f;
	printf("\n\n�������� : %d, �Ǽ����� %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = 2015;
	GAME_INFO game2;
	game2.name = "�ѱ۰���2";
	game2.year = 2020;

	return 0;
}