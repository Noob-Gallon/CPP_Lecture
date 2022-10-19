#include <iostream>

using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int _size) {
		this->size = _size;
		data = new int[this->size]; // ���� �迭�� �����Ѵ�.
	}
	MyArray(const MyArray& p) {
		this->size = p.size;
		this->data = new int[this->size];

		for (int i = 0; i < p.size; i++) {
			this->data[i] = p.data[i];
		}
	}
	~MyArray() { // ���� ������ ������(���� �Ҵ� �迭)�� ���� ���� ����. 
	// -> ������ unique pointer
		delete[] data;
	}
};

int main() {

	MyArray a(10);
	a.data[5] = 123456;

	cout << "value : " << a.data[5] << endl;

	{
		MyArray b = a;
	}

	cout << "value : " << a.data[5] << endl;

	return 0;
}