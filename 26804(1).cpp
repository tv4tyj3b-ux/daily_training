#include <stdio.h>
int gall = 12;

int f (void) {
	static int all = 1;
	int k = 0;
	printf("&k=%p\n",&k);
	printf("&all=%p\n",&all);
	printf("&gall=%p\n",&gall);
	printf("in %s all=%d\n",__func__,all);
	all += 2;
	printf("agn in %s gall=%d\n",__func__,all);
	return all;
}
//静态本地变量实际上就是挂着本地变量名号的全局变量
//static前缀 
int main() {
	printf("in %s gall=%d\n",__func__,gall);
	f();
	f();
	f();
	printf("agn in %s gall=%d\n",__func__,gall);
	return 0;
}
