#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {

public:
	Employee(int _id, string _name, int _age, int _salary) : id(_id), name(_name), age(_age), salary(_salary) {
		cout << "Class initialized" << endl;
	}

	void print_status() {
		cout << "employee " << id << endl;
		cout << name << endl;
		cout << age << endl;
		cout << salary << endl;
	}

private:
	int id;
	string name;
	int age;
	int salary;
};

int main(void) {

	vector<Employee> employees;
	employees.push_back(Employee(1, "Á¤µ¿±³", 23, 1000));
	employees[0].print_status();
	return 0;
}