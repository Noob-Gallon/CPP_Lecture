#include <iostream>
#include <string>

using namespace std;

class Object {

public:
	Object(string _a, string _b, string _c) {

		a = _a;
		b = _b;
		c = _c;

	}

	void print() {
		cout << a << " " << b << " a " << c;
	}

private:
	string a;
	string b;
	string c;
};

int main(void) {

	string a;
	string b;
	string c;

	//getline(cin, a);

	cout << "�־�: " << endl;
	cin >> a;
	cout << "����: " << endl;
	cin >> b;
	cout << "������: " << endl;
	cin >> c;
	
	Object object(a, b, c);
	object.print();

	return 0;
}