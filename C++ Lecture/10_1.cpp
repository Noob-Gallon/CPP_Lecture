#include <iostream>
#include <vector>

using namespace std;

class A {
private:
	int a;

public:
	friend void showA(A _a);
	friend class B; // class B�� class A�� friend class�� �����Ѵ�.
	A(int _a) : a(_a) {

	}
	void setA(int _a) { // ���� block�� ������ safety�� ���δ�.

		if (_a < 0) {
			a = 0;
		}
		else {
			a = _a;
		}
	}
};

void showA(A _a) {
	_a.a = -666;
	cout << _a.a << endl;
}

class B {
public:
	B() {

	}
	void showA(A _a) {
		cout << _a.a << endl;
	}
};

int main(void) {

	A obj(20);

	// cout << obj.a << endl;

	return 0;
}