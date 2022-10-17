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

	students.push_back(Student(100, 90.5, "주영인", "202000916"));
	students.push_back(Student(100, 90.5, "정동교", "201901768"));
	students.push_back(Student(100, 90.5, "김민수", "201901738"));
	cout << students.size() << endl;
	cout << students[0].get_ID() << endl;
	cout << students.at(1).get_ID() << endl;
	cout << students.front().get_ID() << endl; // 만약 vector 안의 값이 Class이면, 접근 가능
	cout << students.back().get_ID() << endl;
	students.pop_back();
	students.clear();

	vector<int> ints;
	
	for (int i = 1; i < 11; i++) {
		ints.push_back(i);
	}
	
	// n, m. m의 값으로 n만큼 채워준다.
	// ints.assign(3, 10);

	// insert는 지정한 주소 앞에 넣어준다?

	// insert는 지정한 주소 앞에 넣어주므로, being+1은
	// 첫 번째 원소 바로 뒤로

	// end는 마지막 원소 바로 뒤로 (왜냐면, end는 마지막원소 +1의 주솟값을 반환)
	ints.insert(ints.begin() + 1, 999);
	ints.insert(ints.end(), 999);
	cout << ints.front() << " " << ints.back() << endl;
	
	// insert는 지정한 주소 앞에 넣어주지만, erase는 지정한 주소 위치를 지워준다.
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
// static (class 내에 단 한개의 멤버만 갖도록 하는 것...)
// 전역변수 형태로만 초기화해줄수 있음.