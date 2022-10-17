#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(void) {

	// DMA : ---> dynamic allocation, malloc, free
	// C++ DMA : ---> new--->malloc, delete->free

	// old fashioned C way
	int* a = (int*)malloc(sizeof(int));
	free(a);

	int* b = (int*)malloc(sizeof(int) * 10);
	free(b);

	// C++
	int* a = new int;
	delete a;

	int* b = new int[10];
	delete[] b;

	string* s = new string[10];
	s[0] = "hello";
	s[1] = "world";

	delete[] s;

	return 0;
}