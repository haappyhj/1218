#include<stdio.h>

int main() {

	//scanf_s(): �Է¹޴� �Լ�

	//int age;
	//printf("���� �Է�:");
	//scanf_s("%d",&age); // & �ʼ�!

	//printf("����� �Է��� ����:%d", age);

	/*int side;
	printf("���簢���� �� ���� ����:");
	scanf_s("%d", &side);
	printf("���簢���� ����:%d", side * side);*/


	printf("���� ������:");
	double r;
	scanf_s("%d", &r);
	printf("���� ����:%.2lf\n", r * r * 3.14);

	printf("�¾ �⵵:");
	int a;
	scanf_s("%d", &a);
	printf("�¾ �⵵:%d", a);

	return 0;
}