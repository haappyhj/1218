#include<stdio.h>

int main() {

	double base;
	double height;
	base = 8;
	height = 4;

	printf("���ﰢ���� ���̴� %.2lf*%.2lf*0.5=%.2lf\n", base, height, base * height * 0.5);

	double t = 6;
	printf("���簢���� ���̴� %.2lf�Դϴ�\n", t*t);
	
	double r = 5;
	double p = 3.14;
	printf("���� �ѷ��� %.2lf�Դϴ�\n", p * 2 * r);
	printf("���� ���̴� %.2lf�Դϴ�", p * r * r);



	return 0;
}