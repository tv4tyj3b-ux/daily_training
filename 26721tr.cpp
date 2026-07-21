#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main () {
	bool b= 6>5;
	bool t = true;
	printf("%d %d\n",b,t);
	
	//如果要表达数学之中的区间，不能用下x<y<z这样
	//因为逻辑判断只能给出逻辑值 
	//因为会先判断x<y,只能给出0（yes）或1（no）
	//后面的y和z无论怎么算都会炸缸
	//所以判断是应该分开使用，x>y&&x<z
	//优先级! > && > ||
	
	int count = 0;
	count = (count>20) ? count - 10 :count  + 10;
	//if(count>20)
	//count = count - 10;
	//else
	//count = count + 10; 
	//不推荐使用 
	return 0;
}
