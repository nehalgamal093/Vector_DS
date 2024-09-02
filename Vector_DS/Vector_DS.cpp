#include <iostream>
#include "Vector.h"
using namespace std;
int main() {
	// a n  c e h
	Vector<char> v;
	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	v.push_back('d');
	v.pop_back();
	v.insert(1, 'n');
	v.erase(2);
	v.push_back('e');
	v.push_back('h');
	v[2] = 'l';
	for (int i = 0; i < v.size_(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}