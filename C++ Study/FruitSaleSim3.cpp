#include <iostream>
using namespace std;

class FruitSeller {
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	// Constructor를 이용한 initializer는 선언과 동시에 초기화를 해주기 때문에, const member도 초기화가 가능하다.
	FruitSeller(int price, int num, int money) : APPLE_PRICE(price), numOfApples(num), myMoney(money) {
	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() const {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
	}
};

class FruitBuyer {
private:
	int myMoney;
	int numOfApples;
public:
	FruitBuyer(int money) {
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money) {

		// FruitBuyer에서 FruitSeller Class를 받아서 자신의 변수를 변경함과 동시에
		// FruitSeller의 method를 실행해서 FruitSeller의 변수를 변경할 수 있다.
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	// const가 붙은 method 안에서는 어떠한 변수의 값도 변경할 수 없음.
	// 또한, const가 붙지 않은 method를 불러낼 수 없음.
	void ShowBuyResult() const {
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void) {

	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000); // buyer Class에 argument로 FruitSeller Class를 넘겨준다.
	
	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();

	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}