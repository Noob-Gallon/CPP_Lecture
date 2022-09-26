#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string a, b;

	cin >> a;
	cin >> b;

	if (a == b) {
		cout << "두 문자열이 같습니다.";
	}
	else {
		cout << "두 문자열이 다릅니다.";
	}

	return 0;
}