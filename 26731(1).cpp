#include <stdio.h>


//今天学枚举 
//形式是enum 枚举类型名字 {名字1，名字2————名字n}; 
//可以和switch-case搭配 
//enum其实可以当作int输入输出 
//主要作用是定义符号量而不是当作枚举类型来用 

enum color {
	red,green,blue,numofcolors
};
	
void f(enum color c);

int main(void) {
    enum color t = red;
    scanf("%d",&t);
    f(t);
	return 0; 
}

void f(enum color c) {
	printf("%d\n",c);
}
