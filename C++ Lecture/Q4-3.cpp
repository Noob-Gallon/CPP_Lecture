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
	// 교재 p.260 - 도전문제
	// 목표 : 교재 p.258 문제 해결 후 사용자의 다른 입력으로 객체 정보 수정.
	// 추가 설명 : goto 구문을 사용하지 않고 구현.
	cout << "Checking" << endl;
	Circle objArray[10];
	char ch;
	do {
		ch = _getch(); // 사용자로부터 하나의 문자를 입력받는다.

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
			for (Circle& c : objArray) { // reference 변수로 객체를 받아서 직접 값을 대입하고 그 정보를 기반으로 원을 그린다.
				c.x = rand() % 500;
				c.y = rand() % 300;
				c.radius = rand() % 100;
				c.draw();
			}
		}

	} while (1);

	return 0;
}