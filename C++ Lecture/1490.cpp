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
	vector<Person> myPerson;
	void addPerson(string _name, int _age) {
		Person p = Person(_name, _age);
		myPerson.push_back(p);
	}
	int getCount() {
		return myPerson.size();
	}
	Person getPersonByName(string _name) {
		for (auto& _e : myPerson) {
			if (_e.name == _name) {
				return _e;
			}
		}
	}

};

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

	return 0;

}