#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {

public:
	Person(string _name, int _age) : name(_name), age(_age) {
	}
	int age;
	string name;
};

class People {

public:
	vector<Person> person;
	void addPerson(string _name, int _age) {
		person.push_back(Person(_name, _age));
	}
	int getCount() {
		return person.size();
	}
	Person getPersonByName(string _name) {
		for (auto& _e : person) {
			if (_e.name == _name) {
				return _e;
			}
		}
	}
};

int main() {

	string name;
	int age = 20;

	People p;

	while (true) {
		cout << "check1\n";
		getline(cin, name);
		cout << "check2\n";
		cin >> age;
		cin.ignore();

		if (age < 0) {
			break;
		}
		cout << "check_addPerson\n";
		p.addPerson(name, age);
	}

	cout << "Å»Ãâ!\n";
	getline(cin, name);

	cout << p.getCount() << endl;
	Person _i = p.getPersonByName(name);
	cout << _i.name << " " << _i.age << endl;

	return 0;
}