/*

이전 예제에서는 Class 배열을 직접 할당했지만
이번에는 동적할당을 통해 배열을 생성한다.

*/

// ---------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person() {
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage) {
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {

	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	delete parr[0];
	cout << "Deletion Check" << endl;
	delete parr[1];
	delete parr[2];

	return 0;
}