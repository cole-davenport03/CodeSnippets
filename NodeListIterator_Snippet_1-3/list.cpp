#include "Header.h"

List::List() {
	first = nullptr;
	last = nullptr;
}

void List::push_back(int age) {
	Node* new_node = new Node(age);

	if (first == nullptr) {
		first = new_node;
		last = new_node;
	}
	else {
		last->next = new_node;
		new_node->previous = last;
		last = new_node;
	}
}

void List::displayList() {
	cout << "======== LIST CONTENTS ==" << endl;
	Node* currentNode = first;

	while (currentNode != nullptr) {
		cout << currentNode->age << endl;
		currentNode = currentNode->next;
	}
}

Iterator List::begin() {
	Iterator iter;
	iter.position = first;
	iter.container = this;
	return iter;
}

Iterator List::end() {
	Iterator iter;
	iter.position = nullptr;
	iter.container = this;
	return iter;
}

void List::insert(Iterator iter, int age) {
	if (iter.position == nullptr) { //insert at end of list
		push_back(age);
		return;
	}

	Node* after = iter.position;
	Node* before = after->previous;
	Node* newNode = new Node(age);

	newNode->previous = before;
	newNode->next = after;
	after->previous = newNode;

	if (before == nullptr) {
		first = newNode;
	}
	else {
		before->next = newNode;
	}
}

Iterator List::erase(Iterator iter) {
	if (iter.position == nullptr) {
		return iter;
	}

	Node* remove = iter.position;
	Node* after = remove->next;
	Node* before = remove->previous;

	if (remove == first) {
		first = after;
	}
	else {
		before->next = after;
	}

	if (remove == last) {
		last = before;
	}
	else {
		after->previous = before;
	}

	delete remove;

	iter.position = after;
	iter.container = this;

	return iter;
}