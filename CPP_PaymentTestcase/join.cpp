#include "COMBINATION.h"

using namespace std;

string exception(Product& product, Method& method, Discount& discount) {
	bool tax, fee, option;
	
	tax = product.getTax() & method.getTax() & discount.getTax();
	fee = product.getFee();
	option = product.getOption();

}

// Product - Discount - Method 순이 가장 효율적일 듯
void join_natural(void) {
	for (int i = 0; i < discountComb.size(); i++) {
		
		for (int j = 0; j < methodComb.size(); j++) {
			
			for (int k = 0; k < productComb.size(); k++) {
				
				for (int pidx = 0; pidx < (productComb[k]->combineList).size(); pidx++) {
					Product* product = (productComb[k]->combineList)[pidx];
					string name = product->getName();

				}
				
				

			}
		}
	}
}
