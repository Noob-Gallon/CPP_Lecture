#include <iostream>
#include <string>

using namespace std;

class AAA {
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const {
		AAA* ptr = new AAA(n); 
		// Class ������ ��ü�� ������ ����Ϸ��� �������� �����ڸ� private���� �����Ѵ�.

		return *ptr;
	}
	void showNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}
};

int main(void) {

	AAA base;
	base.showNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.showNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.showNum();

	delete& obj1;
	delete& obj2;

	return 0;
}

// �� ���������� �� ������ ������ ��ü�� ������ ���·� ��ȯ�ϰ� �ִ�.
// �̴� �ռ� ������ '���� �Ҵ�� �޸� ������ ������ �����Ͽ�, �����ڸ� ���� ������ �����ϴ�.'
// ��� ����� �ٽ� �ѹ� Ȯ�ν��� �ش�. (���� �Ҵ�� �޸� ����?, ���� ���� ������ �Ҵ��ϴ� ����)
// �׸��� �� ���������� �ܼ��� private���� ����� �����ڸ� ���ؼ��� ��ü�� ������ �������� ������. (�� �̻��� �ǹ̴� ����)
// �� ������ Ŭ���� ������ ��ü�� �����ؼ� return ���ִ� public �Լ��� ���� �����ش�. Factory�� ��� ����?
// private �����ڵ� ���δ� �����ϰ� ���ȴ�. Ư�� ��ü�� ��������� �����ϰ��� �ϴ� ��쿡�� �ſ� �����ϰ� ���ȴ�.