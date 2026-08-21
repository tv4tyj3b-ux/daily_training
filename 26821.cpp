#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <vector>
#include <malloc.h>
//struct student {
//	std::string name;
//	double score;
//	//这是个函数中的函数
//	student(std::string n, double s) {
//		name = n;
//		score = s;
//	}
//	//这也是函数中的函数
//	void print() {
//		std::cout << name << " " << score << std::endl;
//	}
//};

//重载运算符
//看起来更简洁，也能让自定义类型融入cout和cin的语法生态
//这玩意得是全局函数
//std::ostream& operator<<(std::ostream& o, student s) {
//	std::cout << s.name << "," << s.score << std::endl;
//	return o;
//}
//也可以重载下标运算符，必须作为类的内部函数界定

//int main() {
//	student stu("lee", 90);
//	stu.print();
//	std::cout << stu;
//	return 0;
//}