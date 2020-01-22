#include "PAYMENT_CLASS.h"
#include "FILE_IO.h"

using namespace std;

std::vector <Product*> productList;
std::vector <Method*> methodList;
std::vector <Discount*> discountList;

bool read_product(string filename) {
	ifstream input(filename.c_str());
	string name;
	bool tax, fee;

	while (input >> name >> tax >> fee) {
		Product *product = new Product(name, tax, fee);
		productList.push_back(product);
	}
}

bool read_method(string filename) {
	ifstream input(filename.c_str());
	string name, cardName;
	bool tax;
	int cardNum;

	while (input >> name >> tax >> cardNum) {
		Method* method = new Method(name, tax);
		for (int i = 0; i < cardNum; i++) {
			input >> cardName;
			method->setCardList(cardName);
		}
	}
}

bool read_discount(string filename) {
	ifstream input(filename.c_str());
	string name;
	bool alone, complex;

	while (input >> name >> alone >> complex) {
		Discount * discount = new Discount(name, alone, complex);
		discountList.push_back(discount);
	}
}