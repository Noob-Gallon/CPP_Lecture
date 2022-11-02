#include <iostream>

using namespace std;

class MyOnlyObj {
public:
	static MyOnlyObj* getInstance() {
		if (instance == nullptr) {
			instance = new MyOnlyObj();
		}

		return instance;
	}
	void showD() {
		cout << "D : " << d << endl;
	}
	void setD(int _d) {
		this->d = _d;
	}

private:
	int d;
private:
	static MyOnlyObj* instance;

	MyOnlyObj() {
		this->d = 100;
	}
};

MyOnlyObj* MyOnlyObj::instance = nullptr; // static 변수는 처음에 무조건 초기화를 해주어야 한다.

int main(void) {

	MyOnlyObj* p1 = MyOnlyObj::getInstance();
	MyOnlyObj* p2 = MyOnlyObj::getInstance();
	MyOnlyObj* p3 = MyOnlyObj::getInstance();

	p1->showD();
	p2->setD(300);
	
	p1->showD();

	return 0;
}