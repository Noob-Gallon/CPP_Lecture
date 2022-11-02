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

	// ���� ������
	MyValue& operator= (const MyValue& other) {
		 this->x = 2 * other.x;
		 return *this;
	}
	/*void operator= (const MyValue& other) {
		this->x = 2 * other.x;
		return *this;
	}*/

	void showMyValue() {
		cout << "My Value : " << this->x << endl;
	}
};

int main(void) {

	MyValue v1(10);
	MyValue k = v1; // ���� ������

	MyValue v2(20);
	k = v2; // ���� ������, assignment operator
	// default assignment operator�� ����.

	k.showMyValue();

	return 0;
}