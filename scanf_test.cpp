#include<stdio.h>

int main() {

	//scanf_s(): 입력받는 함수

	//int age;
	//printf("나이 입력:");
	//scanf_s("%d",&age); // & 필수!

	//printf("당신이 입력한 숫자:%d", age);

	/*int side;
	printf("정사각형의 한 변의 길이:");
	scanf_s("%d", &side);
	printf("정사각형의 넓이:%d", side * side);*/


	printf("원의 반지름:");
	double r;
	scanf_s("%d", &r);
	printf("원의 넓이:%.2lf\n", r * r * 3.14);

	printf("태어난 년도:");
	int a;
	scanf_s("%d", &a);
	printf("태어난 년도:%d", a);

	return 0;
}