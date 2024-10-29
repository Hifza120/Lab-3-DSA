#include"List.h"
template<typename T>
class myList :public List<T>{
public:
	myList(int mSize = 5) :List<T>(mSize){}
	myList(const myList & L2){
		List<T>::arr = new T[L2.List<T>::maxSize];
		maxSize = L2.maxSize;
		currentSize = L2.currentSize;
		for (int i = 0; i < L2.List<T>::currentSize; i++){
			List<T>::arr = L2.List<T>::arr[i];
		}
	}
 void removeElementFromStart();
	void addElementatFirstIndex(T value);
	void addElementatLastIndex(T value);
	T removeElementFromEnd();
	bool empty(){
		return  List<T>::currentSize == 0;
	}
	bool Full(){
		return List<T>::maxSize == List<T>::currentSize;
	}
	int Size(){
		return List<T>::maxSize;
	}
	bool insertAt(T value, int index){
		if (currentSize - 1 > index){
			List<T>::arr[index] = value;
			currentSize++;
			return true;
		}
		return false;
	}
	T last(){
		return List<T>::arr[--currentSize];
	}
	bool Search(T value){
		for (int i = 0; i < List<T>::currentSize; i++){
			if (value == List<T>::arr[i]){
				return true;
			}
		}
		return false;
	}

	  ~myList(){

	}
};
template<typename T>
void myList<T>::addElementatFirstIndex(T value){
	if (List<T>::currentSize != 0){
		List<T>::currentSize++;
		for (int i = 1; i < List<T>::currentSize; i++){
			List<T>::arr[i] = List<T>::arr[i - 1];
		}
		List<T>::arr[0] = value;
	}
	List<T>::arr[List<T>::currentSize] = value;
	List<T>::currentSize++;
}
template<typename T>
void myList<T>::addElementatLastIndex(T value){
	List<T>::arr[List<T>::currentSize] = value;
	List<T>::currentSize++;

}
template<typename T>
T  myList<T>::removeElementFromEnd(){
	return List<T>::arr[--List<T>::currentSize];
}
template<typename T>
void myList<T>::removeElementFromStart(){
	for (int i = 0; i < List<T>::currentSize; i++){
		List<T>::arr[i] = List<T>::arr[i + 1];
	}

	List<T>::currentSize--;

}