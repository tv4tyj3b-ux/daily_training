#include <stdio.h>
#define cube(x) ((x)*(x)*(x))
//宏的学习
//宏可以带参数
//#define 名字 值 
int main(int argc,char const *argv[]) {
	printf("%s:%d\n",__FILE__,__LINE__);
	printf("%s,%s\n",__DATE__,__TIME__);
	printf("%d\n",cube(5));
	printf("%s\n",__STDC__);
	return 0;
}
