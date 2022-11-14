#include <iostream>
#include <fstream> // file header

using namespace std;

int main(void) {

	{
		// output file stream class
		ofstream os("test.txt");

		// cout : console out. 기본적으로 제공되는 객체
		for (int i = 0; i < 100; i++) {
			os << i << " ";
		}
	}
	
	{
		ifstream is("test.txt");

		int number; // int 단위로 값을 읽어온다.
		while (is >> number) {
			cout << number;
		}
	}

	{
		ifstream is("test.txt");

		char c;

		while (!is.eof()) {
			is.get(c); 
			// ifstream 내에 존재하는 get method를 이용하여
			// char를 하나 읽어온다.
			
			cout << c << endl;
		}
	}

	return 0;
}