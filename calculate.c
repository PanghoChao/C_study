#include<stdio.h>

//����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // ��ü total������ ate���� ��ȯ

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void)
{
	//function
	//����

	int num = 2; 
	p(num);
	//2 + 3 ��?
	num = num +  3;
	p(num);
	//5 - 1 ��?
	num -= 1;
	p(num);

	// 4 X 3 ��?
	num *= 3;
	p(num);

	// 12/ 6 ��?
	num /= 6;
	p(num);
	//��ȯ���� ���� �Լ� = void�Լ�
	function_without_return();
	//��ȯ���� �ִ� �Լ� 
	int ret = function_with_return();
	p(ret);
	
	//�Ķ����(���ް�)�� ���� �Լ�
	function_without_params();

	//�Ķ����(���ް�)�� �ִ� �Լ�
	function_with_params(5, 2, 3);

	//�Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	int ret2 = apple(5, 2);
	p(ret2);
	printf("��� %d ���߿�  %d ���� ������? %d ���� ���ƿ�.\n", 10, 4, apple(10, 4));


	//���� �Լ�
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

	printf("��ȯ���� ���� �Լ� �Դϴ�.\n");

}

int function_with_return() {
	printf("��ȯ���� �ִ� �Լ� �Դϴ�.\n");
	return 10;
}

void function_without_params() {
	printf("���ް��� ���� �Լ� �Դϴ�.\n");

}

void function_with_params(int num1, int num2, int num3) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��̸�, ���ް��� %d %d %d �Դϴ�.\n", num1, num2, num3);


}
int apple(int total, int ate) {

	printf("���ް��� ��ȯ���� �ִ� �Լ��̴�\n");
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



//����
void p(int num) 
{
	printf("num �� %d �Դϴ�. \n", num);
}

// ���ް� : 36
// �Լ� : �� +4
// ��°� : ?

/*��ȯ���� int ������ ������ ��ȯ�ϰڴ�. 
		  float ������ �Ǽ��� ��ȯ�ϰڴ�.
		  char ������ ���ڸ� ��ȯ�ϰڴ�.
	     void �� ������ ��ȯ�����ʰڴ�. = return �� �ʿ����*/
int �Լ��̸�(int num, int num2, char c, float f) 
{
	num + 4;

}


