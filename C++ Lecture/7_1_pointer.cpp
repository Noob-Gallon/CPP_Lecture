#include <iostream>



int main(void) {

	// C������ pointer �ʱ�ȭ�� �׻� 0���� �߾���.(Null)
	// #define NULL 0, NULL�� ������ 0���� define �Ǿ��־���.

	// C++ : nullptr -> null pointer�� Ȯ���� �ϱ� ���� �����.
	// 0, NULL : ���� 0�� �ǹ�
	// nullptr : �̰ž� ����, ������ null pointer�� �ǹ��Ѵ�.

	// ����.
	// �������� ��������.
	// �������� �������ٴ� ���� �ǹ̴�, �Ʒ��� ����.

	// ����, func�� ������ �Ǵ� �����͸� ��ȯ�ϴ� overload function�̶�� �Ѵٸ�,
	// nullptr�̶�� ���� ����� �δ� ���� ���� �������� �������� �����ش�.
	// auto p = func();

	// if (p == nullptr) {
		// ----- //
	// }

	int* p = nullptr;
	int a = 10;
	p = &a;

	return 0;
}