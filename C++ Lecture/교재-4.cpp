#include <iostream>

using namespace std;

int main(void) {

	int input_value;
	int solution = 75;
	int cnt = 1;

	do {
		cout << "정답을 추측하여 보시오: ";
		cin >> input_value;

		if (input_value > solution) {
			cout << "제시한 정수가 낮습니다." << endl;
		}
		else if (input_value < solution) {
			cout << "제시한 정수가 높습니다." << endl;
		}
		else {
			cout << "축하합니다. 시도 횟수=" << cnt;
			break;
		}

		cnt++;

	} while (input_value != solution);

	return 0;
}