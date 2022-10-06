#include <iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "객체 생성" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;
		return *this; // this는 주솟값, 주솟값에 *를 붙여주면 그 값이다. 참조자는 argument로 전달받거나 전달할 때 주소로 전달 x?
	}
	SelfRef& ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}
};

int main(void) {

	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);


	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	SelfRef& ref2 = ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	// Adder method와 ShowTwoNumber method가 reference를 return하므로,
	// 이와 같이 연쇄적인 method의 사용이 가능하다.
	cout << "중간 검사" << endl;
	ref2.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}