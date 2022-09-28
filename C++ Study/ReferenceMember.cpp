#include <iostream>
using namespace std;

class AAA {
public:
	AAA() {
		cout << "empty object" << endl;
	}
	void ShowYourName() {
		cout << "I'm class AAA" << endl;
	}
};

class BBB {
private:
	AAA& ref;
	const int& num;

public:
	
	// BBB Class의 Constructor로 AAA Class의 Reference를 입력받는다.
	// 즉, BBB Class는 AAA Class type의 멤버 변수를 가지며, 이는 Reference type이므로
	// 실제로 instance화 된 AAA Class를 가리킬 수 있는 것이다.

	// Reference란, 마치 별명처럼 특정 공간에 지어진 새로운 이름이다.
	// 특정 변수의 메모리 공간에 새로운 별명(이름)을 지어줌으로써
	// Reference를 통해 마치 포인터 연산을 이용하듯이 값을 참조할 수 있게 해준다.
	// 포인터는 주소를 참조하는 도중 다른 메모리의 값을 건드릴 수 있다는 위험성이 있는데,
	// Reference를 이용하면 포인터의 위험성을 피하면서 포인터의 기능을 활용할 수 있다.

	// => 어떤 면에서 Reference가 포인터보다 좋고 나쁠까?

	BBB(AAA& r, const int& n) : ref(r), num(n) {
	}
};

int main(void) {

	AAA aaa;
	int n = 10;
	BBB(aaa, n);

	return 0;
}