#include<stdio.h>

int main() {
	/*int a;
	int b;
	printf("첫번째 수를 입력하세요:");
	scanf_s("%d", &a);
	printf("두번째 수를 입력하세요:");
	scanf_s("%d", &b);

	printf("두수의 합은 %d입니다\n", a + b);
	printf("두수의 곱은 %d입니다\n", a * b);
	printf("두수의 차는 %d입니다\n", a - b);

	int age;
	printf("만나이?:");
	scanf_s("%d", &age);
	printf("당신이 태어난 년도는 %d년입니다", 2023-age);*/

	int year;
	printf("태어난년도?:");
	scanf_s("%d", &year);
	printf("당신의 만나이는 %d입니다\n",2023-year); 

	double a, b, c;
	printf("세 숫자를 입력하세요:");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	printf("세 수의 평균은 %.2lf입니다\n", (a+b+c)/3);

	double mi;
	printf("금액은?:");
	scanf_s("%lf", &mi);
	printf("달러:%.2lf\n", 0.00077*mi);
	printf("엔화:%.2lf\n", 0.11*mi);

	double gi;
	printf("거리 입력:");
	scanf_s("%lf", &gi);
	printf("%.2lf마일입니다\n", 0.621371*gi);

	double y;
	printf("섭씨 온도 입력:");
	scanf_s("%d", &y);
	printf("화씨 %.2lf입니다\n", c*59+32);

	double i;
	double j;
	printf("키와 몸무게는?");
	scanf_s("%lf"," % lf", &i,&j);
	printf("bmi=%.2lf입니다", j/(i*i));




	return 0;
}