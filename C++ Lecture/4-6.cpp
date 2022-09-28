#include <iostream>
#include <vector> // vector library including, Doubly Linked List
#include <algorithm>

using namespace std;

class Circle {
public:
	int x, y; // ������ ��ǥ
	int r; // ������

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

// Class ���� �쿭 ���踦 �Ǵ����ִ� �Լ�
bool compare(Circle a, Circle b) {
	if ((a.x + a.y) < (b.x + b.y)) {
		return true;
	}

	else false;
}

int main() {

	// template

	vector<Circle> cs;

	sort(cs.begin(), cs.end(), compare); // C++�� �⺻������ Quick Sort�� ����Ѵ�.

	return 0;
}