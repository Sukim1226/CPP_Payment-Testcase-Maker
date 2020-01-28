#pragma once
#include <vector>
#include <string>

class Product {
public:
	Product(std::string name_, bool tax_, bool fee_) {
		this->name = name_;
		this->tax = tax_;
		this->fee = fee_;
	}
	~Product() = default;

	void setName(std::string name_);
	void setTax(bool tax_);
	void setFee(bool fee_);
	void setMulti(bool multi);

	std::string getName(void);
	bool getTax(void);
	bool getFee(void);
	bool getMulti(void);

private:
	std::string name;
	bool tax;
	bool fee;
	bool multi;
};

class Method {
public:
	Method(std::string name_, bool tax_) {
		this->name = name_;
		this->tax = tax_;
	}
	~Method() = default;

	void setName(std::string name_);
	void setCardList(std::string cardName_);
	void setTax(bool tax_);

	std::string getName(void);
	int getCardNum(void);
	std::string getCardList(int idx);
	bool getTax(void);

private:
	std::string name;
	std::vector <std::string> cardList;
	bool tax;
};

class Discount {
public:
	Discount(std::string name_, bool tax_, bool alone_, bool multi_) {
		this->name = name_;
		this->tax = tax_;
		this->alone = alone_;
		this->multi = multi_;
	}
	~Discount() = default;

	void setName(std::string name_);
	void setAlone(bool alone);
	void setMulti(bool multi);

	std::string getName(void);
	bool getAlone(void);
	bool getMulti(void);

private:
	std::string name;
	bool tax;
	bool alone;
	bool multi;
};

extern std::vector <Product*> productList;
extern std::vector <Method*> methodList;
extern std::vector <Discount*> discountList;