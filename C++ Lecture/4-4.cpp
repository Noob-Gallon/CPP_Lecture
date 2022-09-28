#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	vector<int> first(5);

	//for (auto& v : first) {
	//	cout << v << endl;
	//}

	// cout << first[5] << endl;
	// cout << first.at(5) << endl; // at�� Vector�� method. �� index�� ���� ���� �����´�.

	first.push_back(100);
	first.push_back(200);

	cout << "first: " << first.front() << " " << "back: " << first.back() << endl;
	// ��Ҹ� ��ȯ���ִ� �ڵ�, ������ �ʴ´�.

	first.pop_back(); // pop_back�� ��ȯ���� �������� �ʴ´�.

	// being, end
	// p.266

	for (auto p = first.begin(); p != first.end(); p++) {
		cout << *p << endl;
	}

	auto p = first.begin();
		cout << *(p + 5) << endl;

	//for (auto v : first) {
	//	cout << v << endl;
	//}

	vector<int> b;
	b = first;

	if (first == b) { // Linked
		cout << "they are same" << endl;
	}

	// insert
	first.insert(first.begin(), 999); // (address, value)
	first.insert(first.begin()+1, 50); // (address, value)
	cout << first.at(0) << endl; // 999
	cout << first.at(1) << endl; // 999

	// clear
	first.clear();
	cout << "size: " << first.size() << endl;

	return 0;
}