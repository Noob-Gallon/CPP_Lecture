#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	vector<int> intVect;

	for (int i = 1; i <= 10; i++) {

		intVect.push_back(i);
	}

	for (auto& _e : intVect) {
		cout << _e << " -> ";
	}
	cout << "\nSize of the intVect : " << intVect.size();

	return 0;
}