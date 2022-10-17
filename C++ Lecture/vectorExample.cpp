#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Student {

public:
	Student(int _grade1, float _grade2, string _name, string _ID) 
		: grade1(_grade1), grade2(_grade2), name(_name), ID(_ID) {
	}
	void changeGrade(int _grade1) {
		grade1 = _grade1;
	}
	void changeGrade(float _grade2) {
		grade2 = _grade2;
	}
	void student_info() {
		cout << "---------------------" << endl;
		cout << "Student name : " << name << endl;
		cout << "Stduent ID : " << ID << endl;
		cout << "Student grade1 : " << grade1 << endl;
		cout << "Stduent grade2 : " << grade2 << endl;
		cout << "---------------------" << endl;
	}
	string get_ID() {
		return ID;
	}
	static string schoolName;
	
private:
	int grade1;
	float grade2;
	string name;
	string ID;
};

bool compare(Student& _std1, Student& _std2) {
	return (_std1.get_ID() < _std2.get_ID());
}

int main(void) {

	vector<Student> students;
	string name;
	string ID;
	int grade1;
	int grade2;

	students.push_back(Student(100, 90.5, "�ֿ���", "202000916"));
	students.push_back(Student(100, 90.5, "������", "201901768"));
	students.push_back(Student(100, 90.5, "��μ�", "201901738"));
	cout << students.size() << endl;
	cout << students[0].get_ID() << endl;
	cout << students.at(1).get_ID() << endl;
	cout << students.front().get_ID() << endl; // ���� vector ���� ���� Class�̸�, ���� ����
	cout << students.back().get_ID() << endl;
	students.pop_back();
	students.clear();

	vector<int> ints;
	
	for (int i = 1; i < 11; i++) {
		ints.push_back(i);
	}
	
	// n, m. m�� ������ n��ŭ ä���ش�.
	// ints.assign(3, 10);

	// insert�� ������ �ּ� �տ� �־��ش�?

	// insert�� ������ �ּ� �տ� �־��ֹǷ�, being+1��
	// ù ��° ���� �ٷ� �ڷ�

	// end�� ������ ���� �ٷ� �ڷ� (�ֳĸ�, end�� ���������� +1�� �ּڰ��� ��ȯ)
	ints.insert(ints.begin() + 1, 999);
	ints.insert(ints.end(), 999);
	cout << ints.front() << " " << ints.back() << endl;
	
	// insert�� ������ �ּ� �տ� �־�������, erase�� ������ �ּ� ��ġ�� �����ش�.
	ints.erase(ints.begin() + 1);
	ints.erase(ints.end() - 1);

	for (auto& _e : ints) {
		cout << _e << endl;
	}


	for (auto& _e : students) {
		_e.student_info();
	}

	sort(students.begin(), students.end(), compare);

	for (auto& _e : students) {
		_e.student_info();
	}

	return 0;
}

// unique_ptr
// static (class ���� �� �Ѱ��� ����� ������ �ϴ� ��...)
// �������� ���·θ� �ʱ�ȭ���ټ� ����.