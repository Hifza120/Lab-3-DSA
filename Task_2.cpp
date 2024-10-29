#include <iostream>
#include "myList.h"

using namespace std;

int main() {
	myList<int> list;

	cout << "Adding elements to the list..." << endl;
	list.addElementatLastIndex(10);
	list.addElementatLastIndex(20);
	list.addElementatLastIndex(30);
	list.addElementatFirstIndex(5);

	cout << "Current size of the list: " << list.Size() << endl;

	if (list.empty()) {
		cout << "Is the list empty? Yes" << endl;
	}
	else {
		cout << "Is the list empty? No" << endl;
	}

	cout << "Removing element from the end: " << list.removeElementFromEnd() << endl;
	cout << "Current size of the list after removal: " << list.Size() << endl;

	int searchValue = 20;
	if (list.Search(searchValue)) {
		cout << "Searching for " << searchValue << ": Found" << endl;
	}
	else {
		cout << "Searching for " << searchValue << ": Not Found" << endl;
	}

	list.removeElementFromStart();
	cout << "Current size of the list after removing from start: " << list.Size() << endl;

	return 0;
}
