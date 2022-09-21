#include <iostream>

struct point {
	int x;
	int y;
};

// Class�� �׳� �ϳ��� Data Type�̴�...
// struct�� ���� ��κ��� instance�� ���������
// ������ ���, �����͸� ó���� �� �ְ� �ȴ�.
class Point {
	int x;
	int y;

	// �ڱ� �ȿ� �ִ� �����͸� ���μ����� �� �ִ�.
	/*void add() {
		return x + y;
	}*/
};



int main(void) {

	// a�� ������� �Ѵ�.
	struct point a;
	struct point b;

	// class�� Ư���� ��� ���� �ٷ� class name���� type�� �����Ѵ�.
	// ���⼭ ����� Point a, b�� ��ü��� �ϸ� ����δ� instance��� �Ѵ�.
	// �����̱� �����ε�, �� ��ü�� ó���� �� �ִ� �ڵ�(�Լ�)�� �����Ѵ�.
	Point a;
	Point b;

	a.x = 10;
	a.y = 20;

	b.x = 100;
	b.y = 200;

	/*
		p. 167
		object oriented programming, OOP.
		��ü���� ���α׷���.
	


		p. 170
		1960��뿡 SIMULA ---> c++ ---> JAVA ---> C# ---> ...



		p. 168 ���� ���� ���α׷���
		procedural programming
		procedure ---> function
		c: data�� function�� �и��Ǿ� ����...



		p. 172 ��ü�� �������� �̷�����°�?
		��ü�� �����ΰ�?
		1. member variable ==  member field, attribute
		2. member function == method



		p. 174 Ŭ������ ��ü�� ���赵...
		

	*/

	return 0;
}