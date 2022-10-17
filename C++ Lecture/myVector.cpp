#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person {

public:
	Person(string _name, int _age) : name(_name), age(_age) {}
	string name;
	int age;
};

bool compareAge(Person& _a, Person& _b) {
	if (_a.age == _b.age) {
		return _a.name < _b.name;
	}
	else { // _a.age != _b.age
		return _a.age > _b.age;
	}
	
}
bool compareName(Person& _a, Person& _b) {
	if (_a.name == _b.name) {
		return _a.age > _b.age;
	}
	else {
		return _a.name < _b.name;
	}
}

// �߿��� ���, class ������ sort �Լ��� ����ϸ�, compare �Լ��� �������ִ� ��ġ�� class �ܺη� �ؾ��Ѵ�...
// ��, class�� �Լ��� dependency�� ������ ���������� �����ؾ� �Ѵ�.
class People {

public:
	void addPerson(string _name, int _age) {
		person.push_back(Person(_name, _age));
	}
	void sortByAge() {
		sort(person.begin(), person.end(), compareAge);
	}
	void sortByName() {
		sort(person.begin(), person.end(), compareName);
	}
	void printPerson() {
		for (auto& _e : person) {
			cout << "Name : " << _e.name << " " << "Age : " << _e.age << endl;
		}
	}
	// class���� class �ܺη� �ڱ� �ڽ��� class�� �����ϰ� �Ϸ��� pointer�θ� ����?
	People* getThisClass_ByPointer() {
		return this;
	}

private:
	vector<Person> person;
};

int main(void) {

	People people;

	string str;
	int age;

	while (true) {
		cout << "�̸��� �Է��ϼ���.\n";
		getline(cin, str);

		if (str == "done") {
			cout << "����\n\n\n";
			break;
		}
		
		cout << "���̸� �Է��ϼ���.\n";
		cin >> age;
		cin.ignore();

		people.addPerson(str, age);
	}

	people.sortByAge();
	people.printPerson();	
	
	cout << "\n\n\n";

	people.sortByName();
	people.printPerson();
	
	cout << "\n\n\n--------------------------------\n\n\n";
	cout << "newPeople*\n";
	People* newPeople = people.getThisClass_ByPointer();
	newPeople->printPerson();

	People& myPeople = people;

	cout << "\n\n\n--------------------------------\n\n\n";
	cout << "myPeople&\n";
	myPeople.addPerson("���汸", 55);
	myPeople.sortByAge();
	myPeople.printPerson();

	cout << "\n\n\n--------------------------------\n\n\n";

	return 0;
}
