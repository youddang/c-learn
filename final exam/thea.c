#include <stdio.h>
#define SIZE 10 // SIZE ����� 10���� ����

int main() {
	char ans1;
	int ans2, i;
	int seats[SIZE] = {0}; // seats �迭 ������ ũ�Ⱑ �̸� ���ǵ� SIZE
	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n)"); // y�� yes, n�� no
		scanf_s(" %c", &ans1); // ���� ���θ� �Է� ����

		if (ans1 == 'n') { // ���� ����ڰ� n�� �Է��ϸ�
			break; // ����
		}
		printf("-----------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("-----------------------\n");

		for (i = 0; i < SIZE; i++) {
			printf(" %d", seats[i]);
		}
		printf("\n");

		printf("�� ��° �¼��� �����Ͻðڽ��ϱ�?");
		scanf_s(" %d", &ans2);
		if (seats[ans2 - 1] == 0) {
			seats[ans2 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�̹� ����� �ڸ��Դϴ�.\n");
	}

	return 0;
}