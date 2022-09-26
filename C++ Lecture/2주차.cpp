#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void) {
	
	// p. 65 �����
	// ���迬����. (relational operator)
	// ==, !=, >, >=, <, <=
	
	// p. 66, C���� bool�� ����.
	bool b;
	b = (1 == 2);
	cout << boolalpha;
	cout << b << endl; // b���� 0.
	b = true;
	cout << b;

	cout << noboolalpha << endl;
	cout << b << endl;

	//string str;
	//do {
	//	
	//	// cin�� �Ѱ� : ������ \n(Enter, carriage return)���� �ν��Ѵ�.
	//	// �׷��� �� ������ �Է��Ϸ���, �ٸ� ����� ����Ѵ�.
	//	// getline(cin, str)
	//	// cin >> str;

	//	getline(cin, str); // carriage return�� �ƴϸ�, ���鵵 ���ڷ� ����Ѵ�. C����� gets(get string)�� ����. scanf�� ������ �������� �����.
	//	cout << "�Է� ���ڿ��� " + str << endl; // +�� ���ڿ��� ���� �ٿ��ش�. strcat, string concaternation. concaternate(�罽ó�� �մ�.)
	//} while (str != "end");

	// ��� ���� type�� ���������, C���� Java�� 
	// strictly typed language : Ÿ�� ����� ���
	// Python, JS�� ���� ���� ó����
	// implicitly typed language -> ������ ��������, ������� ������ �������.
	// �׷��� ��ȭ�ϴ� ��, �ٽ� type�� ���̰� ����. ����� �ð��� �������
	// ���꼺�� �ȳ���.

	// auto a = 10;

	for (auto i = 0; i < 10; i++) {
		cout << "Hello, World!" << endl;
	}

	// C++������ for loop�� �� ���� auto�� ���°� ����...

	// Q. �ֻ��� 2���� ������ 1,1�� ���� Ȯ���� �ùķ��̼��� ���ؼ� ����Ͻÿ�.
	// 1/36 = 0.027, 2.7%
	// ������ ���ڸ� ������ �Լ��� C++�� ����.

	// ��� �����Լ���... ������ sequence�� ���ڸ� �������� �����ϴ� ��ġ�� ���ؼ�
	// ����ϰ� �Ǵ°�. sequence�� �������� ��ġ�� seed��� �Ѵ�. seedrand => srand(unsigned int seed);

	int cnt = 0; // (1, 1)�� ������ ����.
	srand(1);
	
	cout << "rand max is " << RAND_MAX << endl;

	for (auto i = 0; i < 1000000; i++) {
		int k1 = rand() % 6 + 1;
		int k2 = rand() % 6 + 1;

		if (k1 == 1 && k2 == 1) {
			cnt++;
		}
	}

	cout << "10000�� �߿� " << cnt << "�� ���Դ�." << endl;

	// cplusplus.com�� ���� �ʿ��� �Լ����� ã�ƺ��� ���� �߿�...

	/*int a[5] = { 1,2,3,4,5 };
	int b[] = { 1,2,3,4,5 };
	int c[]{ 1,2,3,4,5 };*/

	// �̿� ���� �迭�� ������ ũ�⺸�� ���� ���� �������ָ�, ������ ������
	// all Zero�� �ʱ�ȭ�ȴ�.
	int d[10] = { 1, 2, };

	// string names[3] = { "tom", "jane", "james" };

	// p.99
	// range based for loop

	// python
	/*

		a = [1,2,3,4,5]
		for v in a :
			print v;

	*/
	
	// �迭�� �ִ� ��Ҹ� �ܼ��� ������ ����� ���� ������ ���� ����Ѵ�.
	int num[] = { 1,2,3,4,5 };
	for (int i : num) {
		cout << i << endl;
	}

	for (int k = 0; k < 5; k++) {
		cout << num[k] << endl;
	}

	for (auto i : num) {
		cout << i << endl;
	}
	
	string names[] = { "tom", "jane", "jerry" };

	for (auto& v : names) {
		cout << v << endl;
	}

	// pointer type int* i;
	// C���� C++�� �����͸� ��� ����.

	// �����͸� �̿��� �ּҷ� ã�ư��� ���� ������,
	// ������ ã�ư��� ������ ���������� ���� ���ɼ��� �ִ�.
	// �����ϰ� ���ϱ⵵ ������, ����ũ�� �ִ�.
	// �׷��� �ڹٿ����� �����͸� ���ֹ��ȴ�.

	// reference type int& i;
	// �����Ͷ� �Ȱ��� ����̴�. �� �ּҸ� ���� �Ժη� �ǵ帮���� ���Ѵ�.
	// �׷���, �� ������ �ּҸ� �ǵ帱 �� �ֵ��� �Ѵ�.
	// ������ ���ؼ� �� �ٸ� �̸��� ������ٰ� �� �� �ִ�.
	// ��, �����Ϳ� ���� ������ �� �� ������, �������� ���輺�� ���� �� �ִ�.
	
	int j = 100;
	int& i = j;

	i = 200;
	cout << j << endl;

	for (int& i : num) {
		i = 2 * i;
	}
	
	for (int i : num) {
		cout << i << endl;
	}

	return 0;
}