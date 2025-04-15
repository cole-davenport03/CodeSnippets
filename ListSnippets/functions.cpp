#include "list.h"

void snippetGroup2Snippet2() {
	list<string> names;

	names.push_front("Xavier");
	names.push_front("Logan");
	names.push_front("Hank the Beast");

	cout << "List\n----\n";

	for (string name : names) {
		cout << name << endl;
	}

	names.pop_back();
	names.pop_front();
	cout << endl << endl;

	auto namesIterator = names.begin();
	if (namesIterator != names.end()) {
		cout << "The remaining name is: " << *namesIterator << endl;
	}
}

void bonusSnippetRemoveElement() {
	list<Age> ages;

	for (int a = 5; a < 10; a++) {
		ages.push_back(Age(a * 5));
	}

	for (Age a : ages) {
		cout << a.getAge() << endl;
	}

	auto ageIter = ages.begin();
	ageIter++;
	ageIter++;
	ageIter = ages.erase(ageIter);

	ageIter = ages.begin();

	cout << "List after removing middle" << endl;
	while (ageIter != ages.end()) {
		cout << (*ageIter).getAge() << endl;
		ageIter++;
	}
}