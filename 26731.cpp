#include <stdio.h>
//构建成绩分级函数
int result(int &res){
	if (res>=90) {
		printf("等级A");
	} else if (res>=80 && res<90) {
		printf("等级B");
	} else if (res>=70 && res<80) {
		printf("等级C");
	} else if (res>=60 && res<70) {
		printf("等级D");
	} else {
		printf("等级E");
	}
	return 0;
} 

char judgech (char &num) {
	if (num<32) {
		printf("control character");
	}
	else if (num>='0' && num<='9') {
		printf("数字");
	}
	else if (num>='A' && num<='Z') {
		printf("大写字母");
	}
	else if (num>='a' && num<='z') {
		printf("小写字母");
	}
	else {
		printf("其他字符");
	}
	return 0;
}
//构建输入字符分类函数
 
//主函数 
int main() {
	int res;
	printf("输入您的成绩：\n");
	scanf("%d",&res);
	result(res);
	printf("\n");
	
	char ch;
	printf("输入你想判别类型的字符：\n");
	scanf("%c", &ch);
	judgech(ch);
	return 0;
}
