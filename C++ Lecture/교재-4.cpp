#include <iostream>

using namespace std;

int main(void) {

	int input_value;
	int solution = 75;
	int cnt = 1;

	do {
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> input_value;

		if (input_value > solution) {
			cout << "������ ������ �����ϴ�." << endl;
		}
		else if (input_value < solution) {
			cout << "������ ������ �����ϴ�." << endl;
		}
		else {
			cout << "�����մϴ�. �õ� Ƚ��=" << cnt;
			break;
		}

		cnt++;

	} while (input_value != solution);

	return 0;
}