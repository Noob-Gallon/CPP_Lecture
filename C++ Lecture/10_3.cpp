#include <iostream>

using namespace std;

class A {
protected:
	int a, b;

public:
	A() {
		a = 10;
		b = 20;
	}
	void showAB() {
		cout << a << ", " << b << endl;
	}
};

class AA : public A {
	// AA�� �ƹ��� �����Ͱ� ������ A�κ��� ��ӹ��� a, b�� �ִ�.
public:
	int c;

public:
	void showABSum() {
		cout << (a + b) << endl;
	}
};

class AAA : public AA {
	
};

int main(void) {

	AAA aaa;
	aaa.showAB();
	aaa.showABSum();
	// aaa.a = 20;
	// aaa.b = 30;
	// aaa.c = 100;

	AA aa; // default �����ڴ� ()�� �θ��� �ʴ´�.
	aa.showAB();
	aa.showABSum();

	return 0;
}