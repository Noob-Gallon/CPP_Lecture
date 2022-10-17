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

	// ��ü�� ��������
	Person p;
	p.age = 20;

	// ��ü�� ��������
	Person* pp = nullptr;
	// �갡 �ƹ��� �Ȱ���Ű�ϱ�, �ϴ� ��ü�� ���� �־��ش�.

	// �����ڸ� ����ϴ� ������ �ʴ� new
	pp = new Person;
	// ���� �ִ� pp�� �Ʒ����� ������ �ϱ� ���� delete�� ���� �����Ƿ�,
	// ���� �߻�. ���� �ݵ�� new <-> delete �� ¦�� �̷��� �Ѵ�.

	// �����ڸ� ����Ͽ� ����� new
	pp = new Person(21);

	delete pp;

	return 0;
}