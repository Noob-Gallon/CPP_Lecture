#include <iostream>
#include <string>

using namespace std;

bool checkHungry() {

	while (true) {

		cout << "당신은 지금 배고프십니까?\n";

		string answer;

		cout << "\"예\" 또는 \"아니오\"를 입력하세요 : ";
		getline(cin, answer);

		if (answer == "예") {
			return true;
		}
		else if (answer == "아니오") {
			return false;
		}
		else {
			cout << "잘못된 입력입니다.\n\n\n";
		}

	}
	
}

int main(void) {

	bool TF;
	TF = checkHungry();

	if (!TF) {
		cout << "그렇다면 공부합시다~\n";
		return 0;
	}

	cout << "무엇을 먹으러 가시겠습니까? (입력하세요) : ";

	string answer;
	getline(cin, answer);

	cout << answer << "을(를) 먹으러 가시겠습니까?" << endl;

	cout << "\"예\" 또는 \"아니오\"를 입력하세요 : ";
	getline(cin, answer);

	if (answer == "예") {
		cout << "갑시다! (자리를 박차고 일어난다.)\n";
	}
	else {
		cout << "히잉...\n";
	}

}