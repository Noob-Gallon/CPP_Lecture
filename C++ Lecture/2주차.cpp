#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void) {
	
	// p. 65 제어구조
	// 관계연산자. (relational operator)
	// ==, !=, >, >=, <, <=
	
	// p. 66, C언어는 bool이 없다.
	bool b;
	b = (1 == 2);
	cout << boolalpha;
	cout << b << endl; // b값은 0.
	b = true;
	cout << b;

	cout << noboolalpha << endl;
	cout << b << endl;

	//string str;
	//do {
	//	
	//	// cin의 한계 : 공백을 \n(Enter, carriage return)으로 인식한다.
	//	// 그래서 긴 문장을 입력하려면, 다른 방법을 써야한다.
	//	// getline(cin, str)
	//	// cin >> str;

	//	getline(cin, str); // carriage return이 아니면, 공백도 문자로 취급한다. C언어의 gets(get string)과 같다. scanf는 공백을 기준으로 끊긴다.
	//	cout << "입력 문자열은 " + str << endl; // +는 문자열을 서로 붙여준다. strcat, string concaternation. concaternate(사슬처럼 잇다.)
	//} while (str != "end");

	// 모든 언어는 type을 사용하지만, C언어와 Java는 
	// strictly typed language : 타입 명시적 언어
	// Python, JS과 같은 언어는 처음에
	// implicitly typed language -> 개발이 편하지만, 디버깅이 굉장히 힘들었다.
	// 그래서 변화하는 중, 다시 type을 붙이고 있음. 디버깅 시간이 길어져서
	// 생산성이 안나옴.

	// auto a = 10;

	for (auto i = 0; i < 10; i++) {
		cout << "Hello, World!" << endl;
	}

	// C++에서는 for loop을 쓸 때는 auto를 쓰는게 간지...

	// Q. 주사위 2개를 던져서 1,1이 나올 확률을 시뮬레이션을 통해서 계산하시오.
	// 1/36 = 0.027, 2.7%
	// 랜덤한 숫자를 던지는 함수가 C++에 존재.

	// 사실 랜덤함수는... 정해진 sequence의 숫자를 바탕으로 시작하는 위치를 정해서
	// 사용하게 되는것. sequence의 시작점의 위치를 seed라고 한다. seedrand => srand(unsigned int seed);

	int cnt = 0; // (1, 1)이 나오는 숫자.
	srand(1);
	
	cout << "rand max is " << RAND_MAX << endl;

	for (auto i = 0; i < 1000000; i++) {
		int k1 = rand() % 6 + 1;
		int k2 = rand() % 6 + 1;

		if (k1 == 1 && k2 == 1) {
			cnt++;
		}
	}

	cout << "10000번 중에 " << cnt << "번 나왔다." << endl;

	// cplusplus.com에 가서 필요한 함수들을 찾아보는 것이 중요...

	/*int a[5] = { 1,2,3,4,5 };
	int b[] = { 1,2,3,4,5 };
	int c[]{ 1,2,3,4,5 };*/

	// 이와 같이 배열을 선언한 크기보다 적은 수를 대입해주면, 나머지 공간은
	// all Zero로 초기화된다.
	int d[10] = { 1, 2, };

	// string names[3] = { "tom", "jane", "james" };

	// p.99
	// range based for loop

	// python
	/*

		a = [1,2,3,4,5]
		for v in a :
			print v;

	*/
	
	// 배열에 있는 요소를 단순히 꺼내서 사용할 때는 다음과 같이 사용한다.
	int num[] = { 1,2,3,4,5 };
	for (int i : num) {
		cout << i << endl;
	}

	for (int k = 0; k < 5; k++) {
		cout << num[k] << endl;
	}

	for (auto i : num) {
		cout << i << endl;
	}
	
	string names[] = { "tom", "jane", "jerry" };

	for (auto& v : names) {
		cout << v << endl;
	}

	// pointer type int* i;
	// C언어와 C++는 포인터를 모두 쓴다.

	// 포인터를 이용해 주소로 찾아가는 것은 좋은데,
	// 옆집을 찾아가서 옆집을 난장판으로 만들 가능성이 있다.
	// 강력하고 편하기도 하지만, 리스크가 있다.
	// 그래서 자바에서는 포인터를 없애버렸다.

	// reference type int& i;
	// 포인터랑 똑같은 기능이다. 그 주소를 내가 함부로 건드리지는 못한다.
	// 그래서, 딱 설정된 주소만 건드릴 수 있도록 한다.
	// 변수에 대해서 또 다른 이름을 만들었다고 할 수 있다.
	// 즉, 포인터와 같은 역할을 할 수 있지만, 포인터의 위험성은 없앨 수 있다.
	
	int j = 100;
	int& i = j;

	i = 200;
	cout << j << endl;

	for (int& i : num) {
		i = 2 * i;
	}
	
	for (int i : num) {
		cout << i << endl;
	}

	return 0;
}