#include <iostream>

using namespace std;

class Circle {
	protected:
		int x;
		int y;
		int r;

		void increase_radius(int d) {
			r = r + d;
		}

		void increate_radius(float d) { // overloaded method. (polymorphism�̶�� �θ���.)
			// ---------------------- //
	}
};

// ����� ����. private�� ��ӵ��� ������, protected�� private������, ����� �����ϴ�.
class ColoredCircle : public Circle {
	
private:
	string color;

};


int main(void) {


	return 0;
}