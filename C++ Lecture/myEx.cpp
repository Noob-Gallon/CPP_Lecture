#include <iostream>

using namespace std;

class Food {
public:
	string name;
	int price;
};

class Receipe {
public:
	Food* food;
	int num;
	int check = 0;
	Receipe(int _num) : num(_num) {
		food = new Food[num];
	}
	void addFood(string _name, int _price) {

		if (check == num) {
			return;
		}
		
		food[check].name = _name;
		food[check].price = _price;

		check++;
	}
	void printFood(void) {
		
		// tip : range-based for loop에서는
		// pointer를 전달해줄 수 없음.
		// 이 말은 즉슨, 배열이 들어갈 수 없음?

		for (int i = 0; i < num; i++) {
			cout << food[i].name << " " << food[i].price << endl;
		}
	}
	Receipe(const Receipe& _receipe) {
		this->num = _receipe.num;
		this->food = new Food[this->num];

		for (int i = 0; i < this->num; i++) {
			if (_receipe.food[i].name.length() % 2 == 0) {
				this->food[i].name = 'a' + _receipe.food[i].name;
			}
			else {
				this->food[i].name = _receipe.food[i].name;
			}

			this->food[i].price = _receipe.food[i].price;
		}
	}
	~Receipe() {
		delete[] food;
	}

};

int main(void) {


	Receipe receipe(3);

	receipe.addFood("apple", 1000);
	receipe.addFood("banana", 2000);
	receipe.addFood("grape", 3000);
	receipe.addFood("melon", 4000);

	receipe.printFood();

	Receipe myReceipe(receipe);

	myReceipe.printFood();

	return 0;
}