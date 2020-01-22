#include "PAYMENT_CLASS.h"

using namespace std;

void Method::setName(string name_) {
	this->name = name_;
}

void Method::setCardList(string cardName_) {
	(this->cardList).push_back(cardName_);
}

void Method::setTax(bool tax_) {
	this->tax = tax_;
}

string Method::getName(void) {
	return this->name;
}

int Method::getCardNum(void) {
	return (int)(this->cardList).size();
}

string Method::getCardList(int idx) {
	return (this->cardList)[idx];
}

bool Method::getTax(void) {
	return this->tax;
}