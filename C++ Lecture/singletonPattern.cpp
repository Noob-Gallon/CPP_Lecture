#include <iostream>
#include <vector>

using namespace std;

class Car {
	
public:
	static Car* getInstance() { // static method 에서는 static member에만 접근할 수 있다.	
		if (instance == nullptr) {
			instance = new Car();
			return instance;
		}
		else {
			return instance;
		}
	}
	int myInt;
	void setMyInt(int _i) {
		myInt = _i;
	}
private:
	Car() {}
	static Car* instance;
};

Car* Car::instance = nullptr;

int main(void) {

	Car* car1 = Car::getInstance();
	Car* car2 = Car::getInstance();

	car1->setMyInt(10);
	cout << car1->myInt << endl;
	cout << car2->myInt << endl;
	
	car2->setMyInt(20);
	cout << car1->myInt << endl;
	cout << car2->myInt << endl;

	return 0;

}