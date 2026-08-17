#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <vector>
#include <malloc.h>

int malloc() {
	int n = 0;
	int* qm;
	while (n<10000) {
		qm = new int;
		n++;
	}
	delete qm;
	printf("申请了%d个int的内存",n);
	return 0;
}

int main() {
	int a = 5;
	int* p = &a;//定义指针类型p变量，取地址符&获得a的地址
	std::cout << p << std::endl;
	std::cout << &a << std::endl;
	//在这里*作为解引用（取内容/改内容）运算符使用
	std::cout << *p << std::endl;//*p==a
	std::cout << a << std::endl;
	*p = 10;
	std::cout << *p << '\t' << a << std::endl;

	//指针和数组
	int arr[] = { 1,5,3,6,9,42 };
	int* par = arr;
	std::cout << *par << std::endl;
	std::cout << *(par+1) << std::endl;
	std::cout << std::endl;
	std::cout << sizeof(par) << std::endl;
	//数组其实是特殊版本的指针
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		std::cout << par[i] << '\t';
	}
	std::cout << std::endl;
	//动态内存分配
	//存储区分为堆存储区和栈存储区
	//堆存储区是系统公用的，想申请一块专用内存的话就得用malloc，c++里面可以用new
	int* q = new int;//这块new出来的内存没有变量名，只能通过*q访问
	*q = 35110;
	std::cout << *q << '\t' << q << std::endl;
	delete q;//释放内存区块,不释放就会有内存泄漏,但指针这个变量还是在的，只不过没有指向
	q = new int;//这里有申请了一块新内存
	*q = 45110;
	std::cout << q<< '\t' << *q << std::endl;
	delete q;
    std:: cout << std::endl;
	//看看能申请多少内存
	//wocVS居然没上限制的吗，设置10000int好了
	malloc();
 	return 0;
}