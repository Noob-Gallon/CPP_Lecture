#include <iostream>

using namespace std;

// p. 344 const ��� �Լ�.

class Person {
public:
	int age;
	Person() {
		age = 10;
	}
	Person(int _age) : age(_age) {

	}

	// read�ϴ� �Լ��̴�. �� �ȿ��� ��� �Ǽ��� �ؼ�
	// ��� ������ ���� �ٲٰ� �� ���� �ִ�.
	// class �ȿ��� ��� �Լ��� ���� �� 
	// �Լ� �ڿ� const�� ���̸� �� �Լ� �ȿ�����
	// ����� ��� ������ �����Ű�� �ʴ´ٴ� ���̴�.
	// �̸� ���� compile error.
	int showAge(void) const {
		// age = age * 100; 
		// �ǵ�ġ �ʰ� write�� �ع��� ���.
		return age;
	}
};

int main(void) {

	// p�� ����Ű�� �ִ� ���� ����
	// ���� ���� ������, �� ���� �ٲ� ���� ����
	//const int* p = 100;

	// p�� ����Ű�� �ּ� 100�� �ٲ� �� ����.
	//int* const p = 100;

	// p�� ����Ű�� �ִ� ���� ���� �ٲ� ���� ����,
	// �ٸ� �ּҸ� ����Ű�� �� �� ����.
	// const int* const p = 100;

	// ù ��°�� �� ��°�� ������ ����ϸ� ������ ��������
	// ���α׷��� ����� �� �ִ�.

	// �� ��°�� �׷��� ���� ��������� ������, �߸� ����ϸ�
	// ���� �������� ���α׷��� ���� �� �ִ�.
	const Person* pp = new Person(20);
	Person* const pp = new Person(20);
	const Person* const pp = new Person(20);

	return 0;
}