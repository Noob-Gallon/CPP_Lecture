#include <iostream>

using namespace std;

class MyValue {
private:
	int x;
public:
	MyValue(int _x) : x(_x) {

	}
	/*void operator++() {
		this->x = this->x + 1;
		return;
	}*/
	/*MyValue operator++ () {
		this->x = this->x + 1;
		return *this;
	}*/

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
		// temp는 이 함수에서 사라지게 되므로,
		// reference type으로 넘겨주게 되면 오류가 발생한다.
		// 그러나 temp가 사라지게 되더라도, return될 때 다시 복사본이 넘어가기 때문에
		// 안전하게 넘어간다고 판단할 수 있다.
	}

	void showMyValue() {
		cout << "My Value : " << this->x << endl;
	}
};

int main(void) {

	MyValue v1(10);
	/*++(++v1);
	v1.showMyValue();

	++v1;
	++v1;

	v1.showMyValue();

	MyValue k = v1++;

	cout << "k : " << endl;
	k.showMyValue();

	cout << "v1 : " << endl;
	v1.showMyValue();*/

	++(v1++); // 11

	(++v1)++; // 12

	return 0;
}