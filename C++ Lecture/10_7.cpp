#include <iostream>

using namespace std;

class Parent {
public:
	int x;

	virtual void showme() {

	}
};

class Child : public Parent {
public:
	int y;

};

int main(void) {
	
	Parent* p = new Parent();
	Child* c = (Child*) p; 
	// 이것은 y에 대한 공간이 잡혀있지 않는데, 
	// 값을 쓸 수는 있지만 다른 영역을 침범하는 것이므로 매우 위험하다.
	// 이를 막기 위해서 dynamic_cast를 이용한다.
	delete c;
	delete p;

	Child* c = dynamic_cast<Child*>(p);

	c->x = 50;
	// c->y = 999;
	
	return 0;
}