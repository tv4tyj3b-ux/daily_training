#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <vector>

int main() {
    //string类型
	std::string s = "hello";
	std::cout << s.size() << std::endl;
	std::string s2 = s.substr(0, 4);
	std::cout << s2 << std::endl;
	std::string s4 = s + " " + s2 + " world";
	std::cout << s4 << std::endl;
	s4[0] = 'H';
	std::cout << s4 << std::endl;
	int pos = s4.find("hell");
	std::cout << pos << std::endl;
	int numofs4 = sizeof(s4) / sizeof(s4[0]);
	std::cout << numofs4 << std::endl;
	s4.insert(16, " he he");
	std::cout << s4 << std::endl;
	for (int i = 0; i <= s4.size(); i++) {
		std::cout << s4[i] << "-";
	}
    std:: cout << "\n";

	//vector（向量）类型，类似于数组但可以动态增长
	std::vector<int> v = {58,7,63,4,2,89,24};
	v.push_back(45);
	v.push_back(800);
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << '\t';
	}
	std::cout << std::endl;

	v.pop_back();
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << '\t';
	}
	std::cout << std::endl;

	v.resize(4);
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << '\t';
	}
	std::cout << std::endl;

	return 0;
}