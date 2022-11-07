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

// ���ݱ��� operator overloaing�� class ������ �������־�����,
// re-direction operator�� ���� �Լ��� �������ش�.
// class ���� ���ǵ��� �����Ƿ�, A << B ���� A, B�� �Ѵ� ��������� �Ѵ�.
// ostream�� output stream�̴�.
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

	cin >> p; // �̰��� �ϱ� ���ؼ� friend �Լ��� �̿�

	return 0;
}