#pragma once
#include "Header.h"

class Iterator {
private:
	Node* position;
	List* container;
public:
	Iterator();
	int get() const;
	void next();
	void previous();
	bool equals(Iterator other);

	friend class List;
};