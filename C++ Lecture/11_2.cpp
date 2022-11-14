#include <iostream>

using namespace std;

class A {
public:
	virtual void showMe() = 0;
};

class B : public A {
public:

};

int main(void) {

	B b;


	return 0;
}