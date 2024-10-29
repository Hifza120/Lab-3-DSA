#include <iostream>
#include "customList.h" 

using namespace std;

int main() {
	customList<int> myCustomList(8);

	myCustomList.addElementatLastIndex(10);
	myCustomList.addElementatLastIndex(20);
	myCustomList.addElementatLastIndex(30);
	myCustomList.addElementatLastIndex(25);
	myCustomList.addElementatLastIndex(15);
	myCustomList.addElementatLastIndex(40);
	myCustomList.addElementatLastIndex(20); 

	cout << "Current size of the list: " << myCustomList.Size() << endl;

	cout << "Sum of prime numbers: " << myCustomList.sumofprime() << endl;

	cout << "Second maximum even number: " << myCustomList.secondMaxEven() << endl;

	cout << "Second minimum odd number: " << myCustomList.secondMinOdd() << endl;

	cout << "Duplicates in the list: " << endl;
	myCustomList.printDuplicates();

	int rotations = 2;
	myCustomList.rotateClockwise(rotations);
	myCustomList.display();

	return 0;
}