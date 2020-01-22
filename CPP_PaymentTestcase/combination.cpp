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
	productList[0]->getName();
}

string pick_random_method() {

}

string pick_random_method_card() {

}

string pick_random_discount() {

}

template <class T>
void make_combination(Combination<T>& comb, vector<T*>& content, bool push, int idx, int cnt) {
	if (cnt == max)	return;
	
	if (push)	(comb->combineList).push_back(content[idx]->getName());

	make_combination(comb, content, true, idx + 1, cnt + 1);
	make_combination(comb, content, false, idx + 1, cnt);

}