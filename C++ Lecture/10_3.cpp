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
	// AA는 아무런 데이터가 없더라도 A로부터 상속받은 a, b가 있다.
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

	AA aa; // default 생성자는 ()로 부르지 않는다.
	aa.showAB();
	aa.showABSum();

	return 0;
}