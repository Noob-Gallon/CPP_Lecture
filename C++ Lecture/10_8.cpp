#include <iostream>

using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "Animal!" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() {
		cout << "Dog!" << endl;
	}
};

int main(void) {

	Animal* a = new Dog(); // upcasting
	a->speak(); // Dog!
	
	Dog d;
	Animal& aa = d; // reference type
	aa.speak(); // 얘도 역시 Dog!를 부른다.

	Dog d2;
	Animal a2 = d2;
	a2.speak();

	return 0;
}