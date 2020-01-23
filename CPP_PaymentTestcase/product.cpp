#include "PAYMENT_CLASS.h"

using namespace std;

void Product::setName(string name_) {
	this->name = name_;
}

void Product::setTax(bool tax_) {
	this->tax = tax_;
}

void Product::setFee(bool fee_) {
	this->fee = fee_;
}

void Product::setMulti(bool multi_) {
	this->multi = multi_;
}

string Product::getName(void) {
	return this->name;
}

bool Product::getTax(void) {
	return this->tax;
}

bool Product::getFee(void) {
	return this->fee;
}

bool Product::getMulti(void) {
	return this->multi;
}

void insert_product(string name_, bool tax, bool fee_) {
	
}