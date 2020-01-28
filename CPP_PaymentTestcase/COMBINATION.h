#pragma once
#include "PAYMENT_CLASS.h"

template <class T>
class Combination {
public:
	Combination() = default;
	~Combination() = default;
	
	std::vector <T*> combineList;
	std::string getCombinedString(void);

};

extern std::vector <Combination<Product>*> productComb;
extern std::vector <Combination<Method>*> methodComb;
extern std::vector <Combination<Discount>*> discountComb;