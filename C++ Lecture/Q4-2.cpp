#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
	BankAccount(string _number, int _balance) : number(_number), balance(_balance) {
		cout << "Your BankAccount has been initialized!" << endl;
	}
	void deposit(int _money) {

		if (_money <= 0) {
			cout << "Wrong Input" << endl;
			return;
		}

		balance += _money;
	}
	void withdraw(int _money) {
		if (_money <= 0) {
			cout << "Wrong Input" << endl;
			return;
		}
		else if (balance < _money) {
			cout << "Your balance is not enough to withdraw " << _money << " " << "won" << endl;
			return;
		}

		balance -= _money;
	}
	void showBalance() {
		cout << "Your Balance : " << balance << endl;
	}
private:
	string number;
	int balance;
};

int main(void) {

	BankAccount bankAccount("0001", 1000);
	bankAccount.deposit(0);
	bankAccount.deposit(-1000);
	bankAccount.deposit(1000);

	bankAccount.showBalance();

	bankAccount.withdraw(0);
	bankAccount.withdraw(-1000);
	bankAccount.withdraw(1000);
	bankAccount.withdraw(10000);

	bankAccount.showBalance();

	return 0;
}