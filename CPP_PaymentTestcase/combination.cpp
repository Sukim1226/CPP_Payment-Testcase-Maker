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

void insert_combination_list(void) {

	Combination<Product>* product = new Combination<Product>();
	for (int i = 0; i < productList.size(); i++) {
		make_combination <Product> (*product, productList, true, i, 0);
		productComb.push_back(product);
	}

	Combination<Method>* method = new Combination<Method>();
	for (int i = 0; i < methodList.size(); i++) {
		make_combination <Method>(*method, methodList, true, i, 0);
		methodComb.push_back(method);
	}

	Combination<Discount>* discount = new Combination<Discount>();
	for (int i = 0; i < discountList.size(); i++) {
		make_combination <Discount>(*discount, discountList, true, i, 0);
		discountComb.push_back(discount);
	}

}