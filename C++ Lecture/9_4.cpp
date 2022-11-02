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
		cout << "ù ��° ���ϱ� �����ε�\n";
		MyVector temp(this->x + other.x, this->y + other.y);
		return temp;
	}
	MyVector* operator+ (MyVector* other) {
		cout << "�� ��° ���ϱ� �����ε�\n";
		MyVector* temp = new MyVector(this->x + other->x, this->y + other->y);
		return temp;
	}
	bool operator== (MyVector& other) {
		return ((this->x == other.x) && (this->y == other.y));
	}
};

int main(void) {

	MyVector* v1 = new MyVector(10, 10);
	MyVector v2(20, 20);

	// MyVector v3 = v1 + v2;
	MyVector v3 = *v1 + v2;

	return 0;
}