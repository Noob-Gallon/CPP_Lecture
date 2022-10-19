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
		cout << "이게 바로 복사 생성자입니다." << endl;
	}
	void setRadius(int r) {
		this->radius = r;
	}
	void showRadius() {
		cout << "pizza radius: " << this->radius << endl;
	}
	~Pizza() {
		cout << "Destructor 호출됨" << endl;
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
	Pizza p2(p1); // Class p2는 p1을 복사한다.

	cout << "복사 생성자 체크\n";

	return 0;
}