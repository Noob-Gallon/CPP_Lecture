#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {

public:
	Person(string _name, int _age) : name(_name), age(_age) {}
	string name;
	int age;

};

class People {

public:
	vector<Person> person;
	void addPerson(string _name, int _age) {
		Person p = Person(_name, _age);
		person.push_back(p);
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
	Person getOldestPerson(void) {
		Person p = person.front();

		for (int i = 1; i < person.size(); i++) {
			if (person.at(i).age > p.age) {
				p = person.at(i);
			}
		}

		return p;
	}
	int howManyUnderAge(int _age) {
		int cnt = 0;
		
		for (auto& _e : person) {
			if (_e.age < _age) {
				cnt++;
			}
		}

		return cnt;
	}

};

//----------이하 수정 금지 --------------------------

int main()
{
	string name;
	int age = 20;

	People p;

	while (true)
	{
		getline(cin, name);
		cin >> age;
		cin.ignore();

		if (age < 0)
		{
			break;
		}

		p.addPerson(name, age);

	}

	getline(cin, name);

	cout << p.getCount() << endl;
	Person _i = p.getPersonByName(name);
	cout << _i.name << " " << _i.age << endl;
	cout << p.getOldestPerson().name << endl;
	cout << p.howManyUnderAge(30) << endl;

	return 0;

}