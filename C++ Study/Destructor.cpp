/*

�Ҹ��ڴ� Class�� �Ҹ�� �� ���ȴ�.
��ȯ���� ����Ǿ� ���� ������, ������ ��ȯ���� �ʴ´�.
�Ű������� void������ ����Ǿ�� �ϱ� ������ �����ε���, ����Ʈ �� ������ �Ұ����ϴ�.

���� ����ڰ� custom destructor�� �������� ������ constructor�� ����������
default constructor�� �ڵ����� ȣ��ȴ�.

class AAA {
...
};

�� Ŭ������ �Ʒ��� ���ǿ� �����ϴ�.

class AAA {
public:
	AAA() {}
	~AAA() {}
};

desturctor�� destructor �̸� �տ� ~�� �ٿ��ش�.

�̷��� �Ҹ��ڴ� �밳 �����ڿ��� �Ҵ��� ���ҽ��� �Ҹ꿡 ���ȴ�.
���� �� ������ ������ new �����ڸ� �̿��ؼ� �Ҵ��� ���� �޸� ������ �ִٸ�,
�Ҹ��ڿ����� delete �����ڸ� �̿��ؼ� �� �޸� ������ �Ҹ��Ѵ�.

*/

// -------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>



using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(char* _myname, int _myage) {
		int len = strlen(_myname) + 1;
		name = new char[len];
		strcpy(name, _myname);
		age = _myage;
	}

	void ShowPersonInfo() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {

	char str1[] = "Lee dong woo";
	char str2[] = "Jang dong gun";

	Person man1(str1, 29);
	Person man2(str2, 41);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
