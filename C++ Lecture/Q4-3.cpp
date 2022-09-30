#include <conio.h> // _getch()
#include <iostream>
#include <windows.h> // HDC, GetWindowDC() , GetForegroundWindow()

using namespace std;

class Circle
{
public:
	int x, y;
	int radius;
	Circle() : x(0), y(0), radius(0) {}
	Circle(int _x, int _y, int _r) : x(_x), y(_y), radius(_r) {}

	void draw()
	{
		int r = radius / 2;
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - r, y - r, x + r, y + r);
	}

	void mode_right()
	{
		x += 100;
	}
};

int main()
{
	// ���� p.260 - ��������
	// ��ǥ : ���� p.258 ���� �ذ� �� ������� �ٸ� �Է����� ��ü ���� ����.
	// �߰� ���� : goto ������ ������� �ʰ� ����.
	cout << "Checking" << endl;
	Circle objArray[10];
	char ch;
	do {
		ch = _getch(); // ����ڷκ��� �ϳ��� ���ڸ� �Է¹޴´�.

		cout << "Checking" << endl;
		if (ch == 'q') {
			break;
		}
		else if (ch == 'm') {
			for (Circle& c : objArray) {
				c.mode_right();
				c.draw();
			}
		}
		else {
			for (Circle& c : objArray) { // reference ������ ��ü�� �޾Ƽ� ���� ���� �����ϰ� �� ������ ������� ���� �׸���.
				c.x = rand() % 500;
				c.y = rand() % 300;
				c.radius = rand() % 100;
				c.draw();
			}
		}

	} while (1);

	return 0;
}