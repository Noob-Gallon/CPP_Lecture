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
	// unique_ptr�̶�� class���� templete Person�� ��Ƶδ� ��.
	// pp1�� �̰������� ������ ��ü�̴�.
	// ��� Smart Pointer�� ������ ���ϸ� Ŭ������ ��ü��,
	// �� ��ü���� delete�� �����ϵ��� ���ִ� ������ �Ѵ�.
	// �̸� ���α׷��ֿ��� wrapper��� �Ѵ�.

	return 0;
}