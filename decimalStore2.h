#pragma once
#include<iostream>
class decimalStore2
{
private:
	struct decConverter {
		double data2;
		decConverter* link;
	};

	decConverter* front;
	decConverter* rear;

public:
	decimalStore2();

	void dec2bin(double);

	bool isempty2();

	~decimalStore2();

};

