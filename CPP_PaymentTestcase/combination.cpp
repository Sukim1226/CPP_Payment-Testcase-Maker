#include "COMBINATION.h"
#include <cstdlib>
#include <ctime>

#define PRODUCT		1
#define METHOD		2
#define DISCOUNT	3
typedef int Type;

using namespace std;

vector <Combination<Product>*> productComb;
vector <Combination<Method>*> methodComb;
vector <Combination<Discount>*> discountComb;

int max;

void initialize_visit(vector<bool>& visit, int size) {
	visit.clear();
	for (int i = 0; i < size; i++) {
		visit.push_back(false);
	}
}

bool all_visited(vector<bool>& visit) {
	for (int i = 0; i < visit.size(); i++) {
		if (!visit[i])
			return false;
	}
	return true;
}

int pick_random_idx(vector<bool>& visit, int size) {
	int random_idx;

	srand(time(NULL));

	if (!all_visited(visit)) {
		random_idx = rand() % size;
		while (visit[random_idx]) {
			random_idx = rand() % size;
		}
	}
	else {
		initialize_visit(visit, size);
		random_idx = rand() % size;
		visit[random_idx] = true;
	}

	return random_idx;
}

template <class T>
void make_combination(Combination<T>& comb, vector<T*>& content, bool push, int idx, int cnt, int max, Type type) {
	if (cnt == max)	return;
	

	if (push && (type == PRODUCT || (type == DISCOUNT && content[idx]->getMulti()))) {
		(comb.combineList).push_back(content[idx]);
	}

	make_combination(comb, content, true, idx + 1, cnt + 1, max, type);
	make_combination(comb, content, false, idx + 1, cnt, max, type);
}

void insert_product_combination(int max_) {
	Combination<Product>* product = new Combination<Product>();
	for (int i = 0; i < productList.size(); i++) {
		make_combination <Product>(*product, productList, true, i, 0, max_, PRODUCT);
		productComb.push_back(product);
	}
}

void insert_method_combination(int max_) {
	Combination<Method>* method = new Combination<Method>();
	for (int i = 0; i < methodList.size(); i++) {
		(method->combineList).push_back(methodList[i]);
		methodComb.push_back(method);
	}
}

void insert_discount_combination(int max_) {
	Combination<Discount>* discount = new Combination<Discount>();
	for (int i = 0; i < discountList.size(); i++) {
		make_combination <Discount>(*discount, discountList, true, i, 0, max_, DISCOUNT);
		discountComb.push_back(discount);
	}
}

template<class T>
string Combination<T>::getCombinedString(int idx) {
	string str = "";
	for (int i = 0; i < (this->combineList).size(); i++) {
		str += (this->combineList)[i] + " ";
	}

	return str;
}

int print_join_natural(void) {
	int cnt = 0;
	for (int i = 0; i < productComb.size(); i++) {
		string str;

		for (int j = 0; j < discountComb.size(); j++) {
			for (int k = 0; k < methodComb.size(); k++) {
				
			}
		}
	}

	return 1;
}

void join_random(void) {

}