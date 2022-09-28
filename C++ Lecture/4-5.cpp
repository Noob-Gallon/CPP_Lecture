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
	// 맨 끝이 포함되지 않는다.
	// 함수의 일음을 그대로 넣는다.	

	for (auto v : first) {
		cout << v << endl;
	}

	return 0;
}