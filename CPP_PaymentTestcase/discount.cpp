#include "PAYMENT_CLASS.h"

using namespace std;

void Discount::setName(string name_) {
	this->name = name_;
}

void Discount::setAlone(bool alone_) {
	this->alone = alone_;
}

void Discount::setMulti(bool multi_) {
	this->multi = multi_;
}

string Discount::getName(void) {
	return this->name;
}

bool Discount::getAlone(void) {
	return this->alone;
}

bool Discount::getMulti(void) {
	return this->multi;
}