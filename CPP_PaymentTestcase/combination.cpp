#include "COMBINATION.h"

using namespace std;

vector <Combination<Product>*> productComb;
vector <Combination<Method>*> methodComb;
vector <Combination<Discount>*> discountComb;

int max;

void initialize_visit() {

}

void initialize_visit_array() {

}

string pick_random_product() {
	return "";
}

string pick_random_method() {
	return "";
}

string pick_random_method_card() {
	return "";
}

string pick_random_discount() {
	return "";
}

template <class T>
void make_combination(Combination<T>& comb, vector<T*>& content, bool push, int idx, int cnt) {
	if (cnt == max)	return;
	
	if (push) {
		(comb.combineList).push_back(content[idx]);
	}

	make_combination(comb, content, true, idx + 1, cnt + 1);
	make_combination(comb, content, false, idx + 1, cnt);

}

void naturalJoin() {
	vector <Combination<Product>*> prod;
	vector <Combination<Method>*> mth;
	vector <Combination<Discount>*> dis;

	Combination<Product>* comb = new Combination<Product>();

	for (int i = 0; i < productList.size(); i++) {
		make_combination <Product> (*comb, productList, true, i, 0);
	}

}