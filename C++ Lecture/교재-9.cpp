#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string str;
	getline(cin, str);
	
	int len = str.length();

	if (!isupper(str[0])) {
		str[0] = toupper(str[0]);
	}

	if (str[len - 1] != '.') {
		str += '.';
	}

	cout << str;

	return 0;
}