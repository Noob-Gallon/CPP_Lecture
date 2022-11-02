#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	vector<int> arr;
	int size = 0;

	while (1) {

		int i;
		cin >> i;

		if (i < 0) {
			int reverse = -1 * i;
			
			for (int j = 0; j < arr.size(); j++) {
				if (arr[j] == reverse) {
					arr.erase(arr.begin()+j);
					j--;
				}
			}
		}
		else if (i == 0) {
			if (arr.size() == 0) {
				cout << "empty";
				break;
			}

			for (auto& _e : arr) {
				cout << _e << " ";
			}

			break;
		}
		else {
			arr.push_back(i);
		}
	}

	cout << "My name is dongkyo kim!\n";

	return 0;
}