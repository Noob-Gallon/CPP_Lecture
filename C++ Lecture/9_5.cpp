#include <iostream>

using namespace std;

class MyVector {
private:
	int x, y;

public:
	MyVector(int _x, int _y) : x(_x), y(_y) {

	}
	void showXY() {
		cout << "x : " << x << ", y : " << y << endl;
	}
	MyVector operator+ (MyVector& other) {
		MyVector temp(this->x + other.x, this->y + other.y);
		return temp;
	}
	MyVector* operator+ (MyVector* other) {
		MyVector* temp = new MyVector(this->x + other->x, this->y + other->y);
		return temp;
	}
	bool operator== (MyVector& other) {
		return ((this->x == other.x) && (this->y == other.y));
	}
	bool operator!= (MyVector& v) {
		return !(*this == v);
		// �̷� ������ �̹� Ŭ���� ������ ���ǵ� operator overloading�� Ȱ���Ͽ�
		// �ٸ� operator overloading���� ���� �� �ִ�.
	}
};

int main(void) {

	MyVector v1(10, 20);
	MyVector v2(20, 20);

	cout << boolalpha;
	cout << "v1 == v2\n" << (v1 == v2) << endl;

	return 0;
}