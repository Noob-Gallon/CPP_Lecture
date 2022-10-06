#include <iostream>
#include <string>

using namespace std;

class AAA {
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const {
		AAA* ptr = new AAA(n); 
		// Class 내에서 객체의 생성을 허용하려는 목적으로 생성자를 private으로 선언한다.

		return *ptr;
	}
	void showNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}
};

int main(void) {

	AAA base;
	base.showNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.showNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.showNum();

	delete& obj1;
	delete& obj2;

	return 0;
}

// 위 예제에서는 힙 영역에 생성된 객체를 참조의 형태로 반환하고 있다.
// 이는 앞서 설명한 '힙에 할당된 메모리 공간은 변수로 간주하여, 참조자를 통한 참조가 가능하다.'
// 라는 사실을 다시 한번 확인시켜 준다. (힙에 할당된 메모리 공간?, 힙은 지역 변수를 할당하는 공간)
// 그리고 위 예제에서는 단순히 private으로 선언된 생성자를 통해서도 객체의 생성이 가능함을 보였다. (그 이상의 의미는 없음)
// 위 예제는 클래스 내에서 객체를 생성해서 return 해주는 public 함수의 예를 보여준다. Factory로 사용 가능?
// private 생성자도 때로는 유용하게 사용된다. 특히 객체의 생성방법을 제한하고자 하는 경우에는 매우 유용하게 사용된다.