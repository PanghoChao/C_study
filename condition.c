#include<stdio.h>
#include<time.h>

int main_if(void) {
	//버스를 탄다고 가정. 학생/ 일반인으로 구분(일반인 :20세)

	/*int age = 25;
	if (age >= 20)
		printf("일반인입니다.");
	else
		printf("학생입니다.");
	return 0;
	*/

	// break .

	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를 합니다. 
	/*
	for (int i = 1; i <= 30; i++) {
		printf("%d 번 학생은 조별 발표를 합니다\n", i);

		if (i == 5) {
			printf("이후 학생들은 집에가세요");
			break;
		}
	}
	*/
	// continue
	//1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외한 6번부터 10번까지 조별 발표를 하세요.
	/*
	for (int f = 1; f <= 30; f++) {

		if (f >= 6 && f <= 10)
		{
			if(f == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", f);
				continue;
			}
			printf("%d 번 학생은 조별 발표를 합니다\n", f);


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
		printf("a와 b, 혹은 c와 d의 값이 같습니다\n");

	}
	else
	{
		printf("값이 서로 다르네요\n");
	}*/

	//srand()란?
	/*srand(2);
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d ", (rand() % 100) + 1);

		printf("\n");
	}*/

	// 가위0 바위1 보2
	
	
	//srand(time(NULL));
	//int i = rand() % 3; //0-2반환

	// if else 사용시
	/*if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
		printf("몰라요\n");*/
	
	// switch case 문 중간에 'break'가0 없으면 해당되는 case이후에 case들은 전부 실행된다.
	/*switch (i)
	{
	case 0 : printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default:printf("몰라요\n");
		break;
	}*/

	// UP and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 까지 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; //정답
	int chance = 5; //기회

	while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞춰보세요(1~100)");
		scanf_s("%d", & answer);

		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑ \n\n");
		}
		else if(answer == num){
			printf("answer!\n");
			break;
		}
		else
		{
		printf("알수없는 오류가 발생했어요.");
		}
	}

	return 0;


}

