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
	} // c++������ this�� class�� �ּҸ� ��ȯ�ϴ� ������ �Ѵ�.
		// ����, this�� �̿��Ͽ� ���� method�� member�� ������ ����
	// this->... �� ����Ѵ�.

	void ShowSimpleData() {
		cout << num << endl;
	}
	SoSimple* GetThisPointer() {
		return this;
	}
};

int main(void) {

	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 ��ü�� �ּ� ����.
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}