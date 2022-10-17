#include <iostream>
#include <string>

using namespace std;

class StringAnalyzer {
public:
	StringAnalyzer(string _str) : str(_str) {

	};
	int getStrLength() {
		return str.length();
	}
	char getCharAt(int _idx) {
		if (_idx > str.length() - 1) {
			return 'A';
		}
		else {
			return str[_idx];
		}
	}
private:
	string str;
};

int main()
{
	string str;
	int k;

	getline(cin, str);
	cin >> k;

	StringAnalyzer sa(str);
	cout << sa.getStrLength() << endl;
	cout << sa.getCharAt(k);

	return 0;
}