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
	
	// BBB Class�� Constructor�� AAA Class�� Reference�� �Է¹޴´�.
	// ��, BBB Class�� AAA Class type�� ��� ������ ������, �̴� Reference type�̹Ƿ�
	// ������ instanceȭ �� AAA Class�� ����ų �� �ִ� ���̴�.

	// Reference��, ��ġ ����ó�� Ư�� ������ ������ ���ο� �̸��̴�.
	// Ư�� ������ �޸� ������ ���ο� ����(�̸�)�� ���������ν�
	// Reference�� ���� ��ġ ������ ������ �̿��ϵ��� ���� ������ �� �ְ� ���ش�.
	// �����ʹ� �ּҸ� �����ϴ� ���� �ٸ� �޸��� ���� �ǵ帱 �� �ִٴ� ���輺�� �ִµ�,
	// Reference�� �̿��ϸ� �������� ���輺�� ���ϸ鼭 �������� ����� Ȱ���� �� �ִ�.

	// => � �鿡�� Reference�� �����ͺ��� ���� ���ܱ�?

	BBB(AAA& r, const int& n) : ref(r), num(n) {
	}
};

int main(void) {

	AAA aaa;
	int n = 10;
	BBB(aaa, n);

	return 0;
}