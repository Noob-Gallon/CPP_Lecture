#include <iostream>

using namespace std;

// p. 344 const 멤버 함수.

class Person {
public:
	int age;
	Person() {
		age = 10;
	}
	Person(int _age) : age(_age) {

	}

	// read하는 함수이다. 이 안에서 잠깐 실수를 해서
	// 멤버 변수의 값을 바꾸게 될 수도 있다.
	// class 안에서 멤버 함수를 만들 때 
	// 함수 뒤에 const를 붙이면 이 함수 안에서는
	// 절대로 멤버 변수를 변경시키지 않는다는 뜻이다.
	// 이를 어기면 compile error.
	int showAge(void) const {
		// age = age * 100; 
		// 의도치 않게 write를 해버린 경우.
		return age;
	}
};

int main(void) {

	// p가 가리키고 있는 곳의 값을
	// 읽을 수는 있으나, 그 값을 바꿀 수는 없음
	//const int* p = 100;

	// p가 가리키는 주소 100을 바꿀 수 없음.
	//int* const p = 100;

	// p가 가리키고 있는 곳의 값을 바꿀 수도 없고,
	// 다른 주소를 가리키게 할 수 없음.
	// const int* const p = 100;

	// 첫 번째와 두 번째는 적절히 사용하면 굉장히 안정적인
	// 프로그램을 사용할 수 있다.

	// 세 번째는 그렇게 자주 사용하지는 않지만, 잘만 사용하면
	// 아주 안정적인 프로그램을 만들 수 있다.
	const Person* pp = new Person(20);
	Person* const pp = new Person(20);
	const Person* const pp = new Person(20);

	return 0;
}