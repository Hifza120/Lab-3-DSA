#include "myList.h"

template<typename T>
class customList : public myList<T> {
public:
	customList(int maxSize = 5) : myList<T>(maxSize) {}

	bool primeCheck(T value) {
		if (value < 2) return false;
		for (int i = 2; i <= value / 2; i++) {
			if (value % i == 0) {
				return false;
			}
		}
		return true;
	}

	T sumofprime() {
		T sum = 0;
		for (int i = 0; i < myList<T>::currentSize; i++) {
			if (primeCheck(myList<T>::arr[i])) {
				sum += myList<T>::arr[i];
			}
		}
		return sum;
	}

	T secondMaxEven() {
		T max = -1, secondMax = -1;
		for (int i = 0; i < myList<T>::currentSize; i++) {
			if (myList<T>::arr[i] % 2 == 0) {
				if (myList<T>::arr[i] > max) {
					secondMax = max;
					max = myList<T>::arr[i];
				}
				else if (myList<T>::arr[i] > secondMax) {
					secondMax = myList<T>::arr[i];
				}
			}
		}
		return secondMax;
	}

	T secondMinOdd() {
		T min = 10000 , secondMin = 10000;
		for (int i = 0; i < myList<T>::currentSize; i++) {
			if (myList<T>::arr[i] % 2 != 0) {
				if (myList<T>::arr[i] < min) {
					secondMin = min;
					min = myList<T>::arr[i];
				}
				else if (myList<T>::arr[i] < secondMin) {
					secondMin = myList<T>::arr[i];
				}
			}
		}
		return secondMin == numeric_limits<T>::max() ? -1 : secondMin;
	}

	void printDuplicates() {
		for (int i = 0; i < myList<T>::currentSize; i++) {
			for (int j = i + 1; j < myList<T>::currentSize; j++) {
				if (myList<T>::arr[i] == myList<T>::arr[j]) {
					cout << myList<T>::arr[i] << "    " << endl;
					break;
				}
			}
		}
	}

	void rotateClockwise(int r) {
		int n = myList<T>::currentSize;
		r = r % n;
		for (int i = 0; i < r; i++) {
			T temp = myList<T>::arr[n - 1];
			for (int j = n - 1; j > 0; j--) {
				myList<T>::arr[j] = myList<T>::arr[j - 1];
			}
			myList<T>::arr[0] = temp;
		}
	}

	void rotateAntiClockwise(int rt) {
		int n = myList<T>::currentSize;
		rt = rt % n;
		for (int i = 0; i < rt; i++) {
			T temp = myList<T>::arr[0];
			for (int j = 0; j < n - 1; j++) {
				myList<T>::arr[j] = myList<T>::arr[j + 1];
			}
			myList<T>::arr[n - 1] = temp;
		}
	}

	void display() {
		for (int i = 0; i < myList<T>::currentSize; i++) {
			cout << myList<T>::arr[i] << "    ";
		}
		cout << endl;
	}
};
