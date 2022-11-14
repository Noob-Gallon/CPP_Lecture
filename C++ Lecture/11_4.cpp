#include <iostream>
#include <fstream> // file header

using namespace std;

int main(void) {

	{
		// output file stream class
		ofstream os("test.txt");

		// cout : console out. �⺻������ �����Ǵ� ��ü
		for (int i = 0; i < 100; i++) {
			os << i << " ";
		}
	}
	
	{
		ifstream is("test.txt");

		int number; // int ������ ���� �о�´�.
		while (is >> number) {
			cout << number;
		}
	}

	{
		ifstream is("test.txt");

		char c;

		while (!is.eof()) {
			is.get(c); 
			// ifstream ���� �����ϴ� get method�� �̿��Ͽ�
			// char�� �ϳ� �о�´�.
			
			cout << c << endl;
		}
	}

	return 0;
}