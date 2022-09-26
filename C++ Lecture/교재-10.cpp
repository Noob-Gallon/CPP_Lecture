#include <iostream>
#include <string>

using namespace std;

int main(void) {

	int arr[26] = { 0, };
	string str;

	getline(cin, str);

	for (auto& k : str) {
		if (k >= 'a' && k <= 'z') {
			arr[k - 'a']++;
		}
		else if (k >= 'A' && k <= 'Z') {
			arr[k - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 'a') << ": " << arr[i] << endl;
	}

	return 0;
}