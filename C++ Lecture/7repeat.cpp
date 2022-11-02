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
	p.age = 20; // 생성자 x, 그냥 값을 대입해줌.

	Person* pp = nullptr;
	// 아무것도 가리키지 않는 포인터는 임시적으로 nullptr을 대입해준다.

	pp = new Person;
	// pp에 Person 동적할당, default constructor가 불려진다.

	delete pp;

	pp = new Person(21);
	// Person 만큼의 공간을 할당한 뒤,
	// age = 21로 설정한다.

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
	// smart pointer는 그 자체로 객체이고, 포인터는 아니다.
	// 그 객체 내부에서 자체적으로 delete를 실행하는 역할을 한다.
	// 이를 wrapper라고 한다.

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

	// 가리키고 있는 곳의 값을 바꿀 수 없다.
	// 어떤 식으로 외울까?
	// const가 변수명 앞에 붙는다고 하면,
	// 포인터에서 변수 자체가 주소를 가리키므로,
	// 그것을 변경할 수 없다고 생각하자.
	// 그렇다면 Person* const pp는
	// 주소를 가리키는 pp 앞에 const가 붙었으므로
	// 다른 것을 가리키지 못하는 const 변수가 된다.

	// 이와 다르게 const Person* pp는
	// 



	const Person* pp = new Person(20);
	delete pp;

	// 가리키는 대상을 바꿀 수 없다.
	// 즉, 다른 주소를 가리키게 할 수 없다.
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
	Pizza p(r); // pizza를 생성함. radius r.
	return p;
}

void doubleSize(Pizza _p) {
	_p.setRadius(20);
}

int main(void) {

	Pizza p1(20); // constructor
	Pizza p2(p1); // Class p2는 p1을 복사한다.
	//Pizza p3 = createPizza(30); // 복사 생성자에 의해 p3가 초기화된다.
	// 사실, 위와 같은 내용임.
	// 그런데, copy constructor를 custom으로 만들면, 컴파일러는 복사에 관해
	// 아예 손을 놔버리게 된다. 따라서, 복사 생성자가 불려진 p2, p3는
	// member radius가 값을 갖지 않는다.

	// p1 = p2;

	p1.showRadius();
	p2.showRadius();
	// p3.showRadius();

	Pizza p3(30);
	p3.showRadius();

	cout << "체크\n";
	p3 = p2; // 이렇게 만들면 copy constructor가 실행되지 않는다.
	p3.showRadius();

	return 0;
}
*/

/*
* Class의 Instance를 새로 생성했을 때, copy constructor를 실행한다.
* 이미 instance를 각각 만든 후에, 한 instance에 다른 instance를 대입하는 것은
* copy constructor가 아닌, 그냥 대입 연산이다.
* 그런데, 만약 instance에 포인터(동적할당)가 있다면, 주소는 같은 곳을 가리키게 된다.
class MyClass {

public:
	int* arr = nullptr;
	int size;
	MyClass(int _size) : size(_size) {
		arr = new int[size];
	}
	void insertValue() {

		cout << "값 입력을 시작합니다." << endl;

		for (int i = 0; i < size; i++) {
			int value;

			cout << "값을 입력하시오." << endl;
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