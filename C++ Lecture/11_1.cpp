#include <iostream>

using namespace std;

class A {
public:
	virtual void showMe() {
		cout << "parent" << endl;
	}
};

class B : public A {
public:
	void showMe() { // method overriding
		cout << "child" << endl;
	}
};

int main(void) {

	B* pb = new B();
	A* pa = nullptr;

	pa = pb; // upcasting 
	pa->showMe(); // parent pointer only points it's own.
	pb->showMe();

	delete pb;

	return 0;
}