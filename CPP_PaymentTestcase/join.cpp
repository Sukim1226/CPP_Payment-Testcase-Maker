#include "COMBINATION.h"

using namespace std;

void join_natural(void) {
	for (int i = 0; i < discountComb.size(); i++) {
		Combination <Discount> * dep1 = discountComb[i];
		for (int j = 0; j < methodComb.size(); j++) {
			string dep2 = methodComb[j]->getCombinedString();
			for (int k = 0; k < productComb.size(); k++) {


			}
		}
	}
}