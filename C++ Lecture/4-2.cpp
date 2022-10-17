#include <iostream>

using namespace std;

class Circle {
public:
	int x;
	int y;
	int r;
	int* p;

	// Polymorphism...

	//Circle(int _x, int _y, int _r) {
	//	cout << "circle constructor was invoked" << endl;
	//	x = _x;
	//	y = _y;
	//	r = _r;
	//}

	Circle() : x(10), y(10), r(100) {

		p = (int*)malloc(10000);

	}

	void showCircleInfo() {
		cout << x << " " << y << " " << r << endl;
	}

	int getX() {
		return x;
	}

	~Circle() {
		cout << "destructor was invoked" << endl;
		free(p);
	}
};

bool compare_circle(Circle& c, Circle& d) {

	if (c.getX() == d.getX()) {
		return true;
	}

	return false;
}

int main() {

	//Circle c(10, 10, 5);
	//c.showCircleInfo();

	Circle cd1;
	cd1.showCircleInfo();

	return 0;
}