#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <vector>
#include <malloc.h>
//定义结构
struct student {
	std::string name;
	double score;
};

int main() {
	std::vector<int>arr = { 2,50,42 };
	arr.push_back(98);
	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << std::endl;
	}
	//类和对象（用struct
	int num;
	std::cout << "put a number you want to pick:" << std::endl;
	std::cin >> num;
	std::cout << std::endl;
	student stu[3];
	for (int n = 0; n < 3; n++) {
		std::string name;
		std::cout << "put in name" << std::endl;
		std::cin >> name;
		stu[n].name = name;
		double score;
		std::cout << "put in score" << std::endl;
		std::cin >> score;
		stu[n].score = score;
	}
	for (int i = 0; i < 3; i++) {
		std::cout << stu[i].name << " ";
		std::cout << stu[i].score << std::endl;
	}
	return 0;
}