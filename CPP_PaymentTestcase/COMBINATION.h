#pragma once
#include "PAYMENT_CLASS.h"
#include "FILE_IO.h"

template <class T>
class Combination {
public:
	Combination() = default;
	~Combination() = default;
	
	std::vector <T*> combineList;

};