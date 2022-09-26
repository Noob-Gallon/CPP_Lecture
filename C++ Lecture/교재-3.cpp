#include <iostream>

using namespace std;

class Grade {

public:
	Grade(int _a, int _b, int _c, int _d, int _e) {
		grade_1 = _a;
		grade_2 = _b;
		grade_3 = _c;
		midterm_grade = _d;
		final_grade = _e;
	}

	void cal() {
		cout << "=========================" << endl;
		cout << "성적 총합: " << sum() << endl;
		cout << "=========================" << endl;
	}

	int sum() {
		int sum = 0;
		sum += grade_1 + grade_2 + grade_3 + midterm_grade + final_grade;
		return sum;
	}
private:
	int grade_1;
	int grade_2;
	int grade_3;
	int midterm_grade;
	int final_grade;
};

int main(void) {

	int grade_1;
	int grade_2;
	int grade_3;
	int midterm_grade;
	int final_grade;

	cout << "퀴즈 #1 성적: ";
	cin >> grade_1;

	cout << "퀴즈 #2 성적: ";
	cin >> grade_2;

	cout << "퀴즈 #3 성적: ";
	cin >> grade_3;

	cout << "중간고사 성적: ";
	cin >> midterm_grade;

	cout << "기말고사 성적: ";
	cin >> final_grade;

	Grade grade(grade_1, grade_2, grade_3, midterm_grade, final_grade);
	grade.cal();

	return 0;
}