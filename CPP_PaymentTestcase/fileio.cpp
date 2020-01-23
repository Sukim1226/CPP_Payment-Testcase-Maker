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
	bool alone, complex;

	while (input >> name >> alone >> complex) {
		Discount * discount = new Discount(name, alone, complex);
		discountList.push_back(discount);
	}

	input.close();
}

void print_combination_num(string filename) {
	cout << "------------------------------" << endl;
	cout << productComb.size() << endl;
	cout << methodComb.size() << endl;
	cout << discountComb.size() << endl;
	cout << "------------------------------" << endl;
}

void write_combination(string filename) {
	cout << "," << endl;
}