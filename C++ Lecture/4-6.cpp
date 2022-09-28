#include <iostream>
#include <vector> // vector library including, Doubly Linked List
#include <algorithm>

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

// Class 간의 우열 관계를 판단해주는 함수
bool compare(Circle a, Circle b) {
	if ((a.x + a.y) < (b.x + b.y)) {
		return true;
	}

	else false;
}

int main() {

	// template

	vector<Circle> cs;

	sort(cs.begin(), cs.end(), compare); // C++는 기본적으로 Quick Sort를 사용한다.

	return 0;
}