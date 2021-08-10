#include<stdio.h>

//선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // 전체 total개에서 ate개를 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void)
{
	//function
	//계산기

	int num = 2; 
	p(num);
	//2 + 3 은?
	num = num +  3;
	p(num);
	//5 - 1 은?
	num -= 1;
	p(num);

	// 4 X 3 은?
	num *= 3;
	p(num);

	// 12/ 6 은?
	num /= 6;
	p(num);
	//반환값이 없는 함수 = void함수
	function_without_return();
	//반환값이 있는 함수 
	int ret = function_with_return();
	p(ret);
	
	//파라미터(전달값)가 없는 함수
	function_without_params();

	//파라미터(전달값)가 있는 함수
	function_with_params(5, 2, 3);

	//파라미터(전달값)도 받고, 반환값이 있는 함수
	int ret2 = apple(5, 2);
	p(ret2);
	printf("사과 %d 개중에  %d 개를 먹으면? %d 개가 남아요.\n", 10, 4, apple(10, 4));


	//계산기 함수
	int n = 2;
	n = add(n, 3);
	p(n);
	n = sub(n, 1);
	p(n);
	n = mul(n, 3);
	p(n);
	n = div(n, 6);
	p(n);



	return 0;

}

void function_without_return() {

	printf("반환값이 없는 함수 입니다.\n");

}

int function_with_return() {
	printf("반환값이 있는 함수 입니다.\n");
	return 10;
}

void function_without_params() {
	printf("전달값이 없는 함수 입니다.\n");

}

void function_with_params(int num1, int num2, int num3) {
	printf("전달값과 반환값이 있는 함수이며, 전달값은 %d %d %d 입니다.\n", num1, num2, num3);


}
int apple(int total, int ate) {

	printf("전달값과 반환값이 있는 함수이다\n");
	return total - ate;


}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}
int mul(int num1, int num2) {
	return num1 * num2;
}
int div(int num1, int num2) {
	return num1/num2;
}



//정의
void p(int num) 
{
	printf("num 은 %d 입니다. \n", num);
}

// 전달값 : 36
// 함수 : ㅁ +4
// 출력값 : ?

/*반환형에 int 넣으면 정수를 반환하겠다. 
		  float 넣으면 실수를 반환하겠다.
		  char 넣으면 글자를 반환하겠다.
	     void 를 넣으면 반환하지않겠다. = return 이 필요없음*/
int 함수이름(int num, int num2, char c, float f) 
{
	num + 4;

}


