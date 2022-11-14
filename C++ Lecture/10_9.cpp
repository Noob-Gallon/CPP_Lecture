#include <iostream>

using namespace std;

class P2 {
public:
	virtual ~P2() {
		cout << "P2 �Ҹ���" << endl;
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
		cout << "C2 �Ҹ���" << endl;
	}
};

int main(void) {

	C2* c = new C2();
	delete c;
	// ��������� �ƹ��� ������ �߻����� �ʴ´�.

	// upcasting, ��� �չ��̴�. �׷��� ������ �ִ� �ڵ��̴�.
	P2* p = new C2();
	delete p;

	return 0;
}