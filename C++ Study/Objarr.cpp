/*

만약, SoSimple arr[10]; 의 형태나
동적할당 SoSimple* classPtr = new SoSimple[10]; 과 같은 형태로
클래스 배열을 선언하면, 어쨌든 constructor는 호출된다.
단, constructor에 인수를 전달해줄 수 없으므로 이와 같은 형태로
클래스 배열을 선언하려면 반드시 parameter가 없는 constructor를 선언해주어야 한다.

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

	Person parr[3];
	cout << "Constructor called!" << endl;
	char namestr[100];
	char* strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;

		len = strlen(namestr) + 1;

		strptr = new char[len];
		strcpy(strptr, namestr);

		parr[i].SetPersonInfo(strptr, age);
	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	return 0;
}