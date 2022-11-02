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
		// 이런 식으로 이미 클래스 내에서 정의된 operator overloading을 활용하여
		// 다른 operator overloading으로 만들 수 있다.
	}
};

int main(void) {

	MyVector v1(10, 20);
	MyVector v2(20, 20);

	cout << boolalpha;
	cout << "v1 == v2\n" << (v1 == v2) << endl;

	return 0;
}