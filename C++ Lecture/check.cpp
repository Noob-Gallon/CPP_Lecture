#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	int arr[] = {0, 1, 2, 3, 4};

	for (auto& _e : arr) {
		cout << _e << endl;
	}

	int* pArr = nullptr;
	pArr = new int[5];

	/*for (auto& _e : pArr) {

	}*/

	delete[] pArr;

	vector<int> myInts;

	for (int i = 1; i <= 5; i++) {
		myInts.push_back(i);
	}

	cout << "----------" << endl;

	// vector는 주소에 의해서 제거가능, 인덱스로는 제거 불가.
	myInts.erase(myInts.begin(), myInts.end()-1);

	for (auto& _e : myInts) {
		cout << _e << endl;
	}

	cout << "----------" << endl;

	string str = "Embedded";

	str.erase(2, 1); // Emedded
	cout << str << endl;

	cout << "----------" << endl;

	str.erase(2, 2); // Emded
	cout << str << endl;

	return 0;
}