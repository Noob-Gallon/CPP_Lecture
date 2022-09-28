#include <iostream>

using namespace std;

class Circle {
public:
	int x, y; // 중점의 좌표
	int r; // 반지름

	Circle() : x(0), y(0), r(0) {
		cout << "Circle default constructor was invoked" << endl;
	}
	Circle(int _x, int _y, int _r) : x(_x), y(_y), r(_r) {
		cout << "Circle constructor was invoked" << endl;
	}

	void showCircleInfo() {
		cout << x << " " << y << " " << r << endl;
	}
};

int main() {

	Circle cs[10];

	for (auto& c : cs) {
		c.showCircleInfo();
	}

	cs[4].showCircleInfo();
	cs[2].x = 100;
	cs[2].showCircleInfo();

	return 0;
}