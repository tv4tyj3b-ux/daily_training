#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <vector>
#include <malloc.h>
//狗屎，按照教程来总是拿不到默认的构造函数

//今天学this指针、访问控制和构造函数
//class和struct其实都可以构造一个大类作为变量
//但struct内的数据默认是共有的，class默认是私有的
//class可以构造接口，使用public和private进行区分

//class student {
//	//私有部分
//private:
//	std::string name;
//	double score;
//	//对外部分（实际上就是接口）
//public:
//	//构造函数是创建一个类对象（比如下面的stu）的时候会默认存在的一个成员
//	//注意是一开始就包含在大函数里面的，不是跟随函数调用而构建的
//	//构造函数之后，类对象里面就会有一个默认的值，而不是只分配内存空间而没有值
//	student() {
//		name = "No";
//		score = 0;
//		std::cout << "构造函数\n";
//	}
//
//	void printout() {
//		std::cout << "name:\t" << name << "score:\t" << score <<std::endl;
//	}
//
//	std::string get_name() { return name; }
//	double get_score() { return score; }
//	void set_name(std::string setname) { name = setname; }
//	void set_score(double setscore) { score = setscore; }
//};



//int main() {
//	std::cin.clear();
//	student stu;
//	stu.printout();
//	return 0;
//}