#include <iostream>

using namespace std;

class Pizza {
private:
	int radius; // 피자의 반지름
public:
	Pizza(int r = 0) : radius(r) {
		cout << "Pizza constructor was invoked!" << endl;
	}
	void setRadius(int r) {
		this->radius = r;
	}
	void showRadius() {
		cout << "pizza radius: " << this->radius << endl;
	}
};

void doubleSize(Pizza p) {
	p.setRadius(20);
}

void doubleSize(Pizza* p) {
	p->setRadius(20);
}

/* 그런데, C++에서 참조자는 overloading이 되지 못하므로, 함수 명을 바꿔준다.
void doubleSize(Pizza& p) {
	p.setRadius(20);
}
*/

void doubleSize_re(Pizza& p) {
	p.setRadius(20);
}

int main(void) {

	Pizza p(10);

	p.showRadius();
	doubleSize_re(p);
	p.showRadius(); 

	return 0;
}