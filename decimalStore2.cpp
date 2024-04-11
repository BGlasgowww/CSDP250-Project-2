#include "decimalStore2.h"
#include<iostream>
using namespace std;

decimalStore2::decimalStore2() {
	front = nullptr;
	rear = nullptr;
}

bool decimalStore2::isempty2() {
	if (front == nullptr && rear == nullptr)
		return true;
	else
		return false;
}

void decimalStore2::dec2bin(double grabDecimal) {
	int count = 0;

	while (grabDecimal / 10 != 0) {
		count++;
	}

	int recieve = grabDecimal * count;
	decConverter* info2 = new decConverter;

	while (recieve != 0) {
		info2->data2 = recieve % 2;
		recieve = recieve / 2;
		info2->link = nullptr;

		if (front == nullptr) {
			front = info2;
			rear = info2;
		}

		else {
			rear->link = info2;
			rear = info2;
		}
	}

	cout << "Decimal binary is: ";

	if (isempty2()) {
		cout << "No decimals";
	}

	else {
		decConverter* nodePtr2 = front;

		while (nodePtr2 != nullptr) {
			cout << nodePtr2->data2 << " ";
			nodePtr2 = nodePtr2->link;
		}
	}
};

decimalStore2::~decimalStore2() {
	while (!isempty2()) {
		decConverter* temp; = front;
		front = front->link;
		delete temp;
	}
}