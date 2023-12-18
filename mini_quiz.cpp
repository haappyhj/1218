#include<stdio.h>

int main() {

	double base;
	double height;
	base = 8;
	height = 4;

	printf("정삼각형의 넓이는 %.2lf*%.2lf*0.5=%.2lf\n", base, height, base * height * 0.5);

	double t = 6;
	printf("정사각형의 넓이는 %.2lf입니다\n", t*t);
	
	double r = 5;
	double p = 3.14;
	printf("원의 둘레는 %.2lf입니다\n", p * 2 * r);
	printf("원의 넓이는 %.2lf입니다", p * r * r);



	return 0;
}