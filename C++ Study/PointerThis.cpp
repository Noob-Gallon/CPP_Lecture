#include <iostream>
#include <string>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	} // c++에서는 this가 class의 주소를 반환하는 역할을 한다.
		// 따라서, this를 이용하여 내부 method나 member를 참조할 때는
	// this->... 를 사용한다.

	void ShowSimpleData() {
		cout << num << endl;
	}
	SoSimple* GetThisPointer() {
		return this;
	}
};

int main(void) {

	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 객체의 주소 저장.
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}