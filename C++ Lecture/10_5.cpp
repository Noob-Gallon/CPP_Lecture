#include <iostream>

using namespace std;

class Parent {
public:
	void whoareyou() {
		cout << "Parent" << endl;
	}
};

// 일반적으로 90% 이상은 상속받을 때 그냥 public inheritance를 사용한다.
// parent로부터 상속받아 child 클래스가 만들어진다.
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
	// kotlin은 따로 override라고 지정해서 함수를 지정한다음 써줘야 하는데, 이건 편하네?
	// kotlin은 super method를 이용해 superclass의 기존 method를 실행한다.

	Parent parent;
	parent.whoareyou(); // parent

	return 0;
}