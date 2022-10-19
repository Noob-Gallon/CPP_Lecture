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

	Pizza p1(20);
	Pizza p2(p1); // Class p2�� p1�� �����Ѵ�.

	cout << "���� ������ üũ\n";

	return 0;
}