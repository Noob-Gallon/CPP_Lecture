#include <iostream>

using namespace std;

class Pizza {
private:
	int radius;
public:
	Pizza(int r = 0) : radius(r) {
		cout << "Pizza constructor was invoked!" << endl;
	}
	Pizza(const Pizza& p) {
		cout << "�̰� �ٷ� ���� �������Դϴ�." << endl;
	}
	void setRadius(int r) {
		this->radius = r;
	}
	void showRadius() {
		cout << "pizza radius: " << this->radius << endl;
	}
	~Pizza() {
		cout << "Destructor ȣ���" << endl;
	}
};

Pizza createPizza(int r) {
	Pizza p(r);
	return p;
}

void doubleSize(Pizza _p) {
	_p.setRadius(20);
}

int main(void) {

	Pizza p1(10);
	Pizza p2(20);
	p2 = p1; 
	// �̷� ��쿡�� �׳� ���� �����ڰ� Ȱ��ȴ�.
	// ���� �����ڰ� ȣ����� �ʴ´�.

	Pizza p3 = p1;
	// p3�� ���簡 �Ǵ� ���̹Ƿ�, p1�� �μ��� ���޹޾Ƽ�
	// ���� �����ڸ� ȣ���Ѵ�.

	Pizza p4(p1);
	// p3�� ���������� p1�� ���簡 �Ǵ� ���̴�.
	// ���� ����� �ٸ� ���̴�.

	// p2 = p1�� ���� ���� �ִ� ����̹Ƿ�, �׳� ���� �����ڸ� Ȱ����
	// ���� �������ش�. ���� �����ڸ� ȣ���ϴ� ���� �ƴϴ�.

	// �̿� �ٸ��� p3, p4�� p1�� �μ��� ���޹޾� ���� �����ڸ� ȣ���ϴ� ���̴�.

	return 0;
}