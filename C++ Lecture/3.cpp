#include <iostream>
#include <string>

using namespace std;

// p.106 2차원 배열

// p. 128, 함수 원형, function prototype.
int fun1(int a); // function prototype...
// 컴파일러에게 힌트를 주는 것. 실제 body는 뒤에 있다는 것을 말해줌.
// function header라고도 불림.

int fun1(int a) {
	return a;
}

// primitive type, 데이터의 크기가 작을 때는
// 그냥 복사해서 사용해도 된다.
// call-by-value
int my_func(int a, int b) {
	cout << "my_func : " << a + b << endl;
	return a + b;
}

// call-by-reference... 대용량 데이터일 경우,
// 원본을 복사하면 시간도 많이 걸리고, 메모리도 많이 잡아먹기 때문에
// 데이터일 경우에는 call-by-reference로 데이터를 처리한다.

int my_func(int* a, int* b) {
	*a = 100;
	*b = 200;

	cout << "my_func* : " << *a + *b << endl;
	
	return *a + *b;
}

// Global Variable은 메모리 상에 연속적으로 저장된다.
int a = 10;
int b = 20;
int w = 30;

void mySwap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	*(b + 1) = 666;
}

// reference variable...
void mySwapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;

	//b + 1 = 666; Reference Value는 주소가 아니기 때문에 이와 같은 연산이 불가능하다...
	// 따라서 가능한, Reference를 사용해야 한다.
	// 포인터를 이용해서 주소를 빠르게 이동하려면 포인터를 사용해도 된다!

}

int my_add(int* a, int* b) {
	return 0;
}

float my_add(float* a, float* b) {
	return 0.0;
}

// p. 140, default parameter...

int myFunc(int a, float b=3.14) {
	return 0;
}

int myFunc2(int a, int b = 10, int c = 20) {
	return 0;
}

// ---------------------------------------------

// p. 145
// inline function...

// Detail한 내용.
// inline이 아닌 함수를 실행하면, main에서 해당 함수가 실행될 시
// 해당 코드(함수)가 저장되어 있는 부분(메모리)으로 이동해서 실행한 후, 다시 돌아온다.
// 해당 부분의 다음 부분(돌아올 곳)과 arguments들을 데리고 이동한다...
// 그리고 결과값이 나오면, 바로는 못가져오고, 일단 그 곳에 저장해뒀다가 return 값을 저장해놓은 주소를 가지고
// 아까 저장해놓은 주소로 다시 돌아온다. (생각보다 overhead가 많다.)
// 그래서 recursive function을 최대한 피해야 한다.

inline int inline_func(int a, int b) {
	/*
	* 
	* ...
	* 
	*/
	return a + b;
}
// inline으로 함수를 실행하면, 그냥 그 코드를 함수가 실행될 부분에 박아넣어서
// 바로 실행할 수 있게 한다. 속도는 무지하게 빠르지만, 오히려 많이 사용되면
// 코드 길이가 더 길어져서 오히려 overhead가 사용될 수도 있다...

// 데이터 + 그 데이터를 처리할 수 있는 코드(함수) = 클래스(class)
// 생산성의 증대.
class node {
	float r;
	int data;

	void showData() {
		cout << data << endl;
	}
};
// 원형이 structure이다.
// structure -> class... 클래스가 다른 점은, 안에 메서드도 넣어준다.

int main(void) {

	// p. 167
	// object oriented programming, OOP
	// 객체지향 프로그래밍, 패러다임이 바뀐다...

	string s1 = "hello";
	string s2 = "world";

	// p. 151, string member function
	// s1[0]
	cout << boolalpha;
	cout << s1.empty() << endl;
	cout << s1.insert(2, s2) << endl; // s1의 두 번째 위치, s1[2]부터에 s2를 insert한다.
	cout << s1.find("llo") << endl;

	return 0;
	
	string s3 = s1 + s2;
	s1 += s2;

	if (s1 == s2) {
		
	}

	if (s1 != s2) {

	}

	if (s1 < s2) {

	}
	
	myFunc(10);
	myFunc(20, 5.16);

	myFunc2(10);
	myFunc2(10, 100);
	myFunc2(10, 100, 1000);

	// ---------------------------------------------

	int x3 = 10;
	int y3 = 20;
	int v3 = 30;
	cout << x3 << " " << y3 << " " << v3 << endl;
	mySwapRef(x3, y3);
	cout << x3 << " " << y3 << " " << v3 << endl;

	return 0;

	// ---------------------------------------------

	cout << a << " " << b << " " << w << endl;
	mySwap(&a, &b);
	cout << a << " " << b << " " << w << endl;

	return 0;

	// ---------------------------------------------

	// p. 130 함수 호출시 인수전달 방법
	// call-by-value
	// call-by-reference, 지금부터 잘 들어!
	// 이건 굉장히 중요한 방법이야.

	// primitive type에만 사용한다. 해봤자 8바이트?
	// 그럴 때는 call-by-value로 만들어서 원본을 보존한다...

	int x = 10;
	int y = 20;
	int v = my_func(x, y);

	int x2 = 10;
	int y2 = 20;
	int v2 = my_func(&x2, &y2);

	return 0;

	// ---------------------------------------------


	// 원래 C언어에서는 함수를 사용하기 전에 함수가 선언되어야한다.
	// 컴파일러가 기계어로 컴파일하는 과정에서 해독해두고,
	// 그래야 본문에서 사용되는 함수 호출을 불러올 수 있기 때문...
	int k = fun1(10);
	cout << k << endl;
	
	// ---------------------------------------------

	string names[] = { "james", "john", "tom" };

	for (auto v : names) {
		for (auto c : v) {
			cout << c << endl;
		}
	}

	// ---------------------------------------------

	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// 옛날 방식
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << endl;
		}
	}

	// range based for loop
	for (auto& v : a) { // 맨 처음에 v에는 큰 덩어리, {1, 2, 3}이 들어간다. v2는 1, 2, 3으로 선택된다.
		// 왜 &가 있어야만 돌아가는가?
		// &를 붙이지 않으면, 첫 번째 작은 배열의 시작 주소가 나온다...
		// 만약 &를 붙이면? : int* a; (a는 pointer variable이고, a에는 주소가 들어간다.)
		// c++에서는 int& a; 가 된다. 포인터와 기능은 같은데, 그 변수에 다른 이름을 붙이는 것과 같은 기능을 한다.
		

		for (auto v2 : v) {
			cout << v2 << endl;
		}
	}

	return 0;
}