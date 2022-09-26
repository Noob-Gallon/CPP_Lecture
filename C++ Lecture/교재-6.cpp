#include <iostream>

using namespace std;

void swap(int& _a, int& _b) {
	int temp;
	temp = _a;
	_a = _b;
	_b = temp;
}

int main(void) {

	int a, b;
	cin >> a;
	cin >> b;

	swap(a, b);

	cout << a << " " << b;

	return 0;
}