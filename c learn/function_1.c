#include <stdio.h>
//����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3); //������ ������ �޴� �Լ�
int main(void) {

/*	//����
	int num = 2;

	//printf("num�� %d�Դϴ�\n", num);
	p(num); */

	//�Լ� ����
	//��ȯ���� ���� �Լ�
	//function_without_return(); //�Լ� ����

	//��ȯ���� �ִ� �Լ�

/*	int ret = function_with_return(); //��ȯ���� �ֱ� ������ ���� �޾��� ���� ����
	p(ret); */

	//���ް�(�Ķ����)�� ���� �Լ�
//	function_without_params();

	//���ް�(�Ķ����)�� �ִ� �Լ�
	function_with_params(1, 2, 3);

	return 0; 
}

//����

void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);

}

//�Լ� ���� ���: ��ȯ�� �Լ��̸�(���ް�)
/*���� ������ ��
int �Լ��̸�(num) {
	return num + 4;
} */

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params() {
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̸�, ���� ���� ���� %d, %d, %d�Դϴ�\n", num1, num2, num3);
}