#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {

	return a > b;

}

int main(void) {

	vector<int> first{ 1, 2, 3, 4, 5 };

	sort(first.begin(), first.end(), compare);
	// 맨 끝이 포함되지 않는다.
	// 함수의 이름을 그대로 넣는다.	

	for (auto v : first) {
		cout << v << endl;
	}

	return 0;
}