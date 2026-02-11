#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//printf("Hello world\n");

	//return 0;

	// 서식 지정자
	// %s : 문자열
	//printf("%s \n", "hello world");
	//printf("%s %s \n", "hello", "world");
	//printf("%s,%s \n", "hello", "world");
	//printf("%s%s \n", "hello", "world");
	// return 0;


	// 변수
	// int : 자료형
	// num1 : 변수명
	// 변수명 규칙
	/*
		1. 영문 문자 숫자 가능
		2. 대소문자구분 num1 <> NUM1
		3. 문자부터 시작해야한다. 숫자로 시작하면 안됌
			num1(O)/1num(X)
		4. _ << 으로 시작가능
		5. C언어의 키워드(예약어) int, shrot, char void for ...등 변수명으로 사용불가
	*/
	//int num1;
	//int num2;
	//int num3;
	//
	//// num1 이라는 변수에 10 이라는 값을 할당(저장)
	//num1 = 10;
	//num2 = 20;
	//num3 = 30;

	//// %d : 정수형태로 표시
	//printf("%d %d %d\n",num1,num2,num3);

	//자료형
	//정수 자료형

	//int num1;
	//// 40억 까지 표현 가능
	//long num2;
	////경 단위 표현 가능
	//short num3;
	////6만 정도 표현 가능
	//char num4;
	////300 정도 표현 가능


	//실수 자료형
	
	//float num5;
	//double num6;

	//num5 = 9.1f;
	//num6 = 10.0;
	//printf("%f \n %f \n", num5, num6);

	//num1 = 2147483647;
	//printf("%d \n", num1);

	//num1 = 2147483648; // 오버플로우
	//printf("%d \n", num1);

	////문자형
	//// 문자 : a, b ,c , d 문자열 : hello, study
	//char str;
	//str = 'a'; //문자를 할당할때는 '' 사용해야함 ex) 'b', 'a'
	//printf("%c \n", str);// 문자를 출력할 때 : %c / 문자열을 출력할 때 : %s
	//str = 97;
	//printf("%c %d \n", str, str);

	//// 변수 선언
	//int num1;
	//// 값 할당 따로
	//num1 = 10;

	//// 변수 선언 + 값 할당
	//int num2 = 10;
	//
	//// 상수 , 리터럴
	//// 한 번 값을 넣으면 바꿀 수 없는 형태의 값
	//// 소스코드 상에서 "hello world" 처럼 값을 그대로 입력한것들 
	//const int con1 = 10;

	//con1 = 30; // 상수이기 때문에 값을 변경할 수 없다.

	// 값 입력받기
	// scanf
	int num1;
	
	printf("점수를 입력하세요 : ");

	scanf("%d",&num1); // 표준 입력을 받아서 변수에 저장
	printf("%d\n", num1);
	
}