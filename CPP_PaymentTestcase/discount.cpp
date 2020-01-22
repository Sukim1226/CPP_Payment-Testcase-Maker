#include "PAYMENT_CLASS.h"

using namespace std;

void Discount::setName(string name_) {
	this->name = name_;
}

void Discount::setAlone(bool alone_) {
	this->alone = alone_;
}

void Discount::setComplex(bool complex_) {
	this->complex = complex_;
}

string Discount::getName(void) {
	return this->name;
}

bool Discount::getAlone(void) {
	return this->alone;
}

bool Discount::getComplex(void) {
	return this->complex;
}