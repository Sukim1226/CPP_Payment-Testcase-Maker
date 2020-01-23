#pragma once
#include "PAYMENT_CLASS.h"
#include "COMBINATION.h"
#include <iostream>
#include <fstream>

void read_product(std::string filename);
void read_method(std::string filename);
void read_discount(std::string filename);
void write_combination(std::string filename);