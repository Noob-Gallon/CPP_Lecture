#include <iostream>

using namespace std;

class MyValue {
private:
	int x;
public:
	MyValue(int _x) : x(_x) {

	}

	// prefix
	MyValue& operator++ () {
		this->x = this->x + 1;
		return *this;
	}

	// post fix
	MyValue operator++ (int) {
		MyValue temp = *this;
		this->x = this->x + 1;

		return temp;
	}

	// 대입 연산자
	MyValue& operator= (const MyValue& other) {
		this->x = 2 * other.x;
		return *this;
	}

	// index operator overloading
	int operator[](int _k) {
		if (_k < 50) {
			return -999;
		}
		else {
			return 999;
		}
	}

	void showMyValue() {
		cout << "My Value : " << this->x << endl;
	}
};

int main(void) {

	MyValue v1(10);

	cout << v1[30] << endl;

	return 0;
}