#include <iostream>

using namespace std;

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

	unique_ptr<Person> pp1(new Person(21));
	// unique_ptr이라는 class에서 templete Person을 담아두는 것.
	// pp1도 이곳에서는 일종의 객체이다.
	// 사실 Smart Pointer는 솔직히 말하면 클래스의 객체고,
	// 그 객체에서 delete를 수행하도록 해주는 역할을 한다.
	// 이를 프로그래밍에서 wrapper라고 한다.

	return 0;
}