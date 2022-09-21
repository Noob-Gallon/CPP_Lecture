#include <iostream>
#include <string>

using namespace std;

// p.106 2���� �迭

// p. 128, �Լ� ����, function prototype.
int fun1(int a); // function prototype...
// �����Ϸ����� ��Ʈ�� �ִ� ��. ���� body�� �ڿ� �ִٴ� ���� ������.
// function header��� �Ҹ�.

int fun1(int a) {
	return a;
}

// primitive type, �������� ũ�Ⱑ ���� ����
// �׳� �����ؼ� ����ص� �ȴ�.
// call-by-value
int my_func(int a, int b) {
	cout << "my_func : " << a + b << endl;
	return a + b;
}

// call-by-reference... ��뷮 �������� ���,
// ������ �����ϸ� �ð��� ���� �ɸ���, �޸𸮵� ���� ��ƸԱ� ������
// �������� ��쿡�� call-by-reference�� �����͸� ó���Ѵ�.

int my_func(int* a, int* b) {
	*a = 100;
	*b = 200;

	cout << "my_func* : " << *a + *b << endl;
	
	return *a + *b;
}

// Global Variable�� �޸� �� ���������� ����ȴ�.
int a = 10;
int b = 20;
int w = 30;

void mySwap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	*(b + 1) = 666;
}

// reference variable...
void mySwapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;

	//b + 1 = 666; Reference Value�� �ּҰ� �ƴϱ� ������ �̿� ���� ������ �Ұ����ϴ�...
	// ���� ������, Reference�� ����ؾ� �Ѵ�.
	// �����͸� �̿��ؼ� �ּҸ� ������ �̵��Ϸ��� �����͸� ����ص� �ȴ�!

}

int my_add(int* a, int* b) {
	return 0;
}

float my_add(float* a, float* b) {
	return 0.0;
}

// p. 140, default parameter...

int myFunc(int a, float b=3.14) {
	return 0;
}

int myFunc2(int a, int b = 10, int c = 20) {
	return 0;
}

// ---------------------------------------------

// p. 145
// inline function...

// Detail�� ����.
// inline�� �ƴ� �Լ��� �����ϸ�, main���� �ش� �Լ��� ����� ��
// �ش� �ڵ�(�Լ�)�� ����Ǿ� �ִ� �κ�(�޸�)���� �̵��ؼ� ������ ��, �ٽ� ���ƿ´�.
// �ش� �κ��� ���� �κ�(���ƿ� ��)�� arguments���� ������ �̵��Ѵ�...
// �׸��� ������� ������, �ٷδ� ����������, �ϴ� �� ���� �����ص״ٰ� return ���� �����س��� �ּҸ� ������
// �Ʊ� �����س��� �ּҷ� �ٽ� ���ƿ´�. (�������� overhead�� ����.)
// �׷��� recursive function�� �ִ��� ���ؾ� �Ѵ�.

inline int inline_func(int a, int b) {
	/*
	* 
	* ...
	* 
	*/
	return a + b;
}
// inline���� �Լ��� �����ϸ�, �׳� �� �ڵ带 �Լ��� ����� �κп� �ھƳ־
// �ٷ� ������ �� �ְ� �Ѵ�. �ӵ��� �����ϰ� ��������, ������ ���� ���Ǹ�
// �ڵ� ���̰� �� ������� ������ overhead�� ���� ���� �ִ�...

// ������ + �� �����͸� ó���� �� �ִ� �ڵ�(�Լ�) = Ŭ����(class)
// ���꼺�� ����.
class node {
	float r;
	int data;

	void showData() {
		cout << data << endl;
	}
};
// ������ structure�̴�.
// structure -> class... Ŭ������ �ٸ� ����, �ȿ� �޼��嵵 �־��ش�.

int main(void) {

	// p. 167
	// object oriented programming, OOP
	// ��ü���� ���α׷���, �з������� �ٲ��...

	string s1 = "hello";
	string s2 = "world";

	// p. 151, string member function
	// s1[0]
	cout << boolalpha;
	cout << s1.empty() << endl;
	cout << s1.insert(2, s2) << endl; // s1�� �� ��° ��ġ, s1[2]���Ϳ� s2�� insert�Ѵ�.
	cout << s1.find("llo") << endl;

	return 0;
	
	string s3 = s1 + s2;
	s1 += s2;

	if (s1 == s2) {
		
	}

	if (s1 != s2) {

	}

	if (s1 < s2) {

	}
	
	myFunc(10);
	myFunc(20, 5.16);

	myFunc2(10);
	myFunc2(10, 100);
	myFunc2(10, 100, 1000);

	// ---------------------------------------------

	int x3 = 10;
	int y3 = 20;
	int v3 = 30;
	cout << x3 << " " << y3 << " " << v3 << endl;
	mySwapRef(x3, y3);
	cout << x3 << " " << y3 << " " << v3 << endl;

	return 0;

	// ---------------------------------------------

	cout << a << " " << b << " " << w << endl;
	mySwap(&a, &b);
	cout << a << " " << b << " " << w << endl;

	return 0;

	// ---------------------------------------------

	// p. 130 �Լ� ȣ��� �μ����� ���
	// call-by-value
	// call-by-reference, ���ݺ��� �� ���!
	// �̰� ������ �߿��� ����̾�.

	// primitive type���� ����Ѵ�. �غ��� 8����Ʈ?
	// �׷� ���� call-by-value�� ���� ������ �����Ѵ�...

	int x = 10;
	int y = 20;
	int v = my_func(x, y);

	int x2 = 10;
	int y2 = 20;
	int v2 = my_func(&x2, &y2);

	return 0;

	// ---------------------------------------------


	// ���� C������ �Լ��� ����ϱ� ���� �Լ��� ����Ǿ���Ѵ�.
	// �����Ϸ��� ����� �������ϴ� �������� �ص��صΰ�,
	// �׷��� �������� ���Ǵ� �Լ� ȣ���� �ҷ��� �� �ֱ� ����...
	int k = fun1(10);
	cout << k << endl;
	
	// ---------------------------------------------

	string names[] = { "james", "john", "tom" };

	for (auto v : names) {
		for (auto c : v) {
			cout << c << endl;
		}
	}

	// ---------------------------------------------

	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// ���� ���
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << endl;
		}
	}

	// range based for loop
	for (auto& v : a) { // �� ó���� v���� ū ���, {1, 2, 3}�� ����. v2�� 1, 2, 3���� ���õȴ�.
		// �� &�� �־�߸� ���ư��°�?
		// &�� ������ ������, ù ��° ���� �迭�� ���� �ּҰ� ���´�...
		// ���� &�� ���̸�? : int* a; (a�� pointer variable�̰�, a���� �ּҰ� ����.)
		// c++������ int& a; �� �ȴ�. �����Ϳ� ����� ������, �� ������ �ٸ� �̸��� ���̴� �Ͱ� ���� ����� �Ѵ�.
		

		for (auto v2 : v) {
			cout << v2 << endl;
		}
	}

	return 0;
}