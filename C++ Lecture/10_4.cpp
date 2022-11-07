#include <iostream>

using namespace std;

class A {
public:
	int a, b;

public:
	A() {
		cout << "�θ� ������\n";
		a = 10;
		b = 20;
	}
	A(int _a, int _b) : a(_a), b(_b) {
		cout << "�θ� ������ - 2\n";
	}
	void showAB() {
		cout << a << ", " << b << endl;
	}
	~A() {
		cout << "�θ� �Ҹ���\n";
	}
};

class AA : public A {
	// AA�� �ƹ��� �����Ͱ� ������ A�κ��� ��ӹ��� a, b�� �ִ�.
public:
	int c;

public:
	// ��ó��, �θ� �����ڸ� ȣ���Ͽ� ����� �� �ִ�.
	AA() : A(21, 31) {
		cout << "�ڽ� ������\n";
	}
	AA(int _a, int _b, int _c) : A(_a, _b), c(_c) {
		cout << "�ڽ� ������ - 2\n";
	}
	void showABSum() {
		cout << (a + b) << endl;
	}
	~AA() {
		cout << "�ڽ� �Ҹ���\n";
	}
};

int main(void) {

	AA aa;
	cout << aa.a << ", " << aa.b << endl;

	return 0;
}