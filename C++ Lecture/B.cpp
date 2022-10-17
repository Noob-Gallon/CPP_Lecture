#include <iostream>
#include <string>

using namespace std;

class StringAnalyzer {

public:
	StringAnalyzer(string _str) {
		str = _str;
	}
	int getStrLength() { // str의 길이 반환
		return str.length();
	}
	char getCharAt(int idx) { 
		// str의 idx 위치에 있는 문자 반환
		// 단, idx가 유효한 범위를 넘어가면 무조건 대문자 'A' 반환.
		
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