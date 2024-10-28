#include"myList.h"
template<typename T>
class customList : public myList<T>{
public:
	customList(int maxSize = 5) :myList<T>(maxSize){

	}
	T sumofprime(){
		T sum = 0;
		for (int i = 0; i < myList<T>::currentSize; i++){
			if (primeCheck(myList<T>::arr[i]){
				sum += arr[i];
			}
		}
	}
	bool primeCheck(T value){
		for (int i = 0; i < value / 2; i++){
			if (value%i == 0){
				return false;
			}
		}
		return true;
	}
	T secondMaxEven(){
		T max = 0;
		T SecondMax = 0;
		for (int i = 0; i < myList<T>::currentSize; i++){
			if (myList<T>::arr[i] % 2 == 0){
				if (max < myList<T>::arr[i]){
					SecondMax = max;
					max = myList<T>::arr[i];
				}
				else{
					if (secondMax < myList<T>::arr[i]){
						secondMax = arr[i];
					}
				}
			}
		}
		return SecondMax;
	} 
	T secondminodd(){
		T min;
		T SecondMin;
		for (int i = 0; i < myList<T>::currentSize; i++){
			if (myList<T>::arr[i] % 2 == 0){
				if (min  < myList<T>::arr[i]){
					SecondMin = min;
					min = myList<T>::arr[i];
				}
				else{
					if (SecondMin < myList<T>::arr[i]){
						SecondMin = arr[i];
					}
				}
			}
		}
		return SecondMin;
	}
	void printDuplicates(){

		for (int i = 0; i < myList<T>::currentSize; i++){
			for (int j = i + 1; j < myList<T>::currentSize; i++){
				if (arr[i] == arr[j]){
					cout << arr[i] << "    " << endl;

				}
			}
		}
	}
	void rotateClockwise(int r) {
		int n = myList<T>::currentSize;

		for (int i = 0; i < r; i++) {
			// Save the last element
			T last = myList<T>::arr[n - 1];

			// Shift all elements to the right
			for (int j = n - 1; j > 0; j--) {
				myList<T>::arr[j] = myList<T>::arr[j - 1];
			}

			// Set the first element to the saved last element
			myList<T>::arr[0] = last;
		}
	}
};