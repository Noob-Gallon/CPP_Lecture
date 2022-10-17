#include <iostream>

using namespace std;

int foo(int _a) {

	return -_a;

}

int foo(int _a, int _b) {

	return _a + _b;

}

int main(void) {


	int a, b;
	cin >> a >> b;

	cout << foo(a) + foo(foo(a, b));

	return 0;
}