#include <iostream> 
using namespace std; /* �� ���� overloading�� �Լ� foo�� �����Ͻÿ�. */ 

int foo(int _a) {
	return -_a;
}

int foo(int _a, int _b) {
	return _a + _b;
}

char foo(string _str) {
	return _str[_str.size() - 1];
}

int main()
{ 
	int a, b;
	cin >> a >> b;

	cout << foo(a) + foo(foo(a, b)) << endl;

	string c;
	cin >> c;

	cout << foo(c) << endl; return 0;
}