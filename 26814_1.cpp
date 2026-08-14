#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <iostream> //c++标准输入输出流头文件
#include <cstring>
#include <fstream>

void swap(int &x, int &y) {
	int t = x;
	x = y;
	y = t;
}

int stdout2() {
	int i, j;
	std::cout << "hello world" << std::endl;
	std::cout << 12345;
	return 0;
}

//int main() {
//	//引用变量
//	//用的是&号
//	//对引用变量做修改，就是对其所指的变量做修改
//	stdout2();
//	int a = 3, & r = a;
//	int b = 8;
//    std::cout << a << "\t" << r << std::endl;
//	r = 5;
//	std::cout << a << "\t" << r << std::endl;
//	a = 2;
//	std::cout << a << "\t" << r << std::endl;
//	std::cout << "a=" << a << "," << "b=" << b << std::endl;
//	swap(a, b);
//	std::cout << "a=" << a << "," << "b=" << b << std::endl;
//	return 0;
//}