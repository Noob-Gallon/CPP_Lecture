#include <iostream>

using namespace std;

class Coord_2D {
protected: // class 자체로는 private으로 동작하지만, 자식에게는 public으로 동작한다.
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) : x(_x), y(_y) {
		cout << "Constructor Coord_2D" << endl;
	}
	~Coord_2D() { cout << "Destructor Coord_2D" << endl; }
	void showCoord();
};

void Coord_2D::showCoord() {
	cout << x << ", " << y;
}

// ------------------------------------------------
// 이렇게 쓰면, public도 물려받고, protected도 물려 받는다.
class Coord_3D : /* public */ Coord_2D {
private:
	int z;
public:
	Coord_3D(int _x, int _y, int _z) : Coord_2D(_x, _y), z(_z) {

		cout << "Constructor Coord_3D" << endl;
	}
	~Coord_3D() { cout << "Destructor Coord_3D" << endl; }
	void showCoord_3D();
};

void Coord_3D::showCoord_3D() {
	showCoord();

	cout << ", " << z << endl;
}

// ------------------------------------------------


int main(void) {

	// 괄호가 끝나면 b의 소멸자가 불려온다.
	{
		// Constructor는 superclass, subclass 순으로 불려오며,
		// Coord_2D a(10, 10);
		Coord_3D b(10, 20, 30);
		b.showCoord_3D();
		// Destructor가 불려올 때는 subclass, superclass가 불려온다.
	}

	return 0;
}