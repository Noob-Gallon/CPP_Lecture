#include <iostream>

using namespace std;

/*

포인터 연산자의 중복
pointer operator overloading

*/

class MyIntegerPtr {
private:
	int* p = nullptr;

public:
	MyIntegerPtr(int* _p) : p(_p) {

	}
	~MyIntegerPtr() { // 이렇게 하면 스마트 포인터가 된다.
		if (p != nullptr) {
			delete p;
		}
	}
	int& operator*() { // or int로 복사본으로 넘겨줘도 된다.
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