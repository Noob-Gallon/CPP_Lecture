#include <iostream>

using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int _size) {
		this->size = _size;
		data = new int[this->size]; // 정수 배열을 선언한다.
	}
	MyArray(const MyArray& p) {
		this->size = p.size;
		this->data = new int[this->size];

		for (int i = 0; i < p.size; i++) {
			this->data[i] = p.data[i];
		}
	}
	~MyArray() { // 내가 가져온 쓰레기(동적 할당 배열)는 내가 가져 간다. 
	// -> 싫으면 unique pointer
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