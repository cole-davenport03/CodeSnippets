#pragma once
#include "list.h"

class Age {
private: 
	int age;
public:
	Age() { age = 0; }
	Age(int age) { this->age = age; }
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
};