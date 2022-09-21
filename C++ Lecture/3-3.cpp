#include <iostream>
#include <string>
#include <windows.h>
#include "Circle2.h"

using namespace std;

class BankAccount {

	// money는 class 내부에서만 건드릴 수 있다.
	// 이와 같이 데이터를 public: private:을 이용하여
	// 데이터를 보호하는 것을 정보은닉이라고 한다.

	// 데이터를 건드리는 것은 내가 class 내부에서 선언한
	// 메서드를 통해서만 건드릴 수 있다.
	// 그리고 그 메서드 내에 모든 안전장치가 다 구현되어 있다.
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
		// Windows Programming을 할 때, 하드웨어를 사용하기 위해 접근할려고 부르는 것...
		// Direct Context : 도화지? => Graphical하게 다 그리는 것...
		// Window의 도화지를 가져와라.
		// HDC -> Handler Direct Context, H는 DC에 대한 포인터를 의미한다.
		Ellipse(hdc, y - radius, y - radius, x + radius, y + radius);
	}
};

// p. 188, 멤버함수 중복
// p. 189, 클래스 인터페이스와 구현의 분리

int main(void) {

	// p. 185 도전문제
	// x좌표를 200부터 600까지, 50씩 증가시키면서
	// 원을 그려 보시오.

	// ------------------------------------

	// unsigned int는... -1을 unsigned int로 바꾸면
	// 완전 큰 값으로 바뀌어서 잔액이 바뀐다.
	// ex) 코틀린에서 했던, 코틀린에서는 byte가 unsigned int가 없기 때문에,
	// 앞자리가 1이면 음수가 나온다... 그리고 거꾸로 된다. (2의 보수 + 1)

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