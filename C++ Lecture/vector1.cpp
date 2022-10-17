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

// vector�� vector<> ���� ��ü�δ� �迭�� �޸� reference�� �Ұ����ϴ�.
// ����, ������ &�� �ٿ��� �Լ� ������ ������ �� �ֵ��� �Ѵ�.
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
	person.insert(person.begin(), Person("������", 26));
	person.insert(person.end(), Person("�Լ���", 55));
	
	printPerson(person);

	for (auto i = person.begin(); i < person.end(); i++) {
		cout << endl;
		cout << i->name << " " << i->age;
	}

	// erase�� str�� vector�� ����������, left~right-1 ���� �����Ѵ�.
	// insert�� vector�� addr-1�� insert
	// string insert�� ������ idx���� ���� (���嵵 ����)
	// find�� Ư�� ������ �����ϴ� ��ġ�� ���� idx�� return. ���� ������, �����Ⱚ return.
	person.erase(person.begin(), person.begin() + 2);
	printPerson(person);

	//person.erase(person.begin()); // ������
	//person.erase(person.end()-1); // �Լ���
	//person.erase(person.begin() + 1); // ��μ�
	//person.erase(person.end() - 2); // ������
	//
	//cout << "Check!\n";
	//printPerson(person); // �ֿ���

	//person.pop_back();

	//cout << boolalpha;
	//cout << person.empty(); // ��������� 1 return, �Ⱥ�������� 0 return.

	// string�� �ڿ� \0�� ������� �ʴ�.
	/*string myString;
	getline(cin, myString);

	cout << myString << endl;*/

	return 0;

}