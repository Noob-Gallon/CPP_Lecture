#include <iostream>
#include <stdlib.h>

class Person {
public:
	int age;
	Person() {
		age = 10;
	}
	Person(int _age) : age(_age) {

	}
};

int main(void) {

	// 객체의 정적생성
	Person p;
	p.age = 20;

	// 객체의 동적생성
	Person* pp = nullptr;
	// 얘가 아무도 안가리키니까, 일단 객체를 만들어서 넣어준다.

	// 생성자를 사용하는 만들지 않는 new
	pp = new Person;
	// 위에 있는 pp는 아래에서 재정의 하기 전에 delete를 하지 않으므로,
	// 누수 발생. 따라서 반드시 new <-> delete 가 짝을 이루어야 한다.

	// 생성자를 사용하여 만드는 new
	pp = new Person(21);

	delete pp;

	return 0;
}