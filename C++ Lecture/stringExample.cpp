#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string a;
	string b;

	cout << "cin �Է� : ";
	cin >> a;
	cout << "cin�� ��� : " << a << endl;
	cin.ignore(); // cin.ignore()�� �ϸ�, ���۸� �ϳ� ����ش�.
	// cin�� ����ؼ� string�� �Է¹��� ���, \n�� ���Ƽ� �ٷ� �ڿ� getline�� �� ���
	// carriage return�� ���� ������, �ݵ�� cin.ignore()�� ���ۿ� �����ϴ� \n (�� ���ڸ� ���� ����)
	// �� ����ֵ��� �Ѵ�.

	cout << "getline(cin, str) �Է� : ";
	getline(cin, b);
	cout << "getline�� ��� : " << b << endl;

	return 0;
}