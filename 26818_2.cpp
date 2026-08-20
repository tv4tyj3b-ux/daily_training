#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include <vector>
#include <malloc.h>

struct student {
	std::string name;
	double score;
	std::string hobby;
};


//输入姓名成绩爱好
std::vector<student> putinstu(int &n){
	std::vector<student>stu(n);
	for (int i = 0; i < n; i++) {
		std::cout << "put in name:\t" << std::endl;
		std::cin >> stu[i].name;
		std::cout << "put in score\t" << std::endl;
		std::cin >> stu[i].score;
		std::cout << "put in hobby\t" << std::endl;
		std::cin >> stu[i].hobby;
	}
	return stu;
}

//读出姓名成绩爱好
void putoutstu(std::vector<student> &stu) {
	for (int i = 0; i<stu.size(); i++) {
		std::cout << "name:\t" << stu[i].name << " score:\t" << stu[i].score << " hobby:\t" << stu[i].hobby << std::endl;
	}
}

//读出最高成绩（明天再做吧
void minmaxscore(std::vector<student>& stu) {
	int i = 0;
	int max = stu[i].score;
	int min = stu[i].score;
	std::string maxname = stu[i].name;
	std::string minname = stu[i].name;
	for (i = 0; i < stu.size(); i++) {
		if (max < stu[i].score) {
			maxname = stu[i].name;
			max = stu[i].score;
		}
	}
	for (i = 0; i < stu.size(); i++) {
		if (min > stu[i].score) {
			minname = stu[i].name;
			min = stu[i].score;
		}
	}
	std::cout << "the highest score is:\t" << maxname << "  " << max << std::endl;
	std::cout << "the lowest score is:\t" << minname << "  " << min << std::endl;
}

//读出平均成绩
void avgscore(std::vector<student>& stu) {
	double avgscore = 0;
	double maxium = 0;
	int i = 0;
	for (i = 0; i < stu.size(); i++) {
		maxium += stu[i].score;
	}
	avgscore = maxium / i;
	std::cout << "the averagescore is:\t" << avgscore << std::endl;
}

//用vector做结构数组的尝试
int main() {
	int n;
	std::cout << "put in how much student in your class:\t" << std::endl;
	std::cin >> n;
	std::vector<student> stu = putinstu(n);
	putoutstu(stu);
	minmaxscore(stu);
	avgscore(stu);
	return 0;
}