#include <iostream>

using namespace std;

class A {
public:
	int a, b;

public:
	A() {
		cout << "부모 생성자\n";
		a = 10;
		b = 20;
	}
	A(int _a, int _b) : a(_a), b(_b) {
		cout << "부모 생성자 - 2\n";
	}
	void showAB() {
		cout << a << ", " << b << endl;
	}
	~A() {
		cout << "부모 소멸자\n";
	}
};

class AA : public A {
	// AA는 아무런 데이터가 없더라도 A로부터 상속받은 a, b가 있다.
public:
	int c;

public:
	// 이처럼, 부모 생성자를 호출하여 사용할 수 있다.
	AA() : A(21, 31) {
		cout << "자식 생성자\n";
	}
	AA(int _a, int _b, int _c) : A(_a, _b), c(_c) {
		cout << "자식 생성자 - 2\n";
	}
	void showABSum() {
		cout << (a + b) << endl;
	}
	~AA() {
		cout << "자식 소멸자\n";
	}
};

int main(void) {

	AA aa;
	cout << aa.a << ", " << aa.b << endl;

	return 0;
}