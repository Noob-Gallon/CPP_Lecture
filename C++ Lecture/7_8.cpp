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

	Pizza p1(10);
	Pizza p2(20);
	p2 = p1; 
	// 이런 경우에는 그냥 대입 연산자가 활용된다.
	// 복사 생성자가 호출되지 않는다.

	Pizza p3 = p1;
	// p3는 복사가 되는 것이므로, p1을 인수로 전달받아서
	// 복사 생성자를 호출한다.

	Pizza p4(p1);
	// p3와 마찬가지로 p1이 복사가 되는 것이다.
	// 단지 방법이 다를 뿐이다.

	// p2 = p1은 서로 집이 있는 놈들이므로, 그냥 대입 연산자를 활용해
	// 값을 대입해준다. 복사 생성자를 호출하는 것이 아니다.

	// 이와 다르게 p3, p4는 p1을 인수로 전달받아 복사 생성자를 호출하는 것이다.

	return 0;
}