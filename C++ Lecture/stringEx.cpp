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
	str.insert(2, "HEY!"); // string�� insert�� ������ idx ���� �ƴ϶� �� �ڸ��̴�...
	// cout << str.find("hey"); // Ư�� pattern�� ó�� �����ϴ� idx
	cout << str.erase(0, 2); // left idx����, right idx �������� �����Ѵ�.

	return 0;
}