#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
class Person {
public:
	int age;
	Person() {
		age = 10;
	}
	Person(int _age) : age(_age) {}
};

int main(void) {

	Person p;
	p.age = 20; // ������ x, �׳� ���� ��������.

	Person* pp = nullptr;
	// �ƹ��͵� ����Ű�� �ʴ� �����ʹ� �ӽ������� nullptr�� �������ش�.

	pp = new Person;
	// pp�� Person �����Ҵ�, default constructor�� �ҷ�����.

	delete pp;

	pp = new Person(21);
	// Person ��ŭ�� ������ �Ҵ��� ��,
	// age = 21�� �����Ѵ�.

	delete pp;

	return 0;
}
*/

/*
class Person {
public:
	int age;
	Person() {
		age = 10;
	}
	Person(int _age) : age(_age) {

	}
};

int main(void) {

	unique_ptr<Person> pp1(new Person(21));
	// smart pointer�� �� ��ü�� ��ü�̰�, �����ʹ� �ƴϴ�.
	// �� ��ü ���ο��� ��ü������ delete�� �����ϴ� ������ �Ѵ�.
	// �̸� wrapper��� �Ѵ�.

	return 0;
}
*/

/*
class Person {
public:
	int age;
	Person() {
		age = 10;
	}
	Person(int _age) : age(_age) {}

	int showAge(void) const {
		return age;
	}
};

int main(void) {

	// ����Ű�� �ִ� ���� ���� �ٲ� �� ����.
	// � ������ �ܿ��?
	// const�� ������ �տ� �ٴ´ٰ� �ϸ�,
	// �����Ϳ��� ���� ��ü�� �ּҸ� ����Ű�Ƿ�,
	// �װ��� ������ �� ���ٰ� ��������.
	// �׷��ٸ� Person* const pp��
	// �ּҸ� ����Ű�� pp �տ� const�� �پ����Ƿ�
	// �ٸ� ���� ����Ű�� ���ϴ� const ������ �ȴ�.

	// �̿� �ٸ��� const Person* pp��
	// 



	const Person* pp = new Person(20);
	delete pp;

	// ����Ű�� ����� �ٲ� �� ����.
	// ��, �ٸ� �ּҸ� ����Ű�� �� �� ����.
	Person* const pp = new Person(20);
	delete pp;

	const Person* const pp = new Person(20);
	delete pp;

	return 0;
}
*/

/*
class Pizza {

private:
	int radius;
public:
	Pizza(int r = 0) : radius(r) {
		cout << "Pizza constructor was invoked!" << endl;
	}
	void setRadius(int r) {
		this->radius = r;
	}
	void showRadius() {
		cout << "Pizza radius: " << this->radius << endl;
	}
	int getRadius() {
		return radius;
	}
	~Pizza() {
		cout << "Destructor was invoked!" << endl;
	}

};

void doubleSize(Pizza& p) {
	p.setRadius(p.getRadius()*2);
}

int main(void) {

	Pizza p(50);

	p.showRadius();
	doubleSize(p);
	p.showRadius();

	return 0;
}
*/

/*
class Pizza {
private:
	int radius;
public:
	Pizza(int r = 0) : radius(r) {
		cout << "Pizza constructor was invoked!" << endl;
	}
	Pizza(const Pizza& p) {
		cout << "Copy constructor was invoked!" << endl;
		this->radius = p.radius;
	}
	void setRadius(int r) {
		this->radius = r;
	}
	void showRadius() {
		cout << "pizza radius: " << this->radius << endl;
	}
	~Pizza() {
		cout << "Destructor was invoked!" << endl;
	}
};

Pizza createPizza(int r) {
	cout << "createPizza!" << endl;
	Pizza p(r); // pizza�� ������. radius r.
	return p;
}

void doubleSize(Pizza _p) {
	_p.setRadius(20);
}

int main(void) {

	Pizza p1(20); // constructor
	Pizza p2(p1); // Class p2�� p1�� �����Ѵ�.
	//Pizza p3 = createPizza(30); // ���� �����ڿ� ���� p3�� �ʱ�ȭ�ȴ�.
	// ���, ���� ���� ������.
	// �׷���, copy constructor�� custom���� �����, �����Ϸ��� ���翡 ����
	// �ƿ� ���� �������� �ȴ�. ����, ���� �����ڰ� �ҷ��� p2, p3��
	// member radius�� ���� ���� �ʴ´�.

	// p1 = p2;

	p1.showRadius();
	p2.showRadius();
	// p3.showRadius();

	Pizza p3(30);
	p3.showRadius();

	cout << "üũ\n";
	p3 = p2; // �̷��� ����� copy constructor�� ������� �ʴ´�.
	p3.showRadius();

	return 0;
}
*/

