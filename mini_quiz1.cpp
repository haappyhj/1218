#include<stdio.h>

int main() {
	/*int a;
	int b;
	printf("ù��° ���� �Է��ϼ���:");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է��ϼ���:");
	scanf_s("%d", &b);

	printf("�μ��� ���� %d�Դϴ�\n", a + b);
	printf("�μ��� ���� %d�Դϴ�\n", a * b);
	printf("�μ��� ���� %d�Դϴ�\n", a - b);

	int age;
	printf("������?:");
	scanf_s("%d", &age);
	printf("����� �¾ �⵵�� %d���Դϴ�", 2023-age);*/

	int year;
	printf("�¾�⵵?:");
	scanf_s("%d", &year);
	printf("����� �����̴� %d�Դϴ�\n",2023-year); 

	double a, b, c;
	printf("�� ���ڸ� �Է��ϼ���:");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	printf("�� ���� ����� %.2lf�Դϴ�\n", (a+b+c)/3);

	double mi;
	printf("�ݾ���?:");
	scanf_s("%lf", &mi);
	printf("�޷�:%.2lf\n", 0.00077*mi);
	printf("��ȭ:%.2lf\n", 0.11*mi);

	double gi;
	printf("�Ÿ� �Է�:");
	scanf_s("%lf", &gi);
	printf("%.2lf�����Դϴ�\n", 0.621371*gi);

	double y;
	printf("���� �µ� �Է�:");
	scanf_s("%d", &y);
	printf("ȭ�� %.2lf�Դϴ�\n", c*59+32);

	double i;
	double j;
	printf("Ű�� �����Դ�?");
	scanf_s("%lf"," % lf", &i,&j);
	printf("bmi=%.2lf�Դϴ�", j/(i*i));




	return 0;
}