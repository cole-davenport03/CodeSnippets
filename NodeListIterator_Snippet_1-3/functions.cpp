#include "Header.h"

void throwRunTime() {
	int number;
	try {
		cout << "Enter non-negative integer:";
		cin >> number;
		if (number < 0)
			throw runtime_error("negatice value: " + to_string(number));
	}
	catch (runtime_error rt) {
		cout << "Runtime Error encountered: ";
	}
}