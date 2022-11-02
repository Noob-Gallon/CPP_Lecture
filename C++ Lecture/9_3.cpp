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
		cout << "첫 번째 더하기 오버로딩\n";
		MyVector temp(this->x + other.x, this->y + other.y);
		return temp;
	}
	MyVector* operator+ (MyVector* other) {
		cout << "두 번째 더하기 오버로딩\n";
		MyVector* temp = new MyVector(this->x + other->x, this->y + other->y);
		return temp;
	}
	bool operator== (MyVector& other) {
		return ((this->x == other.x) && (this->y == other.y));
	}
};

int main(void) {

	MyVector v1(10, 10);
	MyVector v2(20, 20);
	
	MyVector v3 = v1 + v2;
	v3.showXY();

	MyVector* p5 = v1 + &v2; // v2의 주소를 인수로 넘겨주므로, p5에는 생성된 parameter의 주소가 넘어간다.
	p5->showXY();

	return 0;
}