#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {

public:
	Person(string _name, int _age) : name(_name), age(_age) {}
	string name;
	int age;
};

// vector는 vector<> 형태 자체로는 배열과 달리 reference가 불가능하다.
// 따라서, 참조자 &를 붙여서 함수 내에서 참조할 수 있도록 한다.
void printPerson(vector<Person>& _person) {
	for (auto& _e : _person) {
		cout << "name : " << _e.name << " " << "age : " << _e.age << endl;
	}
}

int main(void) {

	vector<Person> person;

	while (true) {

		cout << "name : ";
		string name;
		getline(cin, name);

		if (name == "done") {
			break;
		}

		cout << "age : ";
		int age;
		cin >> age;
		cin.ignore();

		person.push_back(Person(name, age));

	}

	printPerson(person);
	cout << "\n\n\n";

	cout << person.size() << endl;
	cout << person.front().name << " " << person.front().age << endl;
	cout << person.back().name << " " << person.back().age << endl;
	cout << person.begin()->name << " " << person.begin()->age << endl;
	cout << (person.end()-1)->name << " " << (person.end()-1)->age << endl;
	cout << person[0].name << " " << person[0].age << endl;
	cout << person[2].name << " " << person[2].age << endl;
	cout << (person.begin()+1)->name << " " << (person.begin() + 1)->age << endl;
	cout << (person.end()-1)->name << " " << (person.end()-1)->age << endl;
	person.insert(person.begin(), Person("정진교", 26));
	person.insert(person.end(), Person("함선영", 55));
	
	printPerson(person);

	for (auto i = person.begin(); i < person.end(); i++) {
		cout << endl;
		cout << i->name << " " << i->age;
	}

	// erase는 str과 vector가 마찬가지로, left~right-1 까지 제거한다.
	// insert는 vector가 addr-1에 insert
	// string insert는 지정한 idx부터 삽입 (문장도 가능)
	// find는 특정 패턴이 등장하는 위치의 시작 idx를 return. 만약 없으면, 쓰레기값 return.
	person.erase(person.begin(), person.begin() + 2);
	printPerson(person);

	//person.erase(person.begin()); // 정진교
	//person.erase(person.end()-1); // 함선영
	//person.erase(person.begin() + 1); // 김민수
	//person.erase(person.end() - 2); // 정동교
	//
	//cout << "Check!\n";
	//printPerson(person); // 주영인

	//person.pop_back();

	//cout << boolalpha;
	//cout << person.empty(); // 비어있으면 1 return, 안비어있으면 0 return.

	// string은 뒤에 \0가 들어있지 않다.
	/*string myString;
	getline(cin, myString);

	cout << myString << endl;*/

	return 0;

}