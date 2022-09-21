#include <iostream>
#include <string>
#include <windows.h>
#include "Circle2.h"

using namespace std;

class BankAccount {

	// money�� class ���ο����� �ǵ帱 �� �ִ�.
	// �̿� ���� �����͸� public: private:�� �̿��Ͽ�
	// �����͸� ��ȣ�ϴ� ���� ���������̶�� �Ѵ�.

	// �����͸� �ǵ帮�� ���� ���� class ���ο��� ������
	// �޼��带 ���ؼ��� �ǵ帱 �� �ִ�.
	// �׸��� �� �޼��� ���� ��� ������ġ�� �� �����Ǿ� �ִ�.
private:
	int money;
public:
	void setMoney(int m) {
		if (m < 0) {
			money = 0;
			return;
		}
		money = m;
	}
	void showMoney() {
		cout << "You have " << money << " won." << endl;
	}
};

class Circle {
	
public:
	int x, y, radius;
	string color;

	double calcArea() {
		return 3.14 * radius * radius;
	}

	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow()); // Windows API, Application Programming Interface
		// Windows Programming�� �� ��, �ϵ��� ����ϱ� ���� �����ҷ��� �θ��� ��...
		// Direct Context : ��ȭ��? => Graphical�ϰ� �� �׸��� ��...
		// Window�� ��ȭ���� �����Ͷ�.
		// HDC -> Handler Direct Context, H�� DC�� ���� �����͸� �ǹ��Ѵ�.
		Ellipse(hdc, y - radius, y - radius, x + radius, y + radius);
	}
};

// p. 188, ����Լ� �ߺ�
// p. 189, Ŭ���� �������̽��� ������ �и�

int main(void) {

	// p. 185 ��������
	// x��ǥ�� 200���� 600����, 50�� ������Ű�鼭
	// ���� �׷� ���ÿ�.

	// ------------------------------------

	// unsigned int��... -1�� unsigned int�� �ٲٸ�
	// ���� ū ������ �ٲ� �ܾ��� �ٲ��.
	// ex) ��Ʋ������ �ߴ�, ��Ʋ�������� byte�� unsigned int�� ���� ������,
	// ���ڸ��� 1�̸� ������ ���´�... �׸��� �Ųٷ� �ȴ�. (2�� ���� + 1)

	BankAccount a;
	BankAccount b;
	BankAccount d;
	a.setMoney(-100);
	b.setMoney(100);
	d.setMoney(1000);
	
	a.showMoney();
	b.showMoney();
	d.showMoney();

	Circle c;
	c.y = 300;
	c.radius = 100;
	
	//for (auto i = 300; i <= 550; i += 50) {
	//	c.x = i;
	//	c.draw();
	//}

	return 0;
}