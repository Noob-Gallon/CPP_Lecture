#include <iostream>

using namespace std;

class P2 {
public:
	virtual ~P2() {
		cout << "P2 소멸자" << endl;
	}
};

class C2 : public P2 {
public:
	int* p;
	C2() {
		p = new int[40];
	}
	~C2() {
		delete[] p;
		cout << "C2 소멸자" << endl;
	}
};

int main(void) {

	C2* c = new C2();
	delete c;
	// 여기까지는 아무런 문제가 발생하지 않는다.

	// upcasting, 얘는 합법이다. 그러나 문제가 있는 코드이다.
	P2* p = new C2();
	delete p;

	return 0;
}