#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string str;
	getline(cin, str);

	cout << str << endl;
	cout << *(str.begin()) << endl;
	cout << *(str.end() - 1) << endl;
	cout << str.front() << endl;
	cout << str.back() << endl;
	cout << str.size() << " " << str.length() << endl;
	str.insert(2, "HEY!"); // string의 insert는 지정한 idx 앞이 아니라 그 자리이다...
	// cout << str.find("hey"); // 특정 pattern이 처음 등장하는 idx
	cout << str.erase(0, 2); // left idx부터, right idx 이전까지 제거한다.

	return 0;
}