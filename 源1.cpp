#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>//标准输入输出函数
#include <cmath>
#include <cstring>//字符串处理函数
#include <malloc.h>
#include <iostream>
#include <fstream>//文件处理函数库
//using namespace std;

int stdout1(int) {
	int i, j;
	std::cout << "hello world" << std::endl;
	std::cout << 12345 << std::endl;
	//double redius;
	//std::cin >> redius;//标准输入流对象cin，输入运算符>>
	//std::cout << 3.14 * redius * redius << std::endl;
	return 0;
}

int help(int) {
	std::cout << "简单计算器" << std::endl;
    std::cout << "请输入：左数 运算符 右数" << std::endl;
	return 0;
}

int calculator(int) {
	help(1);
	double a, b;
	char i;
	std::cin >> a >> i >> b ;
	if (i == '+') {
		std::cout << a + b << std::endl;
	}
	else if (i == '-') {
		std::cout << a - b << std::endl;
	}
	else if (i == '*') {
		std::cout << a * b << std::endl;
	}
	else if (i == '/') {
		std::cout << a / b << std::endl;
	}
	return 0;
}

int filewriter(int) {
	calculator(1);
	std::ofstream oF("text.txt");
	oF << 3.14 << "  " << "我靠原来要用namespace std";
	oF.close();
	std::ifstream iF("text.txt");
	double d;
	std::string str;
	iF >> d >> str;
	std::cout << d << "  " << str << std::endl;
	return 0;
}

//int main() {
//	printf("hello\n");
//	double x = 3.14;
//	printf("%lf %lf\n", sqrt(x), sin(x));
//	char s[20] = "hello";
//	puts(s);
//	char s2[20];
//	strcpy(s2, "world");
//	puts(s2);
//	strcat(s2, "aaaaaa");
//	puts(s2);
//	printf("%d %d\n", strlen(s), strlen(s2));
//	stdout1(1);
//	filewriter(1);
//	return 0;
//}