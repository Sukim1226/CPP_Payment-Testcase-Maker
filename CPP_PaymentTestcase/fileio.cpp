#include "PAYMENT_CLASS.h"
#include "FILE_IO.h"

using namespace std;

vector <Product*> productList;
vector <Method*> methodList;
vector <Discount*> discountList;

void read_product(string filename) {
	ifstream input(filename.c_str());
	string name;
	bool tax, fee;

	while (input >> name >> tax >> fee) {
		Product * product = new Product(name, tax, fee);
		productList.push_back(product);
	}

	input.close();
}

void read_method(string filename) {
	ifstream input(filename.c_str(), ifstream::in);
	string name, cardName;
	bool tax;
	int cardNum;

	while (input >> name >> tax >> cardNum) {
		Method * method = new Method(name, tax);
		for (int i = 0; i < cardNum; i++) {
			input >> cardName;
			method->setCardList(cardName);
		}
		methodList.push_back(method);
	}

	input.close();
}

void read_discount(string filename) {
	ifstream input(filename.c_str(), ifstream::in);
	string name;
	bool tax, alone, multi;

	while (input >> name >> tax >> alone >> multi) {
		Discount * discount = new Discount(name, tax, alone, multi);
		discountList.push_back(discount);
	}

	input.close();
}

void print_combination_num(string filename) {
	cout << "------------------------------" << endl;
	cout << "상품 구분 개수: " << productComb.size() << endl;
	cout << "할인 수단 개수: " << discountComb.size() << endl;
	cout << "결제 수단 개수: " << methodComb.size() << endl;
	cout << "------------------------------" << endl;
}

void write_combination(string filename) {
	cout << "," << endl;
}