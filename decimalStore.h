#pragma once
#include<iostream>
class decimalStore{
private:
	struct intConverter {
		int data;
		intConverter* next;
	}; intConverter* head;

public:
	decimalStore();

	void int2bin(int);
	bool isempty();

	
	~decimalStore();
};

