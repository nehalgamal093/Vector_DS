#pragma once
template <class T>
class Vector
{
private:
	int size;
	int capacity;
	T* arr;
	void expand();
public:
	Vector();
	Vector(int capacity);
	Vector(int size, T num);
	Vector(const Vector& v);
	void push_back(T value);
	void pop_back();
	void insert(int index, T value);
	void erase(int index);
	T& operator[](int index);
	int size_();
	Vector<T> operator=(const Vector& v);
	~Vector();

};

