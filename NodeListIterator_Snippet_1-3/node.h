#pragma once

#include "header.h"

class Node {
private: 
	int age;
	Node* next;
	Node* previous;
public:
	Node(int age);

	friend class List;
	friend class Iterator;
};