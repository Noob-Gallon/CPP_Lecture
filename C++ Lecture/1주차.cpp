#include <iostream> 
// C++���� �����ϴ� h������ ���� �����Ѵ�.
// �׷��� C++ ���� header file���� �����ϴµ�,
// ��׸� ������ �� �־�� �ϱ� ������ h�� ������ �ʴ´�.

#include <string.h>
#include <string>

// #include <stdio.h> printf, scanf ����.

using namespace std;

int main(void) {

	// std::cout << "Hello, world!" << endl;
	cout << "Hello, world!" << endl; // endOfLine carriage return : \n
	
	// std�� �����ΰ�?
	// name space, �̸� ���� ������ �����Ѵ�. (���͹ٸ�)

	// short - 2
	// int - 4
	// long - 4
	// long long - 8

	// char - 1
	// float - 4
	// double - 8
	// long double - 8

	// C++ �߰���
	// bool : 1

	// ���ڿ��� : String (String Type�� ��������...)
	
	string s1 = "hello";
	string s2 = " world";

	// string�� data type���� ���Դ�.
	cout << s1 + s2 << endl;

	cout << (s1 == s2) << endl;

	int k = 10;

	cout << s1 << " " << to_string(k) + s2 << endl;
	// to_string�� string header �ȿ� ����ִ�. std::to_string(k)
	// std::to_string(val)

	const int k2 = 10;

	bool b;
	b = true;
	
	bool c;
	c = false;

	cout << b << " " << c << endl;

	// p. 45
	// auto

	int k3 = 10;

	auto v = 20;
	auto v2 = 13.3;
	// Ÿ�� �߷�, �׷��� ���� ����� �ƴϴ�.

	return 0;
}














