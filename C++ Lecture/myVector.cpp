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

// 중요한 사실, class 내에서 sort 함수를 사용하면, compare 함수를 정의해주는 위치를 class 외부로 해야한다...
// 또, class도 함수와 dependency를 따져서 위에서부터 정의해야 한다.
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
	// class에서 class 외부로 자기 자신의 class를 참조하게 하려면 pointer로만 가능?
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
		cout << "이름을 입력하세요.\n";
		getline(cin, str);

		if (str == "done") {
			cout << "종료\n\n\n";
			break;
		}
		
		cout << "나이를 입력하세요.\n";
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
	myPeople.addPerson("전경구", 55);
	myPeople.sortByAge();
	myPeople.printPerson();

	cout << "\n\n\n--------------------------------\n\n\n";

	return 0;
}
