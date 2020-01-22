#include "PAYMENT_CLASS.h"

void Product::setName(string name_) {
	this->name = name_;
}

void Product::setTax(bool tax_) {
	this->tax = tax_;
}

void Product::setFee(bool fee_) {
	this->fee = fee_;
}

string Product::getName(void) {
	return this->name;
}