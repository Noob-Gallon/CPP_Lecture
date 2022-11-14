#include <iostream>

using namespace std;

class A {
public:
	int x;
};

class B {
public:
	int x;
};

// multiple Inheritance
class C : public A, public B {

};

int main(void) {

	C cc;
	// cc.x = 30;
	cc.A::x = 10;
	cc.B::x = 20;

	return 0;
}