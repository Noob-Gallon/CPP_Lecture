#include <iostream>
#include <string>

using namespace std;

bool checkHungry() {

	while (true) {

		cout << "����� ���� ������ʴϱ�?\n";

		string answer;

		cout << "\"��\" �Ǵ� \"�ƴϿ�\"�� �Է��ϼ��� : ";
		getline(cin, answer);

		if (answer == "��") {
			return true;
		}
		else if (answer == "�ƴϿ�") {
			return false;
		}
		else {
			cout << "�߸��� �Է��Դϴ�.\n\n\n";
		}

	}
	
}

int main(void) {

	bool TF;
	TF = checkHungry();

	if (!TF) {
		cout << "�׷��ٸ� �����սô�~\n";
		return 0;
	}

	cout << "������ ������ ���ðڽ��ϱ�? (�Է��ϼ���) : ";

	string answer;
	getline(cin, answer);

	cout << answer << "��(��) ������ ���ðڽ��ϱ�?" << endl;

	cout << "\"��\" �Ǵ� \"�ƴϿ�\"�� �Է��ϼ��� : ";
	getline(cin, answer);

	if (answer == "��") {
		cout << "���ô�! (�ڸ��� ������ �Ͼ��.)\n";
	}
	else {
		cout << "����...\n";
	}

}