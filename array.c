#include<stdio.h>

int main_array(void)
{
	//배열
/*	int subway_1 = 30; //
	int subway_2 = 40;
	int subway_3 = 50;


	printf("지하철 1호차에 %d 명이 타고 있습니다. \n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다. \n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다. \n", subway_3);

	//3개의 정수형변수를 함께 동시 생성
	int subway_array[3]; // [0] [1] [2]
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d 명이 타고 있습니다. \n", i+1, subway_array[i]);

	}
	return 0;*/

	//값 설정 방법
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //값은 초기화를 반드시 해야함
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//배열크기는 항상 상수로 선언
	/*int size = 10;
	int arr[size];*/
	/*
	int arr[10] = { 1, 2 }; // 선언을 하나라도 해놓으면 나머지 값은 자동으로 '0'으로 초기화 됨
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/
	int arr2[] = { 1, 2 }; // arr2[2]


	//문자 vs 문자열
	char c = 'A';

	char str[6] = "coding"; //[c][o][d][i][n][g]
	printf("%s\n", str);
	// 문자열 끝에는 '끝'을 의미하는 NULL문자 '\0'이 포함되어야함
	char str2[7] = "coding"; //[c][o][d][i][n][g][\0]
	printf("%s\n", str2);


	char str3[] = "coding"; //[c][o][d][i][n][g][\0]
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));


	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//영어 1글자 : 1byte
	//한글 1글자 : 2byte
	//char 크기 : 1byte


	char c_array[7] = { 'c','o','d','i','n','g', '\0' };
	printf("%s\n", c_array);

	char c_array2[10] = { 'c','o','d','i','n','g', }; //배열의 남는 부분이 있으면 끝 표기를 별도로 안해도 된다.
	printf("##%s\n", c_array2);
	for (int i = 0; i < sizeof(c_array2); i++)
	{
		printf("%c\n", c_array2[i]);
		printf("%d\n", c_array2[i]); // ASCII 코드 값 출력(null값은 0으로 입력됨)
	}

	/*
	//문자열 입력받기 : 경찰서 조서 쓰기 예제
	char name[256];
	printf("이름을 입력하세요 :");
	scanf_s("%s", name, sizeof(name));
	*/

	//참고 : ASCII 코드  7bit 총 128개 코드
	//a : 97
	//A : 65
	//0 : 48 //숫자 '0'임

	return 0;


}