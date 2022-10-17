#include <iostream>
#include <string>

using namespace std;

class StringAnalyzer {

public:
	StringAnalyzer(string _str) {
		str = _str;
	}
	int getStrLength() { // str�� ���� ��ȯ
		return str.length();
	}
	char getCharAt(int idx) { 
		// str�� idx ��ġ�� �ִ� ���� ��ȯ
		// ��, idx�� ��ȿ�� ������ �Ѿ�� ������ �빮�� 'A' ��ȯ.
		
		if (idx < str.length() && idx >= 0) {
			return str[idx];
		}
		else {
			return 'A';
		}
	}
private:
	string str;
};

int main(void) {

	string str;
	int k;

	getline(cin, str);
	cin >> k;

	StringAnalyzer sa(str);
	cout << sa.getStrLength() << endl;
	cout << sa.getCharAt(k);

	return 0;
}