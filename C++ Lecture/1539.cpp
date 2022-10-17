#include <iostream> 
using namespace std; /* 이 곳에 overloading된 함수 foo를 정의하시오. */ 

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