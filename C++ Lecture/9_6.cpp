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
		// temp�� �� �Լ����� ������� �ǹǷ�,
		// reference type���� �Ѱ��ְ� �Ǹ� ������ �߻��Ѵ�.
		// �׷��� temp�� ������� �Ǵ���, return�� �� �ٽ� ���纻�� �Ѿ�� ������
		// �����ϰ� �Ѿ�ٰ� �Ǵ��� �� �ִ�.
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