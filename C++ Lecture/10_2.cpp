#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int _x, int _y) : x(_x), y(_y) {

	}
	void showPoint() {
		cout << x << ", " << y << endl;
	}
	friend ostream& operator<<(ostream& os, Point& p);
	friend istream& operator>>(istream& os, Point& p);
};

// 지금까지 operator overloaing은 class 내에서 정의해주었지만,
// re-direction operator는 따로 함수로 지정해준다.
// class 내에 정의되지 않으므로, A << B 에서 A, B를 둘다 전달해줘야 한다.
// ostream은 output stream이다.
ostream& operator<<(ostream& os, Point &p) {
	os << p.x << ", " << p.y;
	return os;
}
istream& operator>>(istream& in, Point& p) {
	in >> p.x >> p.y;
	return in;
}

int main(void) {

	Point p(10, 20);
	p.showPoint();

	cout << p;
	// cout << p << p;

	cin >> p; // 이것을 하기 위해서 friend 함수를 이용

	return 0;
}