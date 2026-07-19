#include <stdio.h>
#include <math.h>

int main () {
	
    double ff =1234.56789; 
    printf("%e\n",ff);
    
    //判断两个浮点数是否相等
	double a,b,c,d;
	a = 1.345f;
	b = 1.123f;
	c = a+b;
	d = fabs(2.468-c);
	if (d < 1e-8)
	printf("相等\n");
	else 
	printf("不相等！c=%.10f,或%f\n",c,c); 
	
	//char可以表示字符也可以表示整数
	char e;
	char f;
	e = 1;
	f = '1';
	if (e==f) {
		printf("相等\n");
	} else {
		printf("不相等\n");
	}
	scanf("%c",&e);
	printf("%d,%c\n",e,e);
	//char可以被赋值为字母，++后按照ASCII码进行编排加减 
	e = 'A';
	e++;
	printf("%c\n",e);
	
	//\t是使得输出文本自动对齐的一个逃逸字符
	//其他的还有\n\r\b\"\\
	//强制类型转换,优先级高于四则运算 
	int i =32768;
	short s = (short)i;
	printf("%d,%d\n",s,i); 
	return 0;
}
