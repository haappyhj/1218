#include <stdio.h>

int main() {

	//int tem = -6;

	//int a;
	//// = 같다 아님, 오른쪽의 데이터를 왼쪽에 변수에 넣기
	//a = 100;
	//a = 30;
	//printf("현재 온도:%d C", tem);


	//printf("a값는 : %d", a);


	//int date = 18;
	//printf("오늘의 날짜는 %d입니다", date);

	//int age = 22;
	//int grade = 2;
	//int day = 2;
	//int month = 11;
	//int year = 2002;

	//printf("지금 %d학년입니다", grade);
	//printf("저의 태어난 시간은 %d년 %d월 %d일 입니다.", year, month, day);
	
	//float, double 실수
	double height = 173.4;

	//char 문자(알파벳 또는 특수문자)
	char alpha = 'K';
	printf("저의 키는 %.2lf입니다", height); 
	//lf 앞에 .2를 추가하면 소수점 둘째까지 출력
	printf("저의 이니셜은 %c입니다", alpha);

	return 0;
}