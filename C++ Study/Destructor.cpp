/*

소멸자는 Class가 소멸될 때 사용된다.
반환형이 선언되어 있지 않으며, 실제로 반환하지 않는다.
매개변수는 void형으로 선언되어야 하기 때문에 오버로딩도, 디폴트 값 설정도 불가능하다.

만약 사용자가 custom destructor를 정의하지 않으면 constructor와 마찬가지로
default constructor가 자동으로 호출된다.

class AAA {
...
};

이 클래스는 아래의 정의와 동일하다.

class AAA {
public:
	AAA() {}
	~AAA() {}
};

desturctor는 destructor 이름 앞에 ~를 붙여준다.

이러한 소멸자는 대개 생성자에서 할당한 리소스의 소멸에 사용된다.
예를 들어서 생성자 내에서 new 연산자를 이용해서 할당해 놓은 메모리 공간이 있다면,
소멸자에서는 delete 연산자를 이용해서 이 메모리 공간을 소멸한다.

*/

// -------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>



using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(char* _myname, int _myage) {
		int len = strlen(_myname) + 1;
		name = new char[len];
		strcpy(name, _myname);
		age = _myage;
	}

	void ShowPersonInfo() const {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {

	char str1[] = "Lee dong woo";
	char str2[] = "Jang dong gun";

	Person man1(str1, 29);
	Person man2(str2, 41);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
