#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <vector>
#include <malloc.h>

//类模板
//泛化用的template

template<typename T>
class Vector {
	T* data;
	int capacity;
	int n;
public:
	Vector(int cap) {
		data = new T[cap];
		if (data == 0) { 
			cap = 0;
			n = 0;
			return; 
		}
		capacity = cap;
		n = 0;
	}
	void push_back(T e) {
		if (n == capacity) {//如果空间已满
			std::cout << "cache bigger" << std::endl;
			T* p = new T[2 * capacity];
			if (p) {
				for (int i = 0; i < n; i++) {
					p[i] = data[i];
					delete[]data;
					data = p;
					capacity = 2 * capacity;
				}
			}
			else {
				return;
			}
		}
		data[n] = e;
		n++;
	}

	T operator[](int i) const {
		if (i<0 || i>n) throw "illegal!";
		return data[i];
		return 0;
	}

	int size() {

		return n;
	}
	Vector() : data(nullptr), capacity(0), n(0) {}
};

int main() {
	Vector<std::string> v;
	v.push_back("hello");
	return 0;
}