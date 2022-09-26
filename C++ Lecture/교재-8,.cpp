#include <iostream>

using namespace std;

int main(void) {

	string phone_number;
	cin >> phone_number;

	for (auto& k : phone_number) {
		if (k == '(' || k == ')') {
			continue;
		}

		cout << k;
	}

	return 0;
}