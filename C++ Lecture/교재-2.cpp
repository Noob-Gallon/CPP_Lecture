#include <iostream>

using namespace std;
const float meter_square = 3.3058;

class A {

public:
	A(float _area) {
		area = _area;
	}

	void cal() {
		cout.precision(5);
		cout << meter_square * area;
	}
private:
	float area;
};

int main(void) {

	float area;
	cin >> area;

	A a(area);
	a.cal();

	return 0;
}