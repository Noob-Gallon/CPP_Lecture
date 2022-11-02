#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// class ���� �ÿ� ���������� ���� ����.
class Person {
public:
	int age;
	string name;
	Person(int _age, string _name) : age(_age), name(_name) {}
	void printMyName() {

		cout << name.size() << endl;

		// �ѱ��� �ɰ��� ����� �Ұ���! string�� ��� �׳� �����ؼ� ����ؾ���.
		for (int i = 0; i < name.size(); i++) {
			cout << name.at(i) << endl;
		}
	}
	void changeMyName(string _name) {
		name = _name;
	}

	// insert�� ������ idx��, 0~last+1 
	// (idx 0�� �� ���, ù ��° idx�� �Ǹ�, last+1�� �� ���, ������ idx�� �ȴ�.)
	void insertToMyName(int _idx, string _insert) {
		name.insert(_idx, _insert);
	}

	// string������ idx�ε� ���� ����.
	// string���� �ּҷ� ó���ϴ� ���� Ȯ���غ���.
	// erase�� ���Ϸ� �����ϸ�, ������ idx�� ��������.
	void eraseMyName(int _idx, int _num) {
		// name.erase(_idx, _num); 
		// erase�� _idx index���� ����� �����ؼ�,
		// _num �� ��ŭ �����Ѵ�.

		// �̷��� �����, ������ ������ index�� �ٲ�Ƿ�, �ȵ�.
		// for (int i = 0; i < _num; i++) {
		//		name.erase(_idx+i);
		// }
	}
};

// �߰��� sort�� ����� compare �Լ� ����ٸ�,
// ����Ǿ�� �ϴ� ��ġ�� �����ϱ�.
// Online Judge���� compare�Լ���
// Class�� �����ڷ� �Ѱ��ָ� compile error, ��������.
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

		// string������ erase�� idx�� �̷��������,
		// vector������ idx�� erase�� �Ұ����ϴ�.
		// person.erase(_idx, _num);
		// vector���� erase�� �ּҸ� ���� �̷������.
		person.erase(person.begin()+_idx, person.begin()+_idx+_num);
	}
};

int main(void) {

	People people;

	people.addPerson(23, "abc");
	people.addPerson(13, "��뵿��");
	people.addPerson(33, "��������");
	people.addPerson(43, "����������");
	people.addPerson(63, "�ҵ�");

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