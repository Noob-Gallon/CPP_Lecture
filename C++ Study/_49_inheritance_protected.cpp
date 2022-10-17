#include <iostream>

using namespace std;

class Coord_2D {
protected: // class ��ü�δ� private���� ����������, �ڽĿ��Դ� public���� �����Ѵ�.
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
// �̷��� ����, public�� �����ް�, protected�� ���� �޴´�.
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

	// ��ȣ�� ������ b�� �Ҹ��ڰ� �ҷ��´�.
	{
		// Constructor�� superclass, subclass ������ �ҷ�����,
		// Coord_2D a(10, 10);
		Coord_3D b(10, 20, 30);
		b.showCoord_3D();
		// Destructor�� �ҷ��� ���� subclass, superclass�� �ҷ��´�.
	}

	return 0;
}