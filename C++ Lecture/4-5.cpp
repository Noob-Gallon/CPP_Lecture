#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {

	return a < b;

}

int main(void) {

	vector<int> first{ 5, 4, 3, 2, 1 };

	sort(first.begin(), first.end(), compare);
	// �� ���� ���Ե��� �ʴ´�.
	// �Լ��� ������ �״�� �ִ´�.	

	for (auto v : first) {
		cout << v << endl;
	}

	return 0;
}