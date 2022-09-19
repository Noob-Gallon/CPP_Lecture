#include <iostream> 
// C++에서 제공하는 h파일이 따로 존재한다.
// 그런데 C++ 전용 header file들이 존재하는데,
// 얘네를 구분할 수 있어야 하기 때문에 h를 붙이지 않는다.

#include <string.h>
#include <string>

// #include <stdio.h> printf, scanf 가능.

using namespace std;

int main(void) {

	// std::cout << "Hello, world!" << endl;
	cout << "Hello, world!" << endl; // endOfLine carriage return : \n
	
	// std란 무엇인가?
	// name space, 이름 공간 개념이 존재한다. (나와바리)

	// short - 2
	// int - 4
	// long - 4
	// long long - 8

	// char - 1
	// float - 4
	// double - 8
	// long double - 8

	// C++ 추가형
	// bool : 1

	// 문자열형 : String (String Type을 만들어버림...)
	
	string s1 = "hello";
	string s2 = " world";

	// string이 data type으로 들어왔다.
	cout << s1 + s2 << endl;

	cout << (s1 == s2) << endl;

	int k = 10;

	cout << s1 << " " << to_string(k) + s2 << endl;
	// to_string은 string header 안에 들어있다. std::to_string(k)
	// std::to_string(val)

	const int k2 = 10;

	bool b;
	b = true;
	
	bool c;
	c = false;

	cout << b << " " << c << endl;

	// p. 45
	// auto

	int k3 = 10;

	auto v = 20;
	auto v2 = 13.3;
	// 타입 추론, 그렇게 좋은 방법은 아니다.

	return 0;
}














