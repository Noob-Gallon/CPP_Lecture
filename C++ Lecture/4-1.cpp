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

		void increate_radius(float d) { // overloaded method. (polymorphism이라고 부른다.)
			// ---------------------- //
	}
};

// 상속의 예시. private은 상속되지 않으며, protected는 private이지만, 상속은 가능하다.
class ColoredCircle : public Circle {
	
private:
	string color;

};


int main(void) {


	return 0;
}