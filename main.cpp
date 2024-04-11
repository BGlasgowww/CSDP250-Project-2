#include "decimalStore.h"
#include "decimalStore2.h"
#include<iostream>
using namespace std;

int main() {

	decimalStore num;
	decimalStore2 num2;
	double grab, grabDecimal;
	int grabInteger;

	cout << "Enter a non-negative number with a decimal: " << endl;
	cin >> grab;

	grabInteger = grab;
	grabDecimal = grab - grabInteger;

	num.int2bin(grabInteger);
	num2.dec2bin(grabDecimal);

	return 0;
}