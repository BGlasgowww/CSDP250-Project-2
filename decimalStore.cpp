#include "decimalStore.h"
#include<iostream>
using namespace std;

decimalStore::decimalStore() {
	head = nullptr;
}

bool decimalStore::isempty() {
	if (head == nullptr) {
		return head;
	}
}

void decimalStore::int2bin(int grabInteger) {
	int recieve2 = grabInteger;
	intConverter* info = new intConverter;

	intConverter* nodePtr;
	nodePtr = head;

	while (recieve2 != 0) {
		info->data = recieve2 % 2;
		recieve2 = recieve2 / 2;
		info->next;
	}

	cout << "Integer binary is: ";

	while (nodePtr != nullptr) {
		cout << nodePtr->data;
		nodePtr = nodePtr->next;
	}

};

decimalStore::~decimalStore() {
	while (!isempty()) {
		intConverter* temp = head;
		head = head->next;
		delete temp;
	}
}
