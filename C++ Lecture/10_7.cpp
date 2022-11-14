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
	// �̰��� y�� ���� ������ �������� �ʴµ�, 
	// ���� �� ���� ������ �ٸ� ������ ħ���ϴ� ���̹Ƿ� �ſ� �����ϴ�.
	// �̸� ���� ���ؼ� dynamic_cast�� �̿��Ѵ�.
	delete c;
	delete p;

	Child* c = dynamic_cast<Child*>(p);

	c->x = 50;
	// c->y = 999;
	
	return 0;
}