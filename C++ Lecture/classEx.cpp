#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// class 생성 시에 접근제어자 선언 주의.
class Person {
public:
	int age;
	string name;
	Person(int _age, string _name) : age(_age), name(_name) {}
	void printMyName() {

		cout << name.size() << endl;

		// 한글은 쪼개서 출력이 불가능! string일 경우 그냥 연결해서 출력해야함.
		for (int i = 0; i < name.size(); i++) {
			cout << name.at(i) << endl;
		}
	}
	void changeMyName(string _name) {
		name = _name;
	}

	// insert가 가능한 idx는, 0~last+1 
	// (idx 0을 할 경우, 첫 번째 idx가 되며, last+1을 할 경우, 마지막 idx가 된다.)
	void insertToMyName(int _idx, string _insert) {
		name.insert(_idx, _insert);
	}

	// string에서는 idx로도 제거 가능.
	// string에서 주소로 처리하는 법도 확인해보자.
	// erase는 단일로 지정하면, 지정된 idx만 지워진다.
	void eraseMyName(int _idx, int _num) {
		// name.erase(_idx, _num); 
		// erase는 _idx index부터 지우기 시작해서,
		// _num 개 만큼 제거한다.

		// 이렇게 만들면, 지워질 때마다 index가 바뀌므로, 안됨.
		// for (int i = 0; i < _num; i++) {
		//		name.erase(_idx+i);
		// }
	}
};

// 중간에 sort에 사용할 compare 함수 만든다면,
// 선언되어야 하는 위치에 주의하기.
// Online Judge에서 compare함수에
// Class를 참조자로 넘겨주면 compile error, 주의하자.
bool compareByAge(Person _a, Person _b) {
	return (_a.age < _b.age);
}

bool compareByName(Person _a, Person _b) {
	return (_a.name < _b.name);
}

bool compareByNameLen(Person _a, Person _b) {
	return (_a.name.length() < _b.name.length());
}

class People {
public:
	vector<Person> person;
	void addPerson(int _age, string _name) {
		person.push_back(Person(_age, _name));
	}
	void sortByAge() {
		sort(person.begin(), person.end(), compareByAge);
	}
	void sortByName() {
		sort(person.begin(), person.end(), compareByName);
	}
	void sortByNameLen() {
		sort(person.begin(), person.end(), compareByNameLen);
	}
	void printAllPerson() {
		for (auto& _e : person) {
			cout << "Name : " << _e.name << " Age : " << _e.age << endl;
		}
	}
	Person& returnPersonByName(string _name) {
		for (auto& _e : person) {
			if (_e.name == _name) {
				return _e;
			}
		}
	}
	void erasePerson(int _idx, int _num) {

		// string에서는 erase가 idx로 이루어졌지만,
		// vector에서는 idx로 erase가 불가능하다.
		// person.erase(_idx, _num);
		// vector에서 erase는 주소를 통해 이루어진다.
		person.erase(person.begin()+_idx, person.begin()+_idx+_num);
	}
};

int main(void) {

	People people;

	people.addPerson(23, "abc");
	people.addPerson(13, "어린노동교");
	people.addPerson(33, "늙은교동");
	people.addPerson(43, "꼰동교동교");
	people.addPerson(63, "할동");

	people.sortByAge();
	people.printAllPerson();

	cout << "--------------------" << endl;

	people.sortByName();
	people.printAllPerson();

	cout << "--------------------" << endl;

	people.sortByNameLen();
	people.printAllPerson();

	cout << "--------------------" << endl;

	Person& Me = people.returnPersonByName("abc");
	Me.insertToMyName(0, "ABC");

	people.printAllPerson();

	Me.eraseMyName(1, 4);

	cout << "--------------------" << endl;

	people.printAllPerson();

	cout << "--------------------" << endl;

	people.erasePerson(1, 3);

	people.printAllPerson();

	cout << "--------------------" << endl;

	return 0;
}