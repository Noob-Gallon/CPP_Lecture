#include <iostream>

using namespace std;

class Lemon {
public:
	int x, y;
	static int count;
};

int Lemon::count = 30;

int main(void) {

	Lemon l1;
	l1.x = 20;

	Lemon l2;
	l2.x = 40;

	l1.count = 40;
	l2.count = 50;

	cout << l1.x << " " << l2.x << endl;

	return 0;
}