/*
* Class�� Instance�� ���� �������� ��, copy constructor�� �����Ѵ�.
* �̹� instance�� ���� ���� �Ŀ�, �� instance�� �ٸ� instance�� �����ϴ� ����
* copy constructor�� �ƴ�, �׳� ���� �����̴�.
* �׷���, ���� instance�� ������(�����Ҵ�)�� �ִٸ�, �ּҴ� ���� ���� ����Ű�� �ȴ�.
class MyClass {

public:
	int* arr = nullptr;
	int size;
	MyClass(int _size) : size(_size) {
		arr = new int[size];
	}
	void insertValue() {

		cout << "�� �Է��� �����մϴ�." << endl;

		for (int i = 0; i < size; i++) {
			int value;

			cout << "���� �Է��Ͻÿ�." << endl;
			cin >> value;
			
			arr[i] = value;
			cin.ignore();
		}
	}
	void printAll() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}

		cout << endl;
	}
	MyClass(const MyClass& _newClass) {
		cout << "Copy Constructor Invoked!\n";
	}
};

int main(void) {

	MyClass myClass(5);

	myClass.insertValue();
	myClass.printAll();

	MyClass myClass2(myClass);

	myClass2.insertValue();
	myClass = myClass2;
	myClass.printAll();

	myClass2.insertValue();
	myClass.printAll();

	return 0;
}
*/

/*
class MyArray {
public:
	int size;
	int* data;
	MyArray(int _size) {
		this->size = _size;
		data = new int[this->size];
	}
	MyArray(const MyArray& p) {
		cout << "Copy Constructor Invoked!\n";

		this->size = p.size;
		this->data = new int[this->size];

		for (int i = 0; i < p.size; i++) {
			this->data[i] = p.data[i];
		}
	}
	~MyArray() {
		cout << "Destructor Invoked!\n";
		delete[] data;
	}
};

int main(void) {

	MyArray a(10);
	a.data[5] = 123456;

	cout << "value : " << a.data[5] << endl;

	MyArray b = a; // copy constructor
	cout << "value : " << b.data[5] << endl;

	cout << "value : " << a.data[5] << endl;

	return 0;
}
*/

/*
class StringAnalyzer {
public:
	string str;
	StringAnalyzer(string _str) : str(_str) {}
	int getStrLength() {
		return str.length();
	}
	char getCharAt(int _idx) {
		if (_idx >= str.length()) {
			return 'A';
		}

		return str[_idx];
	}
	int getCharSum(vector<int>& _values) {

		int sum = 0;

		for (auto& _e : _values) {
			if (_e >= str.length()) {
				sum += 'A';
			}

			sum += str.at(_e);
		}

		return sum;
	}
};

int main()
{
	string str;
	int v;
	int k;
	vector<int> values;

	getline(cin, str);
	cin >> v;
	while (true) {
		cin >> k;
		if (k == -999) {
			break;
		}
		values.push_back(k);
	}

	StringAnalyzer sa(str);
	cout << sa.getStrLength() << endl;
	cout << sa.getCharAt(v) << endl;
	cout << sa.getCharSum(values) << endl;

	return 0;
}
*/

/*
class A {
public:
	int a;
	A(int _a) : a(_a) {}
	void printAll() {
		cout << "A : " << a << endl;
	}
	void sumA(int _a) {
		a += _a;
	}
};

class B : public A {
public:
	int b;
	B(int _a, int _b) : A(_a), b(_b) {}
	void printAll() {
		cout << "B : " << A::a << " " << b << endl;
	}
};

int main(void) {

	B myB(10, 20);
	myB.printAll();
	myB.sumA(5);
	cout << myB.a << endl;

	return 0;
}
*/

int main(void) {

	vector<int> vec;
	
	for (auto i = 1; i <= 5; i++) {
		vec.push_back(i);
	}

	vec.insert(vec.begin(), 10);
	vec.insert(vec.begin() + 2, 15);
	vec.insert(vec.end(), 20);

	for (auto& _e : vec) {
		cout << _e << " ";
	}
	cout << endl;

	vec.erase(vec.begin());
	vec.erase(vec.begin() + 1);
	vec.erase(vec.end() - 1);

	for (auto& _e : vec) {
		cout << _e << " ";
	}

	cout << endl;

	return 0;
}