#pragma once
#include "Header.h"

class List {
private:
	Node* first;
	Node* last;
public:
	List();
	void push_back(int age);
	void insert(Iterator iter, int age);
	Iterator erase(Iterator iter);
	Iterator begin();
	Iterator end();
	void displayList();

	friend class Iterator;
};