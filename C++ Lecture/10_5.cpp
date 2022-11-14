#include <iostream>

using namespace std;

class Parent {
public:
	void whoareyou() {
		cout << "Parent" << endl;
	}
};

// �Ϲ������� 90% �̻��� ��ӹ��� �� �׳� public inheritance�� ����Ѵ�.
// parent�κ��� ��ӹ޾� child Ŭ������ ���������.
class Child : public Parent {
public:
	void whoareyou() {
		Parent::whoareyou();
		cout << "Child" << endl;
	}
};

int main(void) {

	Child child;
	child.whoareyou(); // child
	child.Parent::whoareyou(); 
	// kotlin�� ���� override��� �����ؼ� �Լ��� �����Ѵ��� ����� �ϴµ�, �̰� ���ϳ�?
	// kotlin�� super method�� �̿��� superclass�� ���� method�� �����Ѵ�.

	Parent parent;
	parent.whoareyou(); // parent

	return 0;
}