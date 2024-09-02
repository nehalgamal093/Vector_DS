#include "Vector.h"

template<class T>
Vector<T>::Vector() {
	size = 0;
	capacity = 1;
	arr = new T[capacity];
}

template<class T>
Vector<T>::Vector(int capacity) {
	this->capacity = capacity;
	size = 0;
	arr = new T[capacity];
}

template <class T>
Vector<T> ::Vector(int size, T num) {
	this->size = size;
	capacity = size;
	arr = new T[capacity];
	for (int i = 0; i < size; i++) {
		arr[i] = num;
	}
}
template <class T>
Vector<T> ::Vector(const Vector& v) {
	size = v.size;
	capacity = size;
	arr = new T[capacity];
	for (int i = 0; i < size; i++) {
		arr[i] = v.arr[i];
	}
}

template <class T>
void Vector<T> ::expand() {
	capacity *= 2;
	T* tmp = new T[capacity];
	for (int i = 0; i < size; i++) {
		tmp[i] = arr[i];
	}
	delete[]arr;
	arr = tmp;
}
template <class T>
void Vector<T>::push_back(T value) {
	if (size == capacity) {
		expand();
	}
	arr[size] = value;
	size++;

}

template<class T>
void Vector<T>::pop_back() {
	if (size != 0) {
		size--;
	}
}
template <class T>
void Vector<T>::insert(int index, T value) {
	if (size == capacity) {
		expand();
	}
	for (int i = size - 1; i >= index; i--) {
		arr[i + 1] = arr[i];
	}
	arr[index] = value;
	size++;
}
template <class T>
void Vector<T>::erase(int index) {
	for (int i = index; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	size--;
}

template <class T>
T& Vector<T> :: operator[](int index) {
	return arr[index];
}

template <class T>
int Vector<T>::size_() {
	return size;
}
template <class T>
Vector<T> Vector<T>:: operator=(const Vector& v) {
	delete[]arr;
	size = v.size;
	capacity = size;
	arr = new T[capacity];
	for (int i = 0; i < size; i++) {
		arr[i] = v.arr[i];
	}
	return *this;
}
template <class T>
Vector<T>::~Vector() {
	delete[] arr;
}
template class Vector<int>;
template class Vector<char>;