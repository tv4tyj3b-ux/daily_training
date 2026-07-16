#include <stdio.h>
int main () {
	
	//sizeof的使用方式
	//sizeof是一个运算符，可以给出某个类型/变量在内存中占的字节数
	int a;
	a = 6;
	printf("sizeof(char)=%ld\n",sizeof(char));
	printf("sizeof(short)=%ld\n",sizeof(short));
	printf("sizeof(int)=%ld\n",sizeof(int)); 
	printf("sizeof(float)=%ld\n",sizeof(float));
	printf("sizeof(double)=%ld\n",sizeof(double));
	printf("sizeof(long double)=%ld\n",sizeof(long double));
	printf("sizeof(a)=%ld\n",sizeof(a));
	
	//确认不同位数以及不同类型下，同一个十位数的区别
	char c = 255;
	int i = 255;
	printf("c=%d,i=%d",c,i);
	 
	//不显示补码或者纯二进制运算的话可以在变量前面加unsigned
	unsigned char b = 255;
	printf("b=%d\n",b);
	
	//变量c是可以被c+1赋值的
	//具体落实就是c = c+1;
	
	//推算某个类型下面数的边界
	short d = 0;
	while (++d>0){
		;
		printf("int数据类型的最大数是%d\n",d-1);
	} 
	
	
	return 0;
}
