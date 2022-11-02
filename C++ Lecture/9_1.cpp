#include <iostream>

using namespace std;

class MyObj {
private:
	int i;
	float j;
public:
	static int k;
public:
	MyObj(int _i, float _j) : i(_i), j(_j) {

	}
	void showMyContents() {
		cout << "i : " << i << ", j : " << j << endl;
		cout << "k : " << k << endl;
	}
	static void showStatics() {
		cout << "I am a static function, method\n";
		// cout << i << " " << j << endl; // 호출 불가.
		cout << k << endl; // static variable이므로, 호출 가능.
	}
};

int MyObj::k = 10; // static variable의 초기화

int main(void) {

	MyObj::showStatics();

	return 0;
}