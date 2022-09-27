#include <iostream>
using namespace std;

class AAA {
public:
	AAA() {
		cout << "empty object" << endl;
	}
	void ShowYourName() {
		cout << "I'm class AAA" << endl;
	}
};

class BBB {
private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n) : ref(r), num(n) {
	}
};