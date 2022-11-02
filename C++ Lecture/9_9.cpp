#include <iostream>

using namespace std;

/*

������ �������� �ߺ�
pointer operator overloading

*/

class MyIntegerPtr {
private:
	int* p = nullptr;

public:
	MyIntegerPtr(int* _p) : p(_p) {

	}
	~MyIntegerPtr() { // �̷��� �ϸ� ����Ʈ �����Ͱ� �ȴ�.
		if (p != nullptr) {
			delete p;
		}
	}
	int& operator*() { // or int�� ���纻���� �Ѱ��൵ �ȴ�.
		return *p;
	}
};

int main(void) {

	while (true) {
		MyIntegerPtr p(new int(40));
		// MyIntegerPtr* p = new MyIntegerPtr(new int(50));

		// cout << *p << endl;
		cout << *p << endl;
	}

	return 0;
}