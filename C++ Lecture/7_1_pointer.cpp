#include <iostream>



int main(void) {

	// C언어에서는 pointer 초기화는 항상 0으로 했었다.(Null)
	// #define NULL 0, NULL이 정수값 0으로 define 되어있었음.

	// C++ : nullptr -> null pointer를 확실히 하기 위한 예약어.
	// 0, NULL : 정수 0을 의미
	// nullptr : 이거야 말로, 진정한 null pointer를 의미한다.

	// 장점.
	// 가독성이 좋아진다.
	// 가독성이 좋아진다는 것의 의미는, 아래와 같다.

	// 만약, func가 정수형 또는 포인터를 반환하는 overload function이라고 한다면,
	// nullptr이라는 예약어를 만들어 두는 것이 개발 과정에서 직관성을 높여준다.
	// auto p = func();

	// if (p == nullptr) {
		// ----- //
	// }

	int* p = nullptr;
	int a = 10;
	p = &a;

	return 0;
}