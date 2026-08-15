#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <iostream> //c++标准输入输出流头文件
#include <cstring>
#include <fstream>
void printstar(char ch, int n = 1) {
	for (int i = 0; i < n; i++) {
		std::cout << ch;
	}
	std::cout << std::endl;
}

int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

template<typename T>
T add(T x, T y) {
	return x + y;
}

int main() {
	printstar('*',3);
	std::cout << add(5, 3) << std::endl;
	std::cout << add(5.3, 3.5) << std::endl;
	std::cout << add<std::string>("hello", "world") << std::endl;
	return 0;
}