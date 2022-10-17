#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string a;
	string b;

	cout << "cin 입력 : ";
	cin >> a;
	cout << "cin의 결과 : " << a << endl;
	cin.ignore(); // cin.ignore()를 하면, 버퍼를 하나 비워준다.
	// cin을 사용해서 string을 입력받을 경우, \n이 남아서 바로 뒤에 getline을 할 경우
	// carriage return이 남기 때문에, 반드시 cin.ignore()로 버퍼에 존재하는 \n (한 문자만 제거 가능)
	// 을 비워주도록 한다.

	cout << "getline(cin, str) 입력 : ";
	getline(cin, b);
	cout << "getline의 결과 : " << b << endl;

	return 0;
}