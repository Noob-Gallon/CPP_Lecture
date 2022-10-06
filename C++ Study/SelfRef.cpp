#include <iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "��ü ����" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;
		return *this; // this�� �ּڰ�, �ּڰ��� *�� �ٿ��ָ� �� ���̴�. �����ڴ� argument�� ���޹ްų� ������ �� �ּҷ� ���� x?
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
	// Adder method�� ShowTwoNumber method�� reference�� return�ϹǷ�,
	// �̿� ���� �������� method�� ����� �����ϴ�.
	cout << "�߰� �˻�" << endl;
	ref2.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}