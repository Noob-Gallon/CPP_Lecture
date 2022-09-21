#include <iostream>

struct point {
	int x;
	int y;
};

// Class는 그냥 하나의 Data Type이다...
// struct와 같이 얘로부터 instance가 만들어져야
// 변수를 담고, 데이터를 처리할 수 있게 된다.
class Point {
	int x;
	int y;

	// 자기 안에 있는 데이터를 프로세싱할 수 있다.
	/*void add() {
		return x + y;
	}*/
};



int main(void) {

	// a를 변수라고 한다.
	struct point a;
	struct point b;

	// class는 특별한 명시 없이 바로 class name으로 type을 지정한다.
	// 여기서 선언된 Point a, b를 객체라고 하며 영어로는 instance라고 한다.
	// 변수이긴 변수인데, 이 객체를 처리할 수 있는 코드(함수)가 존재한다.
	Point a;
	Point b;

	a.x = 10;
	a.y = 20;

	b.x = 100;
	b.y = 200;

	/*
		p. 167
		object oriented programming, OOP.
		객체지향 프로그래밍.
	


		p. 170
		1960년대에 SIMULA ---> c++ ---> JAVA ---> C# ---> ...



		p. 168 절차 지향 프로그래밍
		procedural programming
		procedure ---> function
		c: data와 function이 분리되어 있음...



		p. 172 객체는 무엇으로 이루어지는가?
		객체란 무엇인가?
		1. member variable ==  member field, attribute
		2. member function == method



		p. 174 클래스는 객체의 설계도...
		

	*/

	return 0;
}