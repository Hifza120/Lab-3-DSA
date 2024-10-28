#include<iostream>
using namespace std;
template<typename T>
class List{
	T *arr;
	int maxSize;
	int currentSize;
public:
	List(int mSize = 5) :maxSize(mSize), currentSize(0){
		arr = new T[maxSize];
	}
	List(const List & l1){
		if (arr != nullptr){
			delete[]arr;
		}
		arr = new T[l1.maxSize];
		for (int i = 0; i < l1.currentSize; i++){
			arr[i] = l1.arr[i];
		}
		currentSize = l1.currentSize;

	}
	virtual void addElementatFirstIndex(T value) = 0;
	virtual void addElementatLastIndex(T value) = 0;
	virtual T removeElementFromEnd() = 0;
	virtual void removeElementFromStart() = 0;
	virtual ~List(){
		delete[] arr;
		arr = nullptr;
	}
